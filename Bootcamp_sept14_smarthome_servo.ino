#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "VUpurGm8SRnQvefmrptw5XndVH3ZGr-F";
char ssid[] = "Bangganteng";
char pass[] = "faruqiii";

Servo gerakservo;

BLYNK_WRITE(V1)
{
  gerakservo.write(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  gerakservo.attach(2);
  Blynk.begin(auth, ssid, pass);


}

void loop()
{
  Blynk.run();
}
