// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "d53e5b82-ef41-49ca-bd0d-14a7549cb766";

const char SSID[]               = "pillow-share";    // Network SSID (name)
const char PASS[]               = "lollollollol";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]         = "NNJWYFRT3VG3QQAGXR1G";    // Secret device password


float heart_rate;
float heart_rate_ecg;
float spO2;
int ir;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(heart_rate, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(heart_rate_ecg, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(spO2, READ, ON_CHANGE, NULL, 1);
  ArduinoCloud.addProperty(ir, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
