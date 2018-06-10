int h; 
unsigned int z,x,y;
unsigned int c; 

#include <Rainbowduino.h>

void setup()
{
  Rb.init(); //initialize Rainbowduino driver
}

void loop()
{

for(x=0;x<4;x++) { delay(20); for(y=0;y<4;y++) { delay(20); for(z=0;z<4;z++) {Rb.setPixelZXY(3,x,y,0x3366cc); } } }
//for(x=0;x<4;x++) { delay(20); for(y=0;y<4;y++) { delay(20); for(z=0;z<4;z++) {Rb.setPixelZXY(0,x,y,0x0000cc); } } }


h=random(15);

if(h==3){
Rb.setPixelZXY(2,1,1,0x3399ff);
delay(150);
Rb.setPixelZXY(2,1,1,0x000000);
Rb.setPixelZXY(1,1,1,0x3399ff);
delay(100);
Rb.setPixelZXY(1,1,1,0x000000); 
Rb.setPixelZXY(0,1,1,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,1,1,0x000000);
delay(50); }

if(h==2){
Rb.setPixelZXY(2,2,2,0x3399ff);
delay(150);
Rb.setPixelZXY(2,2,2,0x000000);
Rb.setPixelZXY(1,2,2,0x3399ff);
delay(100);
Rb.setPixelZXY(1,2,2,0x000000); 
Rb.setPixelZXY(0,2,2,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,2,2,0x000000);
delay(50); }

if(h==1){
Rb.setPixelZXY(2,3,3,0x3399ff);
delay(150);
Rb.setPixelZXY(2,3,3,0x000000);
Rb.setPixelZXY(1,3,3,0x3399ff);
delay(100);
Rb.setPixelZXY(1,3,3,0x000000); 
Rb.setPixelZXY(0,3,3,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,3,3,0x000000);
delay(50); }



if(h==4){
Rb.setPixelZXY(2,1,3,0x3399ff);
delay(150);
Rb.setPixelZXY(2,1,3,0x000000);
Rb.setPixelZXY(1,1,3,0x3399ff);
delay(100);
Rb.setPixelZXY(1,1,3,0x000000);
Rb.setPixelZXY(0,1,3,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,1,3,0x000000);
delay(50);  }



if(h==5){
Rb.setPixelZXY(2,0,1,0x3399ff);
delay(150);
Rb.setPixelZXY(2,0,1,0x000000); 
Rb.setPixelZXY(1,0,1,0x3399ff);
delay(100);
Rb.setPixelZXY(1,0,1,0x000000);
Rb.setPixelZXY(0,0,1,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,0,1,0x000000);
delay(50);}

if(h==6){
Rb.setPixelZXY(2,0,3,0x3399ff);
delay(150);
Rb.setPixelZXY(2,0,3,0x000000);
Rb.setPixelZXY(1,0,3,0x3399ff);
delay(100);
Rb.setPixelZXY(1,0,3,0x000000); 
Rb.setPixelZXY(0,0,3,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,0,3,0x000000);
delay(50); }

if(h==7){
Rb.setPixelZXY(2,3,0,0x3399ff);
delay(150);
Rb.setPixelZXY(2,3,0,0x000000);
Rb.setPixelZXY(1,3,0,0x3399ff);
delay(100);
Rb.setPixelZXY(1,3,0,0x000000); 
Rb.setPixelZXY(0,3,0,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,3,0,0x000000);
delay(50);  }

if(h==8){
Rb.setPixelZXY(2,2,0,0x3399ff);
delay(150);
Rb.setPixelZXY(2,2,0,0x000000);
Rb.setPixelZXY(1,2,0,0x3399ff);
delay(100);
Rb.setPixelZXY(1,2,0,0x000000); 
Rb.setPixelZXY(0,2,0,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,2,0,0x000000);
delay(50);  }

if(h==9){
Rb.setPixelZXY(2,1,0,0x3399ff);
delay(150);
Rb.setPixelZXY(2,1,0,0x000000);
Rb.setPixelZXY(1,1,0,0x3399ff);
delay(100);
Rb.setPixelZXY(1,1,0,0x000000); 
Rb.setPixelZXY(0,1,0,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,1,0,0x000000);
delay(50);  }

if(h==10){
Rb.setPixelZXY(2,0,0,0x3399ff);
delay(150);
Rb.setPixelZXY(2,0,0,0x000000);
Rb.setPixelZXY(1,0,0,0x3399ff);
delay(100);
Rb.setPixelZXY(1,0,0,0x000000); 
Rb.setPixelZXY(0,0,0,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,0,0,0x000000);
delay(50);  }

if(h==11){
Rb.setPixelZXY(2,2,3,0x3399ff);
delay(150);
Rb.setPixelZXY(2,2,3,0x000000);
Rb.setPixelZXY(1,2,3,0x3399ff);
delay(100);
Rb.setPixelZXY(1,2,3,0x000000); 
Rb.setPixelZXY(0,2,3,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,2,3,0x000000);
delay(50);  }


if(h==12){
Rb.setPixelZXY(2,2,1,0x3399ff);
delay(150);
Rb.setPixelZXY(2,2,1,0x000000);
Rb.setPixelZXY(1,2,1,0x3399ff);
delay(100);
Rb.setPixelZXY(1,2,1,0x000000); 
Rb.setPixelZXY(0,2,1,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,2,1,0x000000);
delay(50);  }

if(h==13){
Rb.setPixelZXY(2,0,2,0x3399ff);
delay(150);
Rb.setPixelZXY(2,0,2,0x000000);
Rb.setPixelZXY(1,0,2,0x3399ff);
delay(100);
Rb.setPixelZXY(1,0,2,0x000000); 
Rb.setPixelZXY(0,0,2,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,0,2,0x000000);
delay(50);  }

if(h==14){
Rb.setPixelZXY(2,3,3,0x3399ff);
delay(150);
Rb.setPixelZXY(2,3,3,0x000000);
Rb.setPixelZXY(1,3,3,0x3399ff);
delay(100);
Rb.setPixelZXY(1,3,3,0x000000); 
Rb.setPixelZXY(0,3,3,0x1a8cff);
delay(125);
Rb.setPixelZXY(0,3,3,0x000000);
delay(50);  }



}
