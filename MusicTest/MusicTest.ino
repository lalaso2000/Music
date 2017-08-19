// Musicサンプル

#include <Music.h>

const int PIN_BUZZER = 8;

//　サンプルのチューリップの歌
note Tulip[] = {
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_NON,4},
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_NON,4},
  {NOTE_G5,4},
  {NOTE_E5,4},
  {NOTE_D5,4},
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_D5,4/1.5},
  {NOTE_NON,8},
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_NON,4},
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_NON,4},
  {NOTE_G5,4},
  {NOTE_E5,4},
  {NOTE_D5,4},
  {NOTE_C5,4},
  {NOTE_D5,4},
  {NOTE_E5,4},
  {NOTE_C5,8.0/3.0},
  {NOTE_NON,8},
  {NOTE_G5,4},
  {NOTE_G5,4},
  {NOTE_E5,4},
  {NOTE_G5,4},
  {NOTE_A5,4},
  {NOTE_A5,4},
  {NOTE_G5,4/1.5},
  {NOTE_NON,8},
  {NOTE_E5,4},
  {NOTE_E5,4},
  {NOTE_D5,4},
  {NOTE_D5,4},
  {NOTE_C5,2},
  {NOTE_END,1}
};

void setup() {
  // put your setup code here, to run once:
  playMusic(PIN_BUZZER, Tulip, 120);        //チューリップの歌をBPM120で再生
  delay(1000);
  playMusic(PIN_BUZZER, kirbyClear, 150);  //カービィクリアをBPM150で再生
}

void loop() {
  // put your main code here, to run repeatedly:

}
