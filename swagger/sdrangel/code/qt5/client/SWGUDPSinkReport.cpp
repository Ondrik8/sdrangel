/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.1.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGUDPSinkReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGUDPSinkReport::SWGUDPSinkReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUDPSinkReport::SWGUDPSinkReport() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    input_power_db = 0.0f;
    m_input_power_db_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    buffer_gauge = 0;
    m_buffer_gauge_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
}

SWGUDPSinkReport::~SWGUDPSinkReport() {
    this->cleanup();
}

void
SWGUDPSinkReport::init() {
    channel_power_db = 0.0f;
    m_channel_power_db_isSet = false;
    input_power_db = 0.0f;
    m_input_power_db_isSet = false;
    squelch = 0;
    m_squelch_isSet = false;
    buffer_gauge = 0;
    m_buffer_gauge_isSet = false;
    channel_sample_rate = 0;
    m_channel_sample_rate_isSet = false;
}

void
SWGUDPSinkReport::cleanup() {





}

SWGUDPSinkReport*
SWGUDPSinkReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUDPSinkReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channel_power_db, pJson["channelPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&input_power_db, pJson["inputPowerDB"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "qint32", "");
    
    ::SWGSDRangel::setValue(&buffer_gauge, pJson["bufferGauge"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_sample_rate, pJson["channelSampleRate"], "qint32", "");
    
}

QString
SWGUDPSinkReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGUDPSinkReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_channel_power_db_isSet){
        obj->insert("channelPowerDB", QJsonValue(channel_power_db));
    }
    if(m_input_power_db_isSet){
        obj->insert("inputPowerDB", QJsonValue(input_power_db));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_buffer_gauge_isSet){
        obj->insert("bufferGauge", QJsonValue(buffer_gauge));
    }
    if(m_channel_sample_rate_isSet){
        obj->insert("channelSampleRate", QJsonValue(channel_sample_rate));
    }

    return obj;
}

float
SWGUDPSinkReport::getChannelPowerDb() {
    return channel_power_db;
}
void
SWGUDPSinkReport::setChannelPowerDb(float channel_power_db) {
    this->channel_power_db = channel_power_db;
    this->m_channel_power_db_isSet = true;
}

float
SWGUDPSinkReport::getInputPowerDb() {
    return input_power_db;
}
void
SWGUDPSinkReport::setInputPowerDb(float input_power_db) {
    this->input_power_db = input_power_db;
    this->m_input_power_db_isSet = true;
}

qint32
SWGUDPSinkReport::getSquelch() {
    return squelch;
}
void
SWGUDPSinkReport::setSquelch(qint32 squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGUDPSinkReport::getBufferGauge() {
    return buffer_gauge;
}
void
SWGUDPSinkReport::setBufferGauge(qint32 buffer_gauge) {
    this->buffer_gauge = buffer_gauge;
    this->m_buffer_gauge_isSet = true;
}

qint32
SWGUDPSinkReport::getChannelSampleRate() {
    return channel_sample_rate;
}
void
SWGUDPSinkReport::setChannelSampleRate(qint32 channel_sample_rate) {
    this->channel_sample_rate = channel_sample_rate;
    this->m_channel_sample_rate_isSet = true;
}


bool
SWGUDPSinkReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_channel_power_db_isSet){ isObjectUpdated = true; break;}
        if(m_input_power_db_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_isSet){ isObjectUpdated = true; break;}
        if(m_buffer_gauge_isSet){ isObjectUpdated = true; break;}
        if(m_channel_sample_rate_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

