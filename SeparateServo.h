Servo sep1, sep2;
int sep1_pin = 26, sep2_pin = 25;
int open1Angle = 90;
int open2Angle = 90;
int close1Angle = 1;
int close2Angle = 180;
int pnumaticPin = 33;
int IRPin = 23;
void sepSetup()
{
    sep1.attach(sep1_pin);
    sep2.attach(sep2_pin);
    pinMode(pnumaticPin, OUTPUT);
    pinMode(IRPin, INPUT);
}
void openSep()
{
    Serial.println("Opening Sep");

    sep1.write(open1Angle);
    sep2.write(open2Angle);
}
void closeSep()
{
    Serial.println("Closing Sep");

    sep1.write(close1Angle);
    sep2.write(close2Angle);
}

void openPnumatic()
{
    Serial.println("Closing Pnu");

    digitalWrite(pnumaticPin,HIGH);
}
void closePnumatic()
{
    Serial.println("Opening Pnu");

    digitalWrite(pnumaticPin, LOW);
}
bool checkIR(){
    return digitalRead(IRPin) == HIGH;
}