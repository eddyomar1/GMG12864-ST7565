#include "ST7565.h"


// pin 9 - Serial data out (SID)
// pin 8 - Serial clock out (SCLK)
// pin 7 - Data/Command select (RS or A0)
// pin 6 - LCD reset (RST)
// pin 5 - LCD chip select (CS)
ST7565 glcd(9, 8, 7, 6, 5);

int x = 0;
int arbol = random(128,200);


void setup()   {                

  // initialize and set the contrast to 0x18
  glcd.begin(0xa);
  glcd.clear();
  pinMode(11,INPUT);

  
}

void loop(){  

    glcd.clear();
//glcd.drawstring(0,0," Hi world ");
//glcd.drawchar(55,0,19);
//glcd.drawchar(arbol,2,16);
//glcd.sp1();

    ob1();
    
if(arbol<=0){arbol = random(128,300);}
arbol-=2;

if(digitalRead(11)==false){
sp4();
}else{
sp5(3);  
  }



glcd.display();

 delay(1);
/*
    glcd.clear();
//glcd.drawstring(0,0," Hi world ");
//glcd.drawchar(55,0,19);
//glcd.drawchar(61,0,124);
//glcd.sp2();
sp5(3);
glcd.display();
 delay(500);
 */





x++;
}

/*
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
/*

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
*/







void sp4(){

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
glcd.setpixel(73, 10, BLACK);
glcd.setpixel(73, 11, BLACK);
glcd.setpixel(74, 12, BLACK);
glcd.setpixel(74, 13, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);
/*
//skate

glcd.setpixel(68, 17, BLACK);
glcd.setpixel(69, 17, BLACK);
glcd.setpixel(70, 17, BLACK);
glcd.setpixel(71, 17, BLACK);
glcd.setpixel(72, 17, BLACK);
glcd.setpixel(73, 17, BLACK);
glcd.setpixel(74, 17, BLACK);
glcd.setpixel(69, 18, BLACK);
glcd.setpixel(73, 18, BLACK);
*/

skate(17);
  }


    void sp5(int al){

glcd.drawrect(70,3-al,5,5,BLACK); //cabeza de BIT-MAN
glcd.drawline(72,8-al,72,13-al,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
glcd.setpixel(73, 14-al, BLACK);
glcd.setpixel(73, 15-al, BLACK);
glcd.setpixel(73, 16-al, BLACK);
glcd.setpixel(73, 17-al, BLACK);

//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
glcd.setpixel(71, 14-al, BLACK);
glcd.setpixel(71, 15-al, BLACK);
glcd.setpixel(71, 16-al, BLACK);
glcd.setpixel(71, 17-al, BLACK);

//glcd.drawline(72,10,77,8,BLACK);//brazo derecho de BIT-MAN
glcd.setpixel(73, 10-al, BLACK);
glcd.setpixel(73, 11-al, BLACK);
glcd.setpixel(74, 12-al, BLACK);
glcd.setpixel(74, 13-al, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10-al, BLACK);
glcd.setpixel(70, 11-al, BLACK);
glcd.setpixel(69, 12-al, BLACK);
glcd.setpixel(68, 13-al, BLACK);
/*
//skate

glcd.setpixel(68, 17, BLACK);
glcd.setpixel(69, 17, BLACK);
glcd.setpixel(70, 17, BLACK);
glcd.setpixel(71, 17, BLACK);
glcd.setpixel(72, 17, BLACK);
glcd.setpixel(73, 17, BLACK);
glcd.setpixel(74, 17, BLACK);
glcd.setpixel(69, 18, BLACK);
glcd.setpixel(73, 18, BLACK);
*/

skate(17-al);


  }


  void skate(int p){
    
    
    //skate

glcd.setpixel(68, p+1, BLACK);
glcd.setpixel(69, p+1, BLACK);
glcd.setpixel(70, p+1, BLACK);
glcd.setpixel(71, p+1, BLACK);
glcd.setpixel(72, p+1, BLACK);
glcd.setpixel(73, p+1, BLACK);
glcd.setpixel(74, p+1, BLACK);
glcd.setpixel(75, p+1, BLACK);
glcd.setpixel(69, p+2, BLACK);
glcd.setpixel(74, p+2, BLACK);

    
    
    }
  


void ob1 (){
    
    
 //   glcd.setpixel(arbol, 3, BLACK);
//glcd.setpixel(arbol, 4, BLACK);
glcd.setpixel(arbol, 19, BLACK);
glcd.setpixel(arbol, 18, BLACK);
glcd.setpixel(arbol, 17, BLACK);
glcd.setpixel(arbol, 16, BLACK);
glcd.setpixel(arbol, 20, BLACK);
glcd.setpixel(arbol, 21, BLACK);
glcd.setpixel(arbol, 22, BLACK);
glcd.setpixel(arbol, 23, BLACK);

glcd.setpixel(arbol+1, 16, BLACK);
glcd.setpixel(arbol+2, 17, BLACK);
glcd.setpixel(arbol+3, 18, BLACK);
glcd.setpixel(arbol+4, 19, BLACK);
glcd.setpixel(arbol+5, 20, BLACK);
glcd.setpixel(arbol+6, 21, BLACK);
glcd.setpixel(arbol+7, 22, BLACK);
glcd.setpixel(arbol+8, 23, BLACK);


    
}









/*
void sp4(){

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
glcd.setpixel(73, 10, BLACK);
glcd.setpixel(73, 11, BLACK);
glcd.setpixel(74, 12, BLACK);
glcd.setpixel(74, 13, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);

//skate

glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(71, 11, BLACK);
glcd.setpixel(70, 12, BLACK);
glcd.setpixel(70, 13, BLACK);



  }


    void sp5(){

glcd.drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
glcd.drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
glcd.setpixel(73, 14, BLACK);
glcd.setpixel(73, 15, BLACK);
glcd.setpixel(73, 16, BLACK);
glcd.setpixel(73, 17, BLACK);

//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
glcd.setpixel(71, 14, BLACK);
glcd.setpixel(71, 15, BLACK);
glcd.setpixel(71, 16, BLACK);
glcd.setpixel(71, 17, BLACK);

//glcd.drawline(72,10,77,8,BLACK);//brazo derecho de BIT-MAN
glcd.setpixel(73, 10, BLACK);
glcd.setpixel(73, 11, BLACK);
glcd.setpixel(74, 12, BLACK);
glcd.setpixel(74, 13, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
glcd.setpixel(71, 10, BLACK);
glcd.setpixel(70, 11, BLACK);
glcd.setpixel(69, 12, BLACK);
glcd.setpixel(68, 13, BLACK);


  }
  */  
