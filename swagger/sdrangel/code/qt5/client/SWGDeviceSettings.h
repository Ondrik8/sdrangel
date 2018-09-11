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
 * SWGDeviceSettings.h
 *
 * Base device settings. Only the device settings corresponding to the device specified in the deviceHwType field is or should be present.
 */

#ifndef SWGDeviceSettings_H_
#define SWGDeviceSettings_H_

#include <QJsonObject>


#include "SWGAirspyHFSettings.h"
#include "SWGAirspySettings.h"
#include "SWGBladeRFInputSettings.h"
#include "SWGBladeRFOutputSettings.h"
#include "SWGFCDProPlusSettings.h"
#include "SWGFCDProSettings.h"
#include "SWGFileSourceSettings.h"
#include "SWGHackRFInputSettings.h"
#include "SWGHackRFOutputSettings.h"
#include "SWGLimeSdrInputSettings.h"
#include "SWGLimeSdrOutputSettings.h"
#include "SWGPerseusSettings.h"
#include "SWGPlutoSdrInputSettings.h"
#include "SWGPlutoSdrOutputSettings.h"
#include "SWGRtlSdrSettings.h"
#include "SWGSDRPlaySettings.h"
#include "SWGSDRdaemonSinkSettings.h"
#include "SWGSDRdaemonSourceSettings.h"
#include "SWGTestSourceSettings.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGDeviceSettings: public SWGObject {
public:
    SWGDeviceSettings();
    SWGDeviceSettings(QString* json);
    virtual ~SWGDeviceSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGDeviceSettings* fromJson(QString &jsonString) override;

    QString* getDeviceHwType();
    void setDeviceHwType(QString* device_hw_type);

    qint32 getTx();
    void setTx(qint32 tx);

    SWGAirspySettings* getAirspySettings();
    void setAirspySettings(SWGAirspySettings* airspy_settings);

    SWGAirspyHFSettings* getAirspyHfSettings();
    void setAirspyHfSettings(SWGAirspyHFSettings* airspy_hf_settings);

    SWGBladeRFInputSettings* getBladeRfInputSettings();
    void setBladeRfInputSettings(SWGBladeRFInputSettings* blade_rf_input_settings);

    SWGBladeRFOutputSettings* getBladeRfOutputSettings();
    void setBladeRfOutputSettings(SWGBladeRFOutputSettings* blade_rf_output_settings);

    SWGFCDProSettings* getFcdProSettings();
    void setFcdProSettings(SWGFCDProSettings* fcd_pro_settings);

    SWGFCDProPlusSettings* getFcdProPlusSettings();
    void setFcdProPlusSettings(SWGFCDProPlusSettings* fcd_pro_plus_settings);

    SWGFileSourceSettings* getFileSourceSettings();
    void setFileSourceSettings(SWGFileSourceSettings* file_source_settings);

    SWGHackRFInputSettings* getHackRfInputSettings();
    void setHackRfInputSettings(SWGHackRFInputSettings* hack_rf_input_settings);

    SWGHackRFOutputSettings* getHackRfOutputSettings();
    void setHackRfOutputSettings(SWGHackRFOutputSettings* hack_rf_output_settings);

    SWGLimeSdrInputSettings* getLimeSdrInputSettings();
    void setLimeSdrInputSettings(SWGLimeSdrInputSettings* lime_sdr_input_settings);

    SWGLimeSdrOutputSettings* getLimeSdrOutputSettings();
    void setLimeSdrOutputSettings(SWGLimeSdrOutputSettings* lime_sdr_output_settings);

    SWGPerseusSettings* getPerseusSettings();
    void setPerseusSettings(SWGPerseusSettings* perseus_settings);

    SWGPlutoSdrInputSettings* getPlutoSdrInputSettings();
    void setPlutoSdrInputSettings(SWGPlutoSdrInputSettings* pluto_sdr_input_settings);

    SWGPlutoSdrOutputSettings* getPlutoSdrOutputSettings();
    void setPlutoSdrOutputSettings(SWGPlutoSdrOutputSettings* pluto_sdr_output_settings);

    SWGRtlSdrSettings* getRtlSdrSettings();
    void setRtlSdrSettings(SWGRtlSdrSettings* rtl_sdr_settings);

    SWGSDRdaemonSinkSettings* getSdrDaemonSinkSettings();
    void setSdrDaemonSinkSettings(SWGSDRdaemonSinkSettings* sdr_daemon_sink_settings);

    SWGSDRdaemonSourceSettings* getSdrDaemonSourceSettings();
    void setSdrDaemonSourceSettings(SWGSDRdaemonSourceSettings* sdr_daemon_source_settings);

    SWGSDRPlaySettings* getSdrPlaySettings();
    void setSdrPlaySettings(SWGSDRPlaySettings* sdr_play_settings);

    SWGTestSourceSettings* getTestSourceSettings();
    void setTestSourceSettings(SWGTestSourceSettings* test_source_settings);


    virtual bool isSet() override;

private:
    QString* device_hw_type;
    bool m_device_hw_type_isSet;

    qint32 tx;
    bool m_tx_isSet;

    SWGAirspySettings* airspy_settings;
    bool m_airspy_settings_isSet;

    SWGAirspyHFSettings* airspy_hf_settings;
    bool m_airspy_hf_settings_isSet;

    SWGBladeRFInputSettings* blade_rf_input_settings;
    bool m_blade_rf_input_settings_isSet;

    SWGBladeRFOutputSettings* blade_rf_output_settings;
    bool m_blade_rf_output_settings_isSet;

    SWGFCDProSettings* fcd_pro_settings;
    bool m_fcd_pro_settings_isSet;

    SWGFCDProPlusSettings* fcd_pro_plus_settings;
    bool m_fcd_pro_plus_settings_isSet;

    SWGFileSourceSettings* file_source_settings;
    bool m_file_source_settings_isSet;

    SWGHackRFInputSettings* hack_rf_input_settings;
    bool m_hack_rf_input_settings_isSet;

    SWGHackRFOutputSettings* hack_rf_output_settings;
    bool m_hack_rf_output_settings_isSet;

    SWGLimeSdrInputSettings* lime_sdr_input_settings;
    bool m_lime_sdr_input_settings_isSet;

    SWGLimeSdrOutputSettings* lime_sdr_output_settings;
    bool m_lime_sdr_output_settings_isSet;

    SWGPerseusSettings* perseus_settings;
    bool m_perseus_settings_isSet;

    SWGPlutoSdrInputSettings* pluto_sdr_input_settings;
    bool m_pluto_sdr_input_settings_isSet;

    SWGPlutoSdrOutputSettings* pluto_sdr_output_settings;
    bool m_pluto_sdr_output_settings_isSet;

    SWGRtlSdrSettings* rtl_sdr_settings;
    bool m_rtl_sdr_settings_isSet;

    SWGSDRdaemonSinkSettings* sdr_daemon_sink_settings;
    bool m_sdr_daemon_sink_settings_isSet;

    SWGSDRdaemonSourceSettings* sdr_daemon_source_settings;
    bool m_sdr_daemon_source_settings_isSet;

    SWGSDRPlaySettings* sdr_play_settings;
    bool m_sdr_play_settings_isSet;

    SWGTestSourceSettings* test_source_settings;
    bool m_test_source_settings_isSet;

};

}

#endif /* SWGDeviceSettings_H_ */
