#include <Wire.h>

void setup()
{
  Wire.begin(4); // join i2c bus (address optional for master)
}

byte x = 1;

void loop()
{
  Wire.beginTransmission(4); // transmit to device #4
  Wire.write("x is ");        // sends five bytes
  Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting

  delay(500);
}
