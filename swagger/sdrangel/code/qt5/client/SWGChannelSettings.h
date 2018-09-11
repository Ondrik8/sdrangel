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

/*
 * SWGChannelSettings.h
 *
 * Base channel settings. Only the channel settings corresponding to the channel specified in the channelType field is or should be present.
 */

#ifndef SWGChannelSettings_H_
#define SWGChannelSettings_H_

#include <QJsonObject>


#include "SWGAMDemodSettings.h"
#include "SWGAMModSettings.h"
#include "SWGATVModSettings.h"
#include "SWGBFMDemodSettings.h"
#include "SWGDSDDemodSettings.h"
#include "SWGDaemonSinkSettings.h"
#include "SWGDaemonSourceSettings.h"
#include "SWGNFMDemodSettings.h"
#include "SWGNFMModSettings.h"
#include "SWGSSBDemodSettings.h"
#include "SWGSSBModSettings.h"
#include "SWGUDPSinkSettings.h"
#include "SWGUDPSrcSettings.h"
#include "SWGWFMDemodSettings.h"
#include "SWGWFMModSettings.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGChannelSettings: public SWGObject {
public:
    SWGChannelSettings();
    SWGChannelSettings(QString* json);
    virtual ~SWGChannelSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGChannelSettings* fromJson(QString &jsonString) override;

    QString* getChannelType();
    void setChannelType(QString* channel_type);

    qint32 getTx();
    void setTx(qint32 tx);

    SWGAMDemodSettings* getAmDemodSettings();
    void setAmDemodSettings(SWGAMDemodSettings* am_demod_settings);

    SWGAMModSettings* getAmModSettings();
    void setAmModSettings(SWGAMModSettings* am_mod_settings);

    SWGATVModSettings* getAtvModSettings();
    void setAtvModSettings(SWGATVModSettings* atv_mod_settings);

    SWGBFMDemodSettings* getBfmDemodSettings();
    void setBfmDemodSettings(SWGBFMDemodSettings* bfm_demod_settings);

    SWGDSDDemodSettings* getDsdDemodSettings();
    void setDsdDemodSettings(SWGDSDDemodSettings* dsd_demod_settings);

    SWGNFMDemodSettings* getNfmDemodSettings();
    void setNfmDemodSettings(SWGNFMDemodSettings* nfm_demod_settings);

    SWGNFMModSettings* getNfmModSettings();
    void setNfmModSettings(SWGNFMModSettings* nfm_mod_settings);

    SWGDaemonSinkSettings* getDaemonSinkSettings();
    void setDaemonSinkSettings(SWGDaemonSinkSettings* daemon_sink_settings);

    SWGDaemonSourceSettings* getDaemonSourceSettings();
    void setDaemonSourceSettings(SWGDaemonSourceSettings* daemon_source_settings);

    SWGSSBModSettings* getSsbModSettings();
    void setSsbModSettings(SWGSSBModSettings* ssb_mod_settings);

    SWGSSBDemodSettings* getSsbDemodSettings();
    void setSsbDemodSettings(SWGSSBDemodSettings* ssb_demod_settings);

    SWGUDPSinkSettings* getUdpSinkSettings();
    void setUdpSinkSettings(SWGUDPSinkSettings* udp_sink_settings);

    SWGUDPSrcSettings* getUdpSrcSettings();
    void setUdpSrcSettings(SWGUDPSrcSettings* udp_src_settings);

    SWGWFMDemodSettings* getWfmDemodSettings();
    void setWfmDemodSettings(SWGWFMDemodSettings* wfm_demod_settings);

    SWGWFMModSettings* getWfmModSettings();
    void setWfmModSettings(SWGWFMModSettings* wfm_mod_settings);


    virtual bool isSet() override;

private:
    QString* channel_type;
    bool m_channel_type_isSet;

    qint32 tx;
    bool m_tx_isSet;

    SWGAMDemodSettings* am_demod_settings;
    bool m_am_demod_settings_isSet;

    SWGAMModSettings* am_mod_settings;
    bool m_am_mod_settings_isSet;

    SWGATVModSettings* atv_mod_settings;
    bool m_atv_mod_settings_isSet;

    SWGBFMDemodSettings* bfm_demod_settings;
    bool m_bfm_demod_settings_isSet;

    SWGDSDDemodSettings* dsd_demod_settings;
    bool m_dsd_demod_settings_isSet;

    SWGNFMDemodSettings* nfm_demod_settings;
    bool m_nfm_demod_settings_isSet;

    SWGNFMModSettings* nfm_mod_settings;
    bool m_nfm_mod_settings_isSet;

    SWGDaemonSinkSettings* daemon_sink_settings;
    bool m_daemon_sink_settings_isSet;

    SWGDaemonSourceSettings* daemon_source_settings;
    bool m_daemon_source_settings_isSet;

    SWGSSBModSettings* ssb_mod_settings;
    bool m_ssb_mod_settings_isSet;

    SWGSSBDemodSettings* ssb_demod_settings;
    bool m_ssb_demod_settings_isSet;

    SWGUDPSinkSettings* udp_sink_settings;
    bool m_udp_sink_settings_isSet;

    SWGUDPSrcSettings* udp_src_settings;
    bool m_udp_src_settings_isSet;

    SWGWFMDemodSettings* wfm_demod_settings;
    bool m_wfm_demod_settings_isSet;

    SWGWFMModSettings* wfm_mod_settings;
    bool m_wfm_mod_settings_isSet;

};

}

#endif /* SWGChannelSettings_H_ */
