#include "ST7565.h"

// pin 9 - Serial data out (SID)
// pin 8 - Serial clock out (SCLK)
// pin 7 - Data/Command select (RS or A0)
// pin 6 - LCD reset (RST)
// pin 5 - LCD chip select (CS)
ST7565 glcd(9, 8, 7, 6, 5);

int x = 0;

void setup()   {                

  // initialize and set the contrast to 0x18
  glcd.begin(0xa);
  glcd.clear();
}

void loop(){  

    glcd.clear();
glcd.drawstring(0,0," Hi world ");
glcd.drawchar(55,0,19);
//glcd.drawchar(61,0,124);
sp2();
glcd.display();

 delay(500);

    glcd.clear();
glcd.drawstring(0,0," Hi world ");
glcd.drawchar(55,0,19);
//glcd.drawchar(61,0,124);
sp3();
glcd.display();
 delay(500);
 





x++;
}




void sp1(){
/*
glcd.setpixel(75, 1, BLACK);
glcd.setpixel(75, 2, BLACK);
glcd.setpixel(75, 3, BLACK);
glcd.setpixel(74, 3, BLACK);
glcd.setpixel(73, 3, BLACK);
glcd.setpixel(72, 3, BLACK);
glcd.setpixel(71, 3, BLACK);
glcd.setpixel(72, 2, BLACK);
glcd.setpixel(72, 1, BLACK);
glcd.setpixel(72, 0, BLACK);
glcd.setpixel(75, 0, BLACK);
glcd.setpixel(74, 0, BLACK);
glcd.setpixel(73, 0, BLACK);
glcd.setpixel(71, 0, BLACK);

//glcd.setpixel(75, 0, BLACK);

glcd.setpixel(73, 4, BLACK);
glcd.setpixel(73, 5, BLACK);
glcd.setpixel(74, 4, BLACK);
glcd.setpixel(74, 5, BLACK);

*/


glcd.drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
glcd.drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
glcd.setpixel(73, 14, BLACK);
glcd.setpixel(73, 15, BLACK);
glcd.setpixel(74, 16, BLACK);
glcd.setpixel(74, 17, BLACK);



//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
//glcd.setpixel(72, 13, BLACK);
//glcd.setpixel(74, 13, BLACK);
glcd.setpixel(71, 14, BLACK);
glcd.setpixel(71, 15, BLACK);
glcd.setpixel(70, 16, BLACK);
glcd.setpixel(70, 17, BLACK);




glcd.drawline(72,10,76,7,BLACK);//brazo derecho de BIT-MAN
//glcd.drawline(71,10,66,13,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);


  }


void sp2(){

glcd.drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
glcd.drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
glcd.setpixel(73, 14, BLACK);
glcd.setpixel(73, 15, BLACK);
glcd.setpixel(74, 16, BLACK);
glcd.setpixel(74, 17, BLACK);


//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
glcd.setpixel(71, 14, BLACK);
glcd.setpixel(71, 15, BLACK);
glcd.setpixel(70, 16, BLACK);
glcd.setpixel(70, 17, BLACK);


//glcd.drawline(72,10,76,7,BLACK);//brazo derecho de BIT-MAN
glcd.setpixel(73, 9, BLACK);
glcd.setpixel(74, 9, BLACK);
glcd.setpixel(75, 9, BLACK);
glcd.setpixel(76, 8, BLACK);
glcd.setpixel(77, 7, BLACK);
glcd.setpixel(78, 6, BLACK);


//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);

  }



void sp3(){

glcd.drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
glcd.drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
glcd.setpixel(73, 14, BLACK);
glcd.setpixel(73, 15, BLACK);
glcd.setpixel(74, 16, BLACK);
glcd.setpixel(74, 17, BLACK);


//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
glcd.setpixel(71, 14, BLACK);
glcd.setpixel(71, 15, BLACK);
glcd.setpixel(70, 16, BLACK);
glcd.setpixel(70, 17, BLACK);


//glcd.drawline(72,10,77,8,BLACK);//brazo derecho de BIT-MAN
glcd.setpixel(73, 9, BLACK);
glcd.setpixel(74, 9, BLACK);
glcd.setpixel(75, 9, BLACK);
glcd.setpixel(76, 8, BLACK);
glcd.setpixel(76, 7, BLACK);
glcd.setpixel(76, 6, BLACK);





//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);


  }  
