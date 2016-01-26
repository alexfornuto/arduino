#include "pitches.h"

int notes;
int duration;

// This is for an Arduino with a speaker attached. Is simply plays in single-note form the song Master of Puppets.
// note durations: 4 = quarter note, 8 = eighth note, etc.:

int intro1[] = {NOTE_E3, 0, NOTE_D4, NOTE_CS4, NOTE_C4};
int intro1NoteDurations[] = {4, 2, 4, 4, 1 };
int intro1Count = 5;


int intro2[] = {NOTE_E3, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_E3, NOTE_DS4, NOTE_E3, NOTE_E3, NOTE_D4, NOTE_CS4, NOTE_C4};
int intro2NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 2};
int intro2Count = 11;

int intro3[] = {NOTE_E3, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_E3, NOTE_AS3, NOTE_E3, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_GS3, NOTE_E3, NOTE_G3, NOTE_E3, NOTE_FS3, NOTE_E3};
int intro3NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,};
int intro3Count = 16;

int preverse1[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_CS4, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_B3, NOTE_B3};
int preverse1NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse1Count = 16;

int preverse2[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_CS4, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_B3, 0};
int preverse2NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse2Count =  16;

int preverse3[] = {NOTE_E3, NOTE_F3, NOTE_B3, NOTE_E3, NOTE_F3, NOTE_C4, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3};
int preverse3NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, };
int preverse3Count = 16;

int endIntro[] = {NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_G3, NOTE_FS3, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5, NOTE_E3, NOTE_DS4, NOTE_A5};
int endIntroNoteDurations[] = { 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2 };
int endIntroCount = 23;

int eightVampE[]{ NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, NOTE_E3, };
int eightVampENoteDurations[] = { 8, 8, 8, 8, 8, 8, 8, 8,  };
int eightVampECount = 8;

int verse1[] { 0, NOTE_G3, NOTE_A3, 0, NOTE_AS3, NOTE_A3, NOTE_G3, NOTE_A3};
int verse1NoteDurations[] { 8, 8, 8, 8, 8, 8, 8, 8};
int verse1Count = 8;

int verse2[] { NOTE_A3, 0, NOTE_A3, 0 };
int verse2NoteDurations[] {8, 8, 8, 8,};
int verse2Count = 4;

int eightVampFSharp[]{ NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_FS3, };
int eightVampFSharpNoteDurations[]{ 8, 8, 8, 8, 8, 8, 8, 8, };
int eightVampFSharpCount = 8;

void playInput(int notes[], int durations[], int count){
  
  int pulledCount = sizeof(durations)/sizeof(int);
  
  for (int thisNote = 0; thisNote < count; thisNote++) {
    int noteDuration = 1000 / durations[thisNote];
    tone(8, notes[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
  
}


void setup() {

  //intro 
  

  playInput(intro1, intro1NoteDurations, intro1Count);

  playInput(intro2, intro2NoteDurations, intro2Count);

  playInput(intro3, intro3NoteDurations, intro3Count);

  playInput(intro2, intro2NoteDurations, intro2Count);

  playInput(intro3, intro3NoteDurations, intro3Count);

  playInput(preverse1, preverse1NoteDurations, preverse1Count);

  playInput(preverse2, preverse2NoteDurations, preverse2Count);

  playInput(preverse1, preverse1NoteDurations, preverse1Count);

  playInput(preverse3, preverse3NoteDurations, preverse3Count);

  playInput(endIntro, endIntroNoteDurations, endIntroCount);
  


  //verse 1
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse1, verse1NoteDurations, verse1Count);
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse2, verse2NoteDurations, verse2Count);


  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse1, verse1NoteDurations, verse1Count);
  
  playInput(eightVampE, eightVampENoteDurations, eightVampECount); 
  
  playInput(verse2, verse2NoteDurations, verse2Count);



  
  playInput(eightVampFSharp, eightVampFSharp, eightVampFSharpCount);

  
  noTone(8);
}

void loop() {
  // no need to repeat the melody.
}
