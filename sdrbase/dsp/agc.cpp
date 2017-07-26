/*
 * agc.cpp
 *
 *  Created on: Sep 7, 2015
 *      Author: f4exb
 */

#include <algorithm>
#include "dsp/agc.h"
#include "util/smootherstep.h"

#define StepLengthMax 4800 // 100ms

AGC::AGC(int historySize, Real R) :
	m_u0(1.0),
	m_R(R),
	m_moving_average(historySize, m_R),
	m_historySize(historySize),
	m_count(0)
{}

AGC::~AGC()
{}

void AGC::resize(int historySize, Real R)
{
	m_R = R;
	m_moving_average.resize(historySize, R);
	m_historySize = historySize;
	m_count = 0;
}

Real AGC::getValue()
{
	return m_u0;
}

Real AGC::getAverage()
{
	return m_moving_average.average();
}

//MagSquaredAGC::MagSquaredAGC() :
//	AGC(),
//	m_magsq(0.0)
//{}

MagSquaredAGC::MagSquaredAGC(int historySize, double R, double threshold) :
	AGC(historySize, R),
	m_magsq(0.0),
	m_threshold(threshold),
	m_gate(0),
	m_stepLength(std::min(StepLengthMax, historySize/2)),
	m_stepUpCounter(0),
    m_stepDownCounter(m_stepLength),
	m_gateCounter(0)
{}

MagSquaredAGC::~MagSquaredAGC()
{}

void MagSquaredAGC::resize(int historySize, Real R)
{
    m_stepLength = std::min(StepLengthMax, historySize/2);
    AGC::resize(historySize, R);
}

void MagSquaredAGC::feed(Complex& ci)
{
	m_magsq = ci.real()*ci.real() + ci.imag()*ci.imag();
	m_moving_average.feed(m_magsq);
	m_u0 = m_R / m_moving_average.average();
	ci *= m_u0;
}

double MagSquaredAGC::feedAndGetValue(const Complex& ci)
{
    m_magsq = ci.real()*ci.real() + ci.imag()*ci.imag();
    m_moving_average.feed(m_magsq);
    m_u0 = m_R / m_moving_average.average();

    if (m_magsq > m_threshold)
    {
        if (m_gateCounter < m_gate)
        {
            m_gateCounter++;
        }
        else
        {
            m_count = 0;
        }
    }
    else
    {
        if (m_count < m_moving_average.historySize()) {
            m_count++;
        }

        m_gateCounter = 0;
    }

    if (m_count <  m_moving_average.historySize())
    {
        m_stepDownCounter = m_stepLength;

        if (m_stepUpCounter < m_stepLength) {
            m_stepUpCounter++;
        }

        return m_u0 * StepFunctions::smootherstep( ((float) m_stepUpCounter) / ((float) m_stepLength) );
    }
    else
    {
        m_stepUpCounter = 0;

        if (m_stepDownCounter > 0) {
            m_stepDownCounter--;
        }

        return m_u0 * StepFunctions::smootherstep( ((float) m_stepDownCounter) / ((float) m_stepLength) );
    }

    //return (m_count <  m_moving_average.historySize()) ? m_u0 : 0.0;
}

//MagAGC::MagAGC() :
//	AGC(),
//	m_magsq(0.0)
//{}

MagAGC::MagAGC(int historySize, double R, double threshold) :
	AGC(historySize, R),
	m_magsq(0.0),
	m_threshold(threshold),
	m_gate(0),
	m_stepLength(std::min(StepLengthMax, historySize/2)),
	m_stepUpCounter(0),
    m_stepDownCounter(m_stepLength),
	m_gateCounter(0)
{}

MagAGC::~MagAGC()
{}

void MagAGC::resize(int historySize, Real R)
{
    m_stepLength = std::min(StepLengthMax, historySize/2);
    AGC::resize(historySize, R);
}

void MagAGC::feed(Complex& ci)
{
	m_magsq = ci.real()*ci.real() + ci.imag()*ci.imag();
	m_moving_average.feed(m_magsq);
	m_u0 = m_R / sqrt(m_moving_average.average());
	ci *= m_u0;
}

double MagAGC::feedAndGetValue(const Complex& ci)
{
    m_magsq = ci.real()*ci.real() + ci.imag()*ci.imag();
    m_moving_average.feed(m_magsq);
    m_u0 = m_R / sqrt(m_moving_average.average());

    if (m_magsq > m_threshold)
    {
        if (m_gateCounter < m_gate)
        {
            m_gateCounter++;
        }
        else
        {
            m_count = 0;
        }
    }
    else
    {
        if (m_count < m_moving_average.historySize()) {
            m_count++;
        }

        m_gateCounter = 0;
    }

    if (m_count <  m_moving_average.historySize())
    {
        m_stepDownCounter = m_stepLength;

        if (m_stepUpCounter < m_stepLength) {
            m_stepUpCounter++;
        }

        return m_u0 * StepFunctions::smootherstep( ((float) m_stepUpCounter) / ((float) m_stepLength) );
    }
    else
    {
        m_stepUpCounter = 0;

        if (m_stepDownCounter > 0) {
            m_stepDownCounter--;
        }

        return m_u0 * StepFunctions::smootherstep( ((float) m_stepDownCounter) / ((float) m_stepLength) );
    }

    //return (m_count <  m_moving_average.historySize()) ? m_u0 : 0.0;
}

//AlphaAGC::AlphaAGC() :
//	AGC(),
//	m_alpha(0.5),
//	m_magsq(0.0),
//	m_squelchOpen(true)
//{}

AlphaAGC::AlphaAGC(int historySize, Real R) :
	AGC(historySize, R),
	m_alpha(0.5),
	m_magsq(0.0),
	m_squelchOpen(true)
{}


AlphaAGC::AlphaAGC(int historySize, Real R, Real alpha) :
	AGC(historySize, R),
	m_alpha(alpha),
	m_magsq(0.0),
	m_squelchOpen(true)
{}

AlphaAGC::~AlphaAGC()
{}

void AlphaAGC::resize(int historySize, Real R, Real alpha)
{
	 m_R = R;
	 m_alpha = alpha;
	 m_squelchOpen = true;
	 m_moving_average.resize(historySize, R);
}

void AlphaAGC::feed(Complex& ci)
{
	m_magsq = ci.real()*ci.real() + ci.imag()*ci.imag();

	if (m_squelchOpen && (m_magsq))
	{
		m_moving_average.feed(m_moving_average.average() - m_alpha*(m_moving_average.average() - m_magsq));
	}
	else
	{
		//m_squelchOpen = true;
		m_moving_average.feed(m_magsq);
	}
	ci *= m_u0;
}
