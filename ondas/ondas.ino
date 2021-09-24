#include "ST7565.h"

// pin 9 - Serial data out (SID)
// pin 8 - Serial clock out (SCLK)
// pin 7 - Data/Command select (RS or A0)
// pin 6 - LCD reset (RST)
// pin 5 - LCD chip select (CS)
ST7565 glcd(9, 8, 7, 6, 5);

int x = 2;
int pos = 5;
//long t = 1.005;
int t = -20;
void setup()   {                

  // initialize and set the contrast to 0x18
  glcd.begin(0xa);
  glcd.clear();
}

void loop(){  
  
glcd.setpixel(x, (cos(x/t)*PI)+pos, BLACK);
  
glcd.display();    

 x+=1;
 os();
 delay(10);


}

void os(){
  
  if(x>128){

    x=0;
t+=1;    
    if(pos>50){
    glcd.clear();
    pos=5; 
    }else{pos+=16;}
    }

if(t>=20){t=-20;}
    
  }
