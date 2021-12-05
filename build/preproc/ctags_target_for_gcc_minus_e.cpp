# 1 "e:\\Code Study\\Ardunio Projects\\1.2_doublecolorlight\\1.2_doublecolorlight.ino"
int redPin = 11;
int greenPin = 10;
int val = 0;

void setup()
{
    pinMode(redPin,0x1);
    pinMode(greenPin,0x1);
    Serial.begin(9600);
}

void loop()
{
    for(val=255; val>0; val--)
    {
        analogWrite(redPin, val);
        analogWrite(greenPin, 255-val);
        Serial.println(val, 10);
        delay(30);
    }

    for(val=0; val<255; val++)
    {
        analogWrite(redPin, val);
        analogWrite(greenPin,255-val);
        Serial.println(val, 10);
        delay(30);
    }
}
