/* The goal of the program is to count from 0 to 9 using the simpliest way possible
pinMode, digitalWrite*/
void setup() {
  // Define the pins as Outputs
  //In this case each pin has to be individually defined
  pinMode(4,OUTPUT); //Segment A
  pinMode(5,OUTPUT); //Segment B
  pinMode(6,OUTPUT); //Segment C
  pinMode(7,OUTPUT); //Segment D
  pinMode(8,OUTPUT); //Segment E
  pinMode(9,OUTPUT); //Segment F
  pinMode(10,OUTPUT); //Segment G
}

void loop() {
  // digitalWrite on and off the necessaries pins to display each number

//0 
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,0);
delay(1000);
//1
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//2
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//3
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//4
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//5
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//6
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//7
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//8
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//9
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
}
