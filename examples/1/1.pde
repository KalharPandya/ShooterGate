#include <ShooterGate.h>
void setup()
{
    Serial.begin(115200);
    shooterGateSetup();
}
void loop()
{

    openGate();
    delay(2000);
    closeGate();
    delay(2000);

    openSep();
    delay(2000);
    closeSep();
    delay(2000);

    openPnumatic();
    delay(2000);
    closePnumatic();
    delay(2000);
}