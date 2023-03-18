
int d=1000;
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
int pins[]={4,5,6,7,8,9,10};
int var;

void setup() {
  // put your setup code here, to run once:
  for(int i=4;i<11;i++){
  pinMode(i,OUTPUT);
  }

  
}

void Zero(){
  //0 
for (int a=0;a<8;a++){
  digitalWrite(pins[a],zero[a]);
}

}  

void One(){
//1
for (int a=0;a<8;a++){
  digitalWrite(pins[a],one[a]);
}

}

void Two(){
//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]);
}

}

void Three(){
//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]);
}

}

void Four(){
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]);
}

}

void Five(){
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);
}

}

void Six(){
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]);
}

}

void Seven(){
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]);
}

}

void Eight(){
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]);
}

}

void Nine(){
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);
}
}


void loop() {
  // put your main code here, to run repeatedly:

for(var=0;var<10;var++){
  
switch(var){
  case 0:
    Zero();
    
    break;
    case 1:
      One();
      
      break;
    case 2:
      Two();
     
      break;  
    case 3:
      Three();
     
      break;
    case 4:
      Four();
     
      break;   
    case 5:
      Five();
      
      break; 
    case 6:
      Six();
      
      break; 
    case 7:
      Seven();
   
      break; 
    case 8:
      Eight();
      
      break; 
    case 9:
      Nine();
      
      break; 
    default:
      break;          
}
delay(d);
}










}
