/*The goal of this program is to count from 0 to 9 using switch case and functions

Switch case, functions, for loop, 7 segment, arrays */

int d=1000; //variable to control the time displaying each digit


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

int pins[]={4,5,6,7,8,9,10}; //Array that contains the pins used
int var; //variable needed to update the switch case

void setup() {
  // for loop that defines all the pins in the array "pins" as outputs
  for(int i=4;i<11;i++){
  pinMode(i,OUTPUT);
  }

  
}

//functions to digitalWrite on and off the pins needed for each digit
void Zero(){
  //0 
for (int a=0;a<8;a++){
  digitalWrite(pins[a],zero[a]);
  /*the pin number 0 of the array has the value of the value number 0 of the array 0 
    then they change to the number 1 in both arrays
    it keeps increasing until reaching 7*/
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

void Five(){ //function to display 5
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);
}

}

void Six(){  //function to display 6
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

void Nine(){  //function to display 9
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);
}
}


void loop() {
 

for(var=0;var<10;var++){  // for loop which will cover every case from 0 to 9
  
switch(var){ //the switch case works in accordance with the value of "var"
  case 0:
    Zero();  //each case calls the funcionn that should be displayed 
    
    break; //after displaying the digit the functions breaks
    case 1: //each case displays its respective value
      One();
      
      break;
    case 2: //case for 2
      Two();
     
      break;  
    case 3: //case for 3
      Three();
     
      break;
    case 4: //case to display 4
      Four();
     
      break;   
    case 5: //case to display 5
      Five();
      
      break; 
    case 6: //case to display 6
      Six();
      
      break; 
    case 7: //case to display 7
      Seven();
   
      break; 
    case 8: //case to display 8
      Eight();
      
      break; 
    case 9: //case to display 9
      Nine();
      
      break; 
    default:
      break;          
}
delay(d); //there's a delay of 1 second between each digit
}

}
