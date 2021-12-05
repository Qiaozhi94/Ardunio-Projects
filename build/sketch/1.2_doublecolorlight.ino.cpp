#include <Arduino.h>
#line 1 "e:\\Code Study\\Ardunio Projects\\1.2_doublecolorlight\\1.2_doublecolorlight.ino"
int redPin = 11;
int greenPin = 10;
int val = 0;

#line 5 "e:\\Code Study\\Ardunio Projects\\1.2_doublecolorlight\\1.2_doublecolorlight.ino"
void setup();
#line 12 "e:\\Code Study\\Ardunio Projects\\1.2_doublecolorlight\\1.2_doublecolorlight.ino"
void loop();
#line 5 "e:\\Code Study\\Ardunio Projects\\1.2_doublecolorlight\\1.2_doublecolorlight.ino"
void setup()
{
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    for(val=255; val>0; val--)
    {
        analogWrite(redPin, val);
        analogWrite(greenPin, 255-val);
        Serial.println(val, DEC);
        delay(30);
    }

    for(val=0; val<255; val++)
    {
        analogWrite(redPin, val);
        analogWrite(greenPin,255-val);
        Serial.println(val, DEC);
        delay(30);
    }
}
