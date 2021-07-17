Servo Gate;
int servoGatepin = 27;
int gateOpenAngle = 90;
int gateCloseAngle = 1;


void gateSetup(){
    Gate.attach(servoGatepin);
}
void openGate()
{
    Serial.println("Opening Gate");
    Gate.write(gateOpenAngle);
}
void closeGate(){
    Serial.println("Closing Gate");

    Gate.write(gateCloseAngle);
}