#include "Music.h"
#include <Arduino.h>

note kirbyClear[] = {
    {NOTE_F4,12},
    {NOTE_G4,12},
    {NOTE_A4,12},
    {NOTE_B4,12},
    {NOTE_A4,12},
    {NOTE_B4,12},
    {NOTE_C5, 6},
    {NOTE_G4,12},
    {NOTE_E4,6},
    {NOTE_G5,12},
    
    {NOTE_F5,6},
    {NOTE_E5,12},
    {NOTE_D5,6},
    {NOTE_E5,12},
    {NOTE_C5,4},
    {NOTE_C6,6},
    {NOTE_NON,12},
    
    {NOTE_END,1},
};

note kirbyDead[]{
    {NOTE_C6,12},
    {NOTE_NON,12},
    {NOTE_B5,12},
    {NOTE_AS5,12},
    {NOTE_NON,12},
    {NOTE_A5,12},
    {NOTE_GS5,12},
    {NOTE_NON,12},
    {NOTE_DS5,6},
    {NOTE_NON,12},
    {NOTE_GS5,12},
    {NOTE_G5,12},
    {NOTE_NON,6},
    {NOTE_NON,4},
    {NOTE_G6,8},
    {NOTE_NON,8},
    {NOTE_NON,4},
    {NOTE_END,1}
};

note marioStart[]{
    {NOTE_E4,16},
    {NOTE_E4,16},
    {NOTE_NON,16},
    {NOTE_E4,16},
    {NOTE_NON,16},
    {NOTE_C4,16},
    {NOTE_E4,16},
    {NOTE_NON,16},
    {NOTE_G4,16},
    {NOTE_NON,8/1.5},
    {NOTE_G3,16},
    {NOTE_NON,8/1.5},
    {NOTE_END,1}
};

note marioDead[]{
    {NOTE_C5,64},
    {NOTE_CS5,64},
    {NOTE_D5,64},
    {NOTE_NON,64},
    {NOTE_NON,8},
    {NOTE_NON,4},
    {NOTE_B4,16},
    {NOTE_F5,16},
    {NOTE_NON,16},
    {NOTE_F5,16},
    {NOTE_F5,12},
    {NOTE_E5,12},
    {NOTE_D5,12},
    {NOTE_C5,8},
    {NOTE_END,1}
};

note safariPark[]{
    {NOTE_GS4,8},
    {NOTE_F4,4/1.5},
    
    {NOTE_C4,8},
    {NOTE_C4,16},
    {NOTE_C4,16},
    {NOTE_C4,8},
    {NOTE_C4,16},
    {NOTE_C4,16},
    {NOTE_DS4,8},
    {NOTE_F4,16},
    {NOTE_F4,16},
    {NOTE_C4,8},
    {NOTE_C4,16},
    {NOTE_C4,16},
    
    {NOTE_G4,8},
    {NOTE_F4,8},
    {NOTE_DS4,8},
    {NOTE_AS3,16},
    {NOTE_C4,2},
    {NOTE_NON,16},
    
    {NOTE_G4,16},
    {NOTE_G4,16},
    {NOTE_G4,16},
    {NOTE_F4,16},
    {NOTE_G4,8},
    {NOTE_F4,8},
    {NOTE_G4,8},
    {NOTE_F4,16},
    {NOTE_DS4,16},
    {NOTE_G4,4},
    
    {NOTE_NON,8},
    {NOTE_F4,8},
    {NOTE_F4,8},
    {NOTE_F4,8},
    {NOTE_C4,4},
    {NOTE_B3,4},
    
    {NOTE_NON,8},
    {NOTE_AS3,4},
    {NOTE_C4,8},
    {NOTE_AS3,8},
    {NOTE_GS3,8},
    {NOTE_F3,4},
    
    {NOTE_GS4,8},
    {NOTE_F4,4/1.5},
    {NOTE_NON,8},
    {NOTE_AS3,8},
    {NOTE_C4,8},
    {NOTE_DS4,8},
    {NOTE_G4,8/3.0},
    {NOTE_F4,8},
    {NOTE_NON,2},
    {NOTE_END,1}
};

note pythagora[] = {
    {NOTE_D4,12},
    {NOTE_E4,12},
    {NOTE_NON,12},
    {NOTE_D4,12},
    {NOTE_E4,12},
    {NOTE_NON,12},
    {NOTE_C5,12},
    {NOTE_B4,12},
    {NOTE_NON,6},
    {NOTE_G4,12},
    {NOTE_END,1}
};


void playMusic(int PIN, note notes[], int bpm){
  int i;
  int beat = 240000 / bpm;
  while(notes[i].pitch != NOTE_END){
    double noteDuration = beat / notes[i].duration / 1.30;
    tone(PIN, notes[i].pitch, noteDuration);
    double pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(PIN);
    i++;
  }
}

