/***
 * hc-sr04 Ultrasonic Distance Module Example
 * Written By: Sheldon Will
 * Date: 02/04/14
 * Version: 1.0
 *
 * License: MIT License
 */

//Usage: Save this example to a new sketch folder and remove the .cpp & .h file within that new folder to get rid of multiple definition errors.

#include <hcrs04.h>

//Change thse values to reflect your pin setup.
#define PINTRIG 33
#define PINECHO 32

//Simply replace "PINTRIG" and "PINECHO" with your corresponding defines.
hcrs04 mySensor(PINTRIG, PINECHO);
 
void setup()
{
  Serial.begin(115200);
  Serial.println("Basic HC-SR04 Ultrasonic Sensor Example");
  mySensor.begin();
}

void loop()
{
  //Get results from the sensor
  float DISTANCE = mySensor.read(); 
  Serial.print(DISTANCE);
  Serial.println(" cm");
  delay(500);
}
