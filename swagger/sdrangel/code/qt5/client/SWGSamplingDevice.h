/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGSamplingDevice.h
 * 
 * Information about a logical device available from an attached hardware device that can be used as a sampling device
 */

#ifndef SWGSamplingDevice_H_
#define SWGSamplingDevice_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSamplingDevice: public SWGObject {
public:
    SWGSamplingDevice();
    SWGSamplingDevice(QString* json);
    virtual ~SWGSamplingDevice();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSamplingDevice* fromJson(QString &jsonString);

    qint32 getIndex();
    void setIndex(qint32 index);

    QString* getHwType();
    void setHwType(QString* hw_type);

    bool getTx();
    void setTx(bool tx);

    qint32 getNbStreams();
    void setNbStreams(qint32 nb_streams);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getSequence();
    void setSequence(qint32 sequence);

    QString* getSerial();
    void setSerial(QString* serial);

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getBandwidth();
    void setBandwidth(qint32 bandwidth);


private:
    qint32 index;
    QString* hw_type;
    bool tx;
    qint32 nb_streams;
    qint32 stream_index;
    qint32 sequence;
    QString* serial;
    qint64 center_frequency;
    qint32 bandwidth;
};

}

#endif /* SWGSamplingDevice_H_ */
