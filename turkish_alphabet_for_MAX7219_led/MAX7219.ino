//www.elegoo.com
//2016.12.9

//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to LOAD(CS)
 pin 10 is connected to the CLK 
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,10,11,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime1=500;
unsigned long delaytime2=50;
void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,2);
  /* and clear the display */
  lc.clearDisplay(0);
}

void clearAndWait() {
  delay(delaytime1);
  lc.clearDisplay(0);
  delay(delaytime1);
}


void A() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01111110);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B01000010);
  clearAndWait();
}

void B() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01110000);
  lc.setRow(0,2,B01001000);
  lc.setRow(0,3,B01001000);
  lc.setRow(0,4,B01110000);
  lc.setRow(0,5,B01001000);
  lc.setRow(0,6,B01001000);
  lc.setRow(0,7,B01110000);
  clearAndWait();
}

void C()  {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00000000);
  clearAndWait();
}

// Ç
void C2()  {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00001000);
  clearAndWait();
}

void D() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01110000);
  lc.setRow(0,2,B01001000);
  lc.setRow(0,3,B01000100);
  lc.setRow(0,4,B01000100);
  lc.setRow(0,5,B01000100);
  lc.setRow(0,6,B01001000);
  lc.setRow(0,7,B01110000);
  clearAndWait();
}

void E() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01111100);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B01111000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B01111100);
  clearAndWait();
}

// I had to name this FF instead of F, because a macro named F already exists.
void FF() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01111100);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B01110000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B01000000);
  clearAndWait();
}

void G()  {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00011100);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B01001110);
  lc.setRow(0,6,B00100010);
  lc.setRow(0,7,B00011100);
  clearAndWait();
}

// Ğ
void G2()  {
  lc.setRow(0,0,B00011100);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00011100);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B01001110);
  lc.setRow(0,6,B00100010);
  lc.setRow(0,7,B00011100);
  clearAndWait();
}

void H() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01000010);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01111110);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B01000010);
  clearAndWait();
}

void I() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B01111100);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B01111100);
  clearAndWait();
}

void I2() {
  lc.setRow(0,0,B00010000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B01111100);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B01111100);
  clearAndWait();
}

void J() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111110);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B01001000);
  lc.setRow(0,6,B01001000);
  lc.setRow(0,7,B00110000);
  clearAndWait();
}

void K() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01000100);
  lc.setRow(0,2,B01001000);
  lc.setRow(0,3,B01010000);
  lc.setRow(0,4,B01100000);
  lc.setRow(0,5,B01010000);
  lc.setRow(0,6,B01001000);
  lc.setRow(0,7,B01000100);
  clearAndWait();
}

void L() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01000000);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B01111100);
  clearAndWait();
}

void M() {
  lc.clearDisplay(0);
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11000110);
  lc.setRow(0,2,B10101010);
  lc.setRow(0,3,B10010010);
  lc.setRow(0,4,B10000010);
  lc.setRow(0,5,B10000010);
  lc.setRow(0,6,B10000010);
  lc.setRow(0,7,B10000010);
  clearAndWait();
}

void N() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000010);
  lc.setRow(0,2,B11000010);
  lc.setRow(0,3,B10100010);
  lc.setRow(0,4,B10010010);
  lc.setRow(0,5,B10001010);
  lc.setRow(0,6,B10000110);
  lc.setRow(0,7,B10000010);
  clearAndWait();
}

void O() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);
  clearAndWait();
}

void O2() {
  lc.setRow(0,0,B00100100);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);
  clearAndWait();
}

void P() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11110000);
  lc.setRow(0,2,B10001000);
  lc.setRow(0,3,B10001000);
  lc.setRow(0,4,B11110000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B10000000);
  clearAndWait();
}

void R() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01111000);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B01000100);
  lc.setRow(0,4,B01111000);
  lc.setRow(0,5,B01010000);
  lc.setRow(0,6,B01001000);
  lc.setRow(0,7,B01000100);
  clearAndWait();
}

