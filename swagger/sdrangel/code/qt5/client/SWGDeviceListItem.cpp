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


#include "SWGDeviceListItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceListItem::SWGDeviceListItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceListItem::SWGDeviceListItem() {
    displayed_name = nullptr;
    m_displayed_name_isSet = false;
    hw_type = nullptr;
    m_hw_type_isSet = false;
    serial = nullptr;
    m_serial_isSet = false;
    sequence = 0;
    m_sequence_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    nb_streams = 0;
    m_nb_streams_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    device_set_index = 0;
    m_device_set_index_isSet = false;
    index = 0;
    m_index_isSet = false;
}

SWGDeviceListItem::~SWGDeviceListItem() {
    this->cleanup();
}

void
SWGDeviceListItem::init() {
    displayed_name = new QString("");
    m_displayed_name_isSet = false;
    hw_type = new QString("");
    m_hw_type_isSet = false;
    serial = new QString("");
    m_serial_isSet = false;
    sequence = 0;
    m_sequence_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    nb_streams = 0;
    m_nb_streams_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    device_set_index = 0;
    m_device_set_index_isSet = false;
    index = 0;
    m_index_isSet = false;
}

void
SWGDeviceListItem::cleanup() {
    if(displayed_name != nullptr) { 
        delete displayed_name;
    }
    if(hw_type != nullptr) { 
        delete hw_type;
    }
    if(serial != nullptr) { 
        delete serial;
    }






}

SWGDeviceListItem*
SWGDeviceListItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceListItem::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&displayed_name, pJson["displayedName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&hw_type, pJson["hwType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&serial, pJson["serial"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&sequence, pJson["sequence"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_streams, pJson["nbStreams"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&device_set_index, pJson["deviceSetIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
    
}

QString
SWGDeviceListItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceListItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(displayed_name != nullptr && *displayed_name != QString("")){
        toJsonValue(QString("displayedName"), displayed_name, obj, QString("QString"));
    }
    if(hw_type != nullptr && *hw_type != QString("")){
        toJsonValue(QString("hwType"), hw_type, obj, QString("QString"));
    }
    if(serial != nullptr && *serial != QString("")){
        toJsonValue(QString("serial"), serial, obj, QString("QString"));
    }
    if(m_sequence_isSet){
        obj->insert("sequence", QJsonValue(sequence));
    }
    if(m_tx_isSet){
        obj->insert("tx", QJsonValue(tx));
    }
    if(m_nb_streams_isSet){
        obj->insert("nbStreams", QJsonValue(nb_streams));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_device_set_index_isSet){
        obj->insert("deviceSetIndex", QJsonValue(device_set_index));
    }
    if(m_index_isSet){
        obj->insert("index", QJsonValue(index));
    }

    return obj;
}

QString*
SWGDeviceListItem::getDisplayedName() {
    return displayed_name;
}
void
SWGDeviceListItem::setDisplayedName(QString* displayed_name) {
    this->displayed_name = displayed_name;
    this->m_displayed_name_isSet = true;
}

QString*
SWGDeviceListItem::getHwType() {
    return hw_type;
}
void
SWGDeviceListItem::setHwType(QString* hw_type) {
    this->hw_type = hw_type;
    this->m_hw_type_isSet = true;
}

QString*
SWGDeviceListItem::getSerial() {
    return serial;
}
void
SWGDeviceListItem::setSerial(QString* serial) {
    this->serial = serial;
    this->m_serial_isSet = true;
}

qint32
SWGDeviceListItem::getSequence() {
    return sequence;
}
void
SWGDeviceListItem::setSequence(qint32 sequence) {
    this->sequence = sequence;
    this->m_sequence_isSet = true;
}

qint32
SWGDeviceListItem::getTx() {
    return tx;
}
void
SWGDeviceListItem::setTx(qint32 tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

qint32
SWGDeviceListItem::getNbStreams() {
    return nb_streams;
}
void
SWGDeviceListItem::setNbStreams(qint32 nb_streams) {
    this->nb_streams = nb_streams;
    this->m_nb_streams_isSet = true;
}

qint32
SWGDeviceListItem::getStreamIndex() {
    return stream_index;
}
void
SWGDeviceListItem::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGDeviceListItem::getDeviceSetIndex() {
    return device_set_index;
}
void
SWGDeviceListItem::setDeviceSetIndex(qint32 device_set_index) {
    this->device_set_index = device_set_index;
    this->m_device_set_index_isSet = true;
}

qint32
SWGDeviceListItem::getIndex() {
    return index;
}
void
SWGDeviceListItem::setIndex(qint32 index) {
    this->index = index;
    this->m_index_isSet = true;
}


bool
SWGDeviceListItem::isSet(){
    bool isObjectUpdated = false;
    do{
        if(displayed_name != nullptr && *displayed_name != QString("")){ isObjectUpdated = true; break;}
        if(hw_type != nullptr && *hw_type != QString("")){ isObjectUpdated = true; break;}
        if(serial != nullptr && *serial != QString("")){ isObjectUpdated = true; break;}
        if(m_sequence_isSet){ isObjectUpdated = true; break;}
        if(m_tx_isSet){ isObjectUpdated = true; break;}
        if(m_nb_streams_isSet){ isObjectUpdated = true; break;}
        if(m_stream_index_isSet){ isObjectUpdated = true; break;}
        if(m_device_set_index_isSet){ isObjectUpdated = true; break;}
        if(m_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

