#include <Wire.h>

uint8_t buff[]={1,3,5,7,9};
uint8_t i=0;
void setup() {
  // put your setup code here, to run once:
Wire.begin(0x05);
Serial.begin(9600);
Wire.onRequest(request_data);
}

void loop(){
 // put your main code here, to run repeatedly:
}

void request_data()
{
  Wire.write(buff,5);
  
  }


