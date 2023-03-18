/*The goal of the prgram is to display digits from 0 to 9 in a 7 segment display
using pinMode to define the pins

for loop, digitalWrite*/
int d=1000; //variable to chagne the delay between each digit

void setup() {
  // Use a for loop to define the pins as Outputs
  // In this case, the pins in the arduino go from 4 to 11
  for(int i=4;i<11;i++){
  pinMode(i,OUTPUT);
  }
  
}

void loop() {
  // Use digitalWrite to turn on and off the pins in accorddance to the digit
//0 
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,0);
delay(d);
//1
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(d);
//2
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(d);
//3
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(d);
//4
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//5
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//6
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//7
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(d);
//8
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//9
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
}
