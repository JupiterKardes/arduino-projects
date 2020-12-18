//www.elegoo.com
//2016.12.08

#include "pitches.h"

#define DO NOTE_C5
#define RE NOTE_D5
#define MI NOTE_E5
#define FA NOTE_F5
#define SOL NOTE_G5
#define LA NOTE_A5
#define SI NOTE_B5
#define DO2 NOTE_C6

#define full 800  // 800 miliseconds
#define half 400  // 400 miliseconds
#define wait 400  // 400 miliseconds
 
void setup() {
 
}
 
void loop() {  

  // BENIM ANNEM
  tone(8, DO, half);
  delay(wait);
  tone(8, RE, half);
  delay(wait);
  tone(8, MI, full);
  delay(wait);
  tone(8, MI, full);
  delay(wait);
  delay(wait);

  // GUZEL ANNEM
  tone(8, MI, half);
  delay(wait);
  tone(8, FA, half);
  delay(wait);
  tone(8, MI, full);
  delay(wait);
  tone(8, RE, full);
  delay(wait);
  delay(wait);

  // BENI AL
  tone(8, RE, half);
  delay(wait);
  tone(8, MI, half);
  delay(wait);
  tone(8, FA, full);
  delay(wait);
  delay(wait);

  // KOLLARINA
  tone(8, LA, full);
  delay(wait);
  tone(8, SOL, half);
  delay(wait);
  tone(8, FA, half);
  delay(wait);
  tone(8, MI, full);
  delay(wait);
  delay(wait);

  // KUCAGINDA
  tone(8, SOL, half);
  delay(wait);
  tone(8, FA, half);
  delay(wait);
  tone(8, RE, full);
  delay(wait);
  tone(8, RE, full);
  delay(wait);
  delay(wait);
  
  // UYUT BENI
  tone(8, MI, half);
  delay(wait);
  tone(8, FA, half);
  delay(wait);
  tone(8, LA, full);
  delay(wait);
  tone(8, SOL, full);
  delay(wait);
  delay(wait);
  
  // NINNILER  
  tone(8, DO2, half);
  delay(wait);
  tone(8, LA, half);
  delay(wait);
  tone(8, SOL, full);
  delay(wait);
  delay(wait);
  
  // SOYLE BANA
  tone(8, MI, full);
  delay(wait);
  tone(8, SOL, half);
  delay(wait);
  tone(8, FA, half);
  delay(wait);
  tone(8, MI, full);
  delay(wait);
  delay(wait);
     
  // Output the voice after several minutes
  delay(1000);
  
  // restart after two seconds 
  delay(2000);
}
