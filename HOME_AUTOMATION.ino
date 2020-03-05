#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "your auth token";

char ssid[] = "Brij sam";
char pass[] = "00000000";
WidgetLED led1(V0);
WidgetLED led2(V1);
WidgetLED led3(D3);
WidgetLED led4(D4);
WidgetLED led5(D5);
WidgetLED led6(D6);
void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  // pinMode(V2,INPUT);
  // pinMode(V4,INPUT);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

}

void loop()
{
  Blynk.run();
}

BLYNK_CONNECTED()
{
  Blynk.syncVirtual(V0);
  Blynk.syncVirtual(V1);
  Blynk.syncVirtual(D3);
  Blynk.syncVirtual(D4);
  Blynk.syncVirtual(D5);

}
BLYNK_WRITE(V1)
{
  

}
