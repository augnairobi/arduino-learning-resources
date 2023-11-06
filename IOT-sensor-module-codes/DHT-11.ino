//Hello Makers!! My name is Moturi.This sketch is made for the arduino IDE for the DHT11 temperature and humidity sensor.
//In the library manager, download the DFRobot_DHT11 by DFRobot
//I have gone through different libraries and found that this is the easiest to implement

//Include the DHT library header file to allow you to use the various easy DHT commands and functions :)
#include <DFRobot_DHT11.h>

//Create a DHT instance(object)
DFRobot_DHT11 DHT;

//Define the DHT pin to use. Note that you could use any name to replace (DHT11_PIN). That is just what I chose
#define DHT11_PIN A0




void setup() {
//It is better to start at a higher baud rate to prevent problems but anything over 9600 should be fine
Serial.begin(115200);
delay(500);
Serial.println("This is the code for the DHT temperature and humidity sensor");

}

void loop() {
  //DHT.read is a very easy function from the DFRobot library. :0
  DHT.read(DHT11_PIN);

  //The rest is self explanatory...If you find any problems with the code...feel free to reach out(linkedin: Samson Moturi)
 int temp = DHT.temperature;
 Serial.println(temp);
 float Humidity = DHT.humidity;
 Serial.println(Humidity);
 delay(600);
}
