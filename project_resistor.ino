#include<math.h>
float Vin=5,R1=330,R2,V1,V2,adc;
int pinRes = 0;

void setup()

{
Serial.begin(9600); // setup koneksi serial

}

void loop() {

adc = analogRead(pinRes); 
V2= (adc*Vin)/1023.0;
V1= Vin - V2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
R2= (V2*R1/V1);

Serial.print("R2: ");
Serial.println(R2);
Serial.print("Vout: ");
Serial.println(V2);
Serial.print("ADC: ");
Serial.println(ADC); 

delay(1000); 

}
