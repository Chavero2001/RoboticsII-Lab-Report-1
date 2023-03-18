/*The goal of this program is to count from 0 to 9 using functions

Functions, for loop, 7 segment, arrays */

int d=500; //variable to control the time displaying each digit

//arrays that contains the state of the segments that need to be 
//...on or off in order to display the digit
int zero[]={1,1,1,1,1,1,0}; 
int one[]={0,1,1,0,0,0,0};
int two[]={1,1,0,1,1,0,1};
int three[]={1,1,1,1,0,0,1};
int four[]={0,1,1,0,0,1,1};
int five[]={1,0,1,1,0,1,1};
int six[]={1,0,1,1,1,1,1};
int seven[]={1,1,1,0,0,0,0};
int eight[]={1,1,1,1,1,1,1};
int nine[]={1,1,1,0,0,1,1};

int pins[]={4,5,6,7,8,9,10};//Array that contains the pins used

void setup() {
  // for loop that defines all the pins in the array "pins" as outputs
  for (int a=0;a<8;a++){
  pinMode(pins[a],OUTPUT);
}
  
}

//functions to digitalWrite on and off the pins needed for each digit
void Zero(){
  //0 
for (int a=0;a<8;a++){
  digitalWrite(pins[a],zero[a]); //the pin number 0 of the array has the value of the value number 0 of the array 0 
                                //then they change to the number 1 in both arrays
                                //it keeps increasing until reaching 7 
  
}

}  

void One(){ //function to display 1
//1
for (int a=0;a<8;a++){
  digitalWrite(pins[a],one[a]);
}

}

void Two(){ //function to display 2
//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]);
}

}

void Three(){ //function to display 3
//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]);
}

}

void Four(){ //function to display 4
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]);
}

}

void Five(){//function to display 5
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);
}

}

void Six(){ //function to display 6
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]);
}

}

void Seven(){ //function to display 7
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]);
}

}

void Eight(){ //function to display 8
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]);
}
}

void Nine(){ //function to display 9
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);
}
}


void loop() {
//Calls all the functions to count from 0 to 9 with 0.5 seconds of delay between each digit 

Zero(); //
delay(d);
One();
delay(d);
Two();
delay(d);
Three();
delay(d);
Four();
delay(d);
Five();
delay(d);
Six();
delay(d);
Seven();
delay(d);
Eight();
delay(d);
Nine();
delay(d);


}