void S() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B00110000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B01000100);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B00000000);
  clearAndWait();
}

// Ş
void S2() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B00110000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B01000100);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B00010000);
  clearAndWait();
}
  
void T() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B01111100);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00010000);
  clearAndWait();
}

void U() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B00100100);
  lc.setRow(0,7,B00011000);
  clearAndWait();
}

void U2() {
  lc.setRow(0,0,B01000010);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B00100100);
  lc.setRow(0,7,B00011000);
  clearAndWait();
}

void V() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000010);
  lc.setRow(0,2,B10000010);
  lc.setRow(0,3,B01000100);
  lc.setRow(0,4,B01000100);
  lc.setRow(0,5,B00101000);
  lc.setRow(0,6,B00101000);
  lc.setRow(0,7,B00010000);
  clearAndWait();
}

void Y() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000010);
  lc.setRow(0,2,B01000100);
  lc.setRow(0,3,B00101000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00010000);
  clearAndWait();
}

void Z() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11111110);
  lc.setRow(0,2,B00000100);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B11111110);
  clearAndWait();
}

void Blank() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  lc.setRow(0,4,B00000000);
  delay(delaytime1 * 2);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix() {
  /* here is the data for the characters */
  byte a[5]={B01111110,B10001000,B10001000,B10001000,B01111110};
  byte r[5]={B00010000,B00100000,B00100000,B00010000,B00111110};
  byte d[5]={B11111110,B00010010,B00100010,B00100010,B00011100};
  byte u[5]={B00111110,B00000100,B00000010,B00000010,B00111100};
  byte i[5]={B00000000,B00000010,B10111110,B00100010,B00000000};
  byte n[5]={B00011110,B00100000,B00100000,B00010000,B00111110};
  byte o[5]={B00011100,B00100010,B00100010,B00100010,B00011100};

  /* now display them one by one with a small delay */
  /* 
  A();
  B();
  C();
  C2();
  D();
  E();
  FF();
  G();
  G2();
  H();
  I();
  I2();*/
  J();/*
  K();
  L();
  M();
  N();
  O();
  O2();
  P();
  R();
  S();
  S2();
  T();
  U();
  U2();
  V();
  Y();
  Z();*/
/*
  M();
  U();
  H();
  A();
  M();
  M();
  E();
  D();
*/
  }
/*
  This function lights up a some Leds in a row.
 The pattern will be repeated on every row.
 The pattern will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void rows() {
  for(int row=0;row<8;row++) {
    delay(delaytime2);
    lc.setRow(0,row,B10100000);
    delay(delaytime2);
    lc.setRow(0,row,(byte)0);
    for(int i=0;i<row;i++) {
      delay(delaytime2);
      lc.setRow(0,row,B10100000);
      delay(delaytime2);
      lc.setRow(0,row,(byte)0);
    }
  }
}

/*
  This function lights up a some Leds in a column.
 The pattern will be repeated on every column.
 The pattern will blink along with the column-number.
 column number 4 (index==3) will blink 4 times etc.
 */
 
void columns() {
  for(int col=0;col<8;col++) {
    delay(delaytime2);
    lc.setColumn(0,col,B00100000);
    delay(delaytime2);
    lc.setColumn(0,col,(byte)0);
    for(int i=0;i<col;i++) {
      delay(delaytime2);
      lc.setColumn(0,col,B00100000);
      delay(delaytime2);
      lc.setColumn(0,col,(byte)0);
    }
  }
}

/* 
 This function will light up every Led on the matrix.
 The led will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */

 
void single() {
  for(int row=0;row<8;row++) {
    for(int col=0;col<8;col++) {
      delay(delaytime2);
      lc.setLed(0,row,col,true);
      delay(delaytime2);
      for(int i=0;i<col;i++) {
        lc.setLed(0,row,col,false);
        delay(delaytime2);
        lc.setLed(0,row,col,true);
        delay(delaytime2);
      }
    }
  }
}


void loop() { 
  writeArduinoOnMatrix();
  //rows();
  //columns();
  //single();
}
