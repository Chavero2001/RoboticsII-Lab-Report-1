/*The goal of this program is to display 0 to 9 in a 7 segment display
using arrays to simplify the code

Arrays, for loop, digitalWrite, 7 segment display*/
int d=1000; //Variable to control the time of the delay 

int zero[]={1,1,1,1,1,1,0}; //Array to display 0 on the 7 segment
int one[]={0,1,1,0,0,0,0}; //Array for 1
int two[]={1,1,0,1,1,0,1}; //Array for 2
int three[]={1,1,1,1,0,0,1}; //Array for 3
int four[]={0,1,1,0,0,1,1};//Array for 4
int five[]={1,0,1,1,0,1,1}; //Array for 5
int six[]={1,0,1,1,1,1,1};//Array for 6
int seven[]={1,1,1,0,0,0,0};//Array for 7
int eight[]={1,1,1,1,1,1,1}; //Array for 8
int nine[]={1,1,1,0,0,1,1}; //Array for 9

int pins[]={4,5,6,7,8,9,10}; //Array that has the Arduino pins that are used

void setup() {
  // for loop in which the pins are defined as outputs 
  for(int i=0;i<8;i++){ //It takes the number in the array, which make possible to change the pins easily 
  pinMode(pins[i],OUTPUT);
  }
  
}

void loop() {
  // for loop for each digit
//0 
for (int a=0;a<8;a++){ 
  digitalWrite(pins[a],zero[a]); //It digitalWrite the first value of the array zero in the first value of the array pins
                                //and it repeats again with the second of each array. It keeps repeating untilt reaching 7
}
delay(d); //delay of 1 second to keep the number 1 second on the display 
 
//1
for (int a=0;a<8;a++){
  digitalWrite(pins[a],one[a]);  //In this case, the pins will have the value that is in the array "one"
}
delay(d);

//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]); //Repeats to display 2
}
delay(d);

//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]); //Repats for loop to display 3
}
delay(d);
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]); //Loop for 4
}
delay(d);
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]); //Loop for 5
}
delay(d);
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]); //Loop for 6
}
delay(d);
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]); //Loop for 7
}
delay(d);
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]); //Loop for 8
}
delay(d);
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]); //Loop for 9
}
delay(d);

}
