#include <Wire.h>

char outBuffer[30];


String parameters = "voltage, current, power, powerFactor, apparentPower, reactivepower, frequency";
String paramValues = "237, 0.1, 12.38, 0.9, 240, 14, 50";

void setup()
{
  Serial.begin(57600);
  Serial.println("CS I2C slaves Testing");

  // I2C Slave address
  Wire.begin( 0x5B );
  

  //Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);  
}

// This event will reply to I2C master when request for data 
void requestEvent() {

 // Put the data inside Wire.write()

    Wire.write("voltage, current, power, powerFactor, apparentPower, reactivepower, frequency");
    Serial.println("237, 0.1, 12.38, 0.9, 240, 14, 50");
    
}

void loop()
{

  delay(10);

}
