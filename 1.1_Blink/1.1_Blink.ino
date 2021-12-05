

int delayTime = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delayTime = delayTime + 50;
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(13, LOW);
  delay(delayTime);
}
