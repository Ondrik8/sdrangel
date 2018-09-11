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


#include "SWGAMModSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAMModSettings::SWGAMModSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAMModSettings::SWGAMModSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    mod_factor = 0.0f;
    m_mod_factor_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    cw_keyer = nullptr;
    m_cw_keyer_isSet = false;
}

SWGAMModSettings::~SWGAMModSettings() {
    this->cleanup();
}

void
SWGAMModSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    mod_factor = 0.0f;
    m_mod_factor_isSet = false;
    tone_frequency = 0.0f;
    m_tone_frequency_isSet = false;
    volume_factor = 0.0f;
    m_volume_factor_isSet = false;
    channel_mute = 0;
    m_channel_mute_isSet = false;
    play_loop = 0;
    m_play_loop_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    mod_af_input = 0;
    m_mod_af_input_isSet = false;
    cw_keyer = new SWGCWKeyerSettings();
    m_cw_keyer_isSet = false;
}

void
SWGAMModSettings::cleanup() {








    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }

    if(cw_keyer != nullptr) { 
        delete cw_keyer;
    }
}

SWGAMModSettings*
SWGAMModSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAMModSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&mod_factor, pJson["modFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&tone_frequency, pJson["toneFrequency"], "float", "");
    
    ::SWGSDRangel::setValue(&volume_factor, pJson["volumeFactor"], "float", "");
    
    ::SWGSDRangel::setValue(&channel_mute, pJson["channelMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&play_loop, pJson["playLoop"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&mod_af_input, pJson["modAFInput"], "qint32", "");
    
    ::SWGSDRangel::setValue(&cw_keyer, pJson["cwKeyer"], "SWGCWKeyerSettings", "SWGCWKeyerSettings");
    
}

QString
SWGAMModSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAMModSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_mod_factor_isSet){
        obj->insert("modFactor", QJsonValue(mod_factor));
    }
    if(m_tone_frequency_isSet){
        obj->insert("toneFrequency", QJsonValue(tone_frequency));
    }
    if(m_volume_factor_isSet){
        obj->insert("volumeFactor", QJsonValue(volume_factor));
    }
    if(m_channel_mute_isSet){
        obj->insert("channelMute", QJsonValue(channel_mute));
    }
    if(m_play_loop_isSet){
        obj->insert("playLoop", QJsonValue(play_loop));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_mod_af_input_isSet){
        obj->insert("modAFInput", QJsonValue(mod_af_input));
    }
    if((cw_keyer != nullptr) && (cw_keyer->isSet())){
        toJsonValue(QString("cwKeyer"), cw_keyer, obj, QString("SWGCWKeyerSettings"));
    }

    return obj;
}

qint64
SWGAMModSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGAMModSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGAMModSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGAMModSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGAMModSettings::getModFactor() {
    return mod_factor;
}
void
SWGAMModSettings::setModFactor(float mod_factor) {
    this->mod_factor = mod_factor;
    this->m_mod_factor_isSet = true;
}

float
SWGAMModSettings::getToneFrequency() {
    return tone_frequency;
}
void
SWGAMModSettings::setToneFrequency(float tone_frequency) {
    this->tone_frequency = tone_frequency;
    this->m_tone_frequency_isSet = true;
}

float
SWGAMModSettings::getVolumeFactor() {
    return volume_factor;
}
void
SWGAMModSettings::setVolumeFactor(float volume_factor) {
    this->volume_factor = volume_factor;
    this->m_volume_factor_isSet = true;
}

qint32
SWGAMModSettings::getChannelMute() {
    return channel_mute;
}
void
SWGAMModSettings::setChannelMute(qint32 channel_mute) {
    this->channel_mute = channel_mute;
    this->m_channel_mute_isSet = true;
}

qint32
SWGAMModSettings::getPlayLoop() {
    return play_loop;
}
void
SWGAMModSettings::setPlayLoop(qint32 play_loop) {
    this->play_loop = play_loop;
    this->m_play_loop_isSet = true;
}

qint32
SWGAMModSettings::getRgbColor() {
    return rgb_color;
}
void
SWGAMModSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGAMModSettings::getTitle() {
    return title;
}
void
SWGAMModSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGAMModSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGAMModSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGAMModSettings::getModAfInput() {
    return mod_af_input;
}
void
SWGAMModSettings::setModAfInput(qint32 mod_af_input) {
    this->mod_af_input = mod_af_input;
    this->m_mod_af_input_isSet = true;
}

SWGCWKeyerSettings*
SWGAMModSettings::getCwKeyer() {
    return cw_keyer;
}
void
SWGAMModSettings::setCwKeyer(SWGCWKeyerSettings* cw_keyer) {
    this->cw_keyer = cw_keyer;
    this->m_cw_keyer_isSet = true;
}


bool
SWGAMModSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_rf_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_mod_factor_isSet){ isObjectUpdated = true; break;}
        if(m_tone_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_volume_factor_isSet){ isObjectUpdated = true; break;}
        if(m_channel_mute_isSet){ isObjectUpdated = true; break;}
        if(m_play_loop_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(audio_device_name != nullptr && *audio_device_name != QString("")){ isObjectUpdated = true; break;}
        if(m_mod_af_input_isSet){ isObjectUpdated = true; break;}
        if(cw_keyer != nullptr && cw_keyer->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

