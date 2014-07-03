#include <Wire.h>

void setup()
{  
  Wire.begin(4); // join i2c bus (address optional for master)
  Wire.onRequest(requestEvent); // register event
}



void loop(){
//THIS IS COMPLETELY USELESS!
}

void requestEvent()
{
  Wire.write("Hello "); // respond with 6 bytes of data 
}
