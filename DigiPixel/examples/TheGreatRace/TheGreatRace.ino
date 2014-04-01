#include <DigiPixel.h>
#include <avr/pgmspace.h>

// leave the following line uncommented for use with a Digispark
//DigiPixel digiPixel(3,0,5,2,1);  // LED Latch/Button Shift !load pin, LED/Button clock pin, LED Data Pin, LED Output Enable pin, Buttons data pin)

// leave the following line uncommented for use with an Arduino
DigiPixel digiPixel(5,2,6,4,3);  // LED Latch/Button Shift !load pin, LED/Button clock pin, LED Data Pin, LED Output Enable pin, Buttons data pin)


// Program memory arrays
byte TitleRed[67]PROGMEM={B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00100010, B00100110, B00000000, B00111110, B00101000, B00110110, B00000000, B00111110, B00101010, B00100010, B00000000, B00111110, B00101000, B00111110, B00000000, B00100000, B00111110, B00100000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte TitleGreen[67]PROGMEM={B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00100000, B00111110, B00100000, B00000000, B00111110, B00001000, B00111110, B00000000, B00111110, B00101010, B00100010, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
byte TitleBlue[67]PROGMEM={B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00111110, B00101000, B00110110, B00000000, B00111110, B00101000, B00111110, B00000000, B00111110, B00100010, B00100010, B00000000, B00111110, B00101010, B00100010, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000};
 
byte Track2Red[128]PROGMEM={0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00010000, 0b00010000, 0b00010000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00001000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};
byte Track2Green[128]PROGMEM={0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b11000001, 0b11000001, 0b11000001, 0b11000001, 0b11000001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11110001, 0b11110001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11000011, 0b11000011, 0b11000011, 0b11010011, 0b10010011, 0b10010011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b11000001, 0b11000001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11000001, 0b11000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000111, 0b10000111, 0b10000111, 0b10000111, 0b10000111, 0b11000111, 0b11000111, 0b11000111, 0b11000011, 0b11000011, 0b11000011, 0b11100011, 0b11100001, 0b11100001, 0b11101001, 0b11101001, 0b11001001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001};
byte Track2Blue[128]PROGMEM={0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00001000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00001000, 0b00001000, 0b00001000, 0b00001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};
byte Track2Barriers[128]PROGMEM={0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b11000001, 0b11000001, 0b11000001, 0b11000001, 0b11000001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11110001, 0b11110001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11100011, 0b11000011, 0b11000011, 0b11000011, 0b11010011, 0b10010011, 0b10010011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10000011, 0b10010011, 0b10010011, 0b10010001, 0b10010001, 0b10010001, 0b10010001, 0b10010001, 0b10001001, 0b10001001, 0b10000001, 0b11000001, 0b11000001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100101, 0b11100101, 0b11100101, 0b11100101, 0b11100101, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11100001, 0b11101001, 0b11101001, 0b11101001, 0b11001001, 0b11000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10001001, 0b10001001, 0b10001001, 0b10001001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10100001, 0b10100001, 0b10100011, 0b10100011, 0b10000011, 0b10000011, 0b10000111, 0b10000111, 0b10000111, 0b10000111, 0b10000111, 0b11000111, 0b11000111, 0b11000111, 0b11000011, 0b11000011, 0b11000011, 0b11100011, 0b11100001, 0b11100001, 0b11101001, 0b11101001, 0b11001001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001, 0b10000001};


// Constants
#define SteeringSpeedSave 8 // only jumps 1 LED instead of 2 (easier to steer)
#define ForwardSpeedSave 7
#define TitleScreen 0
#define PlayingGame 1
#define PlayingGameHoriz 2
#define ScrollingSpeedSave 5

// Variables
byte CarX = 4;                          
byte CarY = 0;                          
byte CarColor = red;                     
byte SteeringSpeed = SteeringSpeedSave; 
byte ForwardSpeed = ForwardSpeedSave;  
int TrackOffset = 0;                  
byte GameMode = TitleScreen;
byte TitleOffset = 0;
byte ScrollingSpeed = ScrollingSpeedSave;
int LoopTimes = 0;

void setup(){
  
  Serial.begin(9600);
}


void loop(){ 
  checkModeChange();  
  updateGraphics();                  
  checkForCollision();               
  saveGraphics();               
  digiPixel.saveButtonStates();     
  digiPixel.drawScreen();         
}

void checkModeChange(){
  if (GameMode == TitleScreen & digiPixel.buttonAPressed){
   GameMode = PlayingGame;
   TrackOffset = 0;
   LoopTimes = 0;
   CarX = 4;
   CarY = 0;
  } 
  if (GameMode == TitleScreen & digiPixel.buttonBPressed){  // Horizontal Scroller or Portrait mode
   GameMode = PlayingGameHoriz;
   TrackOffset = 0;
   LoopTimes = 0;
   CarX = 2;
   CarY = 2;
  } 
}

void checkForCollision(){
   if (digiPixel.checkBarrier(CarX, CarY) == true){  
     GameMode = TitleScreen;
     TitleOffset = 0;
  }
}

void updateGraphics(){
  if (GameMode == TitleScreen){  
    if (ScrollingSpeed != 0){
     ScrollingSpeed--; 
    }
    else{
     ScrollingSpeed = ScrollingSpeedSave;
     TitleOffset++;
     if (TitleOffset == (sizeof(TitleGreen) - 8)){
      TitleOffset = 0;
     } 
    }
  }
  else if (GameMode != TitleScreen){
    if (SteeringSpeed != 0){
      SteeringSpeed--;
    }
    else{
      if (digiPixel.buttonUpPressed & CarY < 7){
        SteeringSpeed = SteeringSpeedSave;
        CarY++;    
      }
      if (digiPixel.buttonDownPressed & CarY > 0){
        SteeringSpeed = SteeringSpeedSave;
        CarY--;    
      }
      if (digiPixel.buttonLeftPressed & CarX > 0){
        SteeringSpeed = SteeringSpeedSave;
        CarX--;    
      }
      if (digiPixel.buttonRightPressed & CarX < 7){
        SteeringSpeed = SteeringSpeedSave;
        CarX++;    
      }
    }
    LoopTimes++;
    if (ForwardSpeed > 1){
     ForwardSpeed--; 
    }
    else{
     ForwardSpeed = ForwardSpeedSave - int(LoopTimes / 300);
     if (ForwardSpeed < 0) {
       ForwardSpeed = 1;
     }
     TrackOffset++;
     if (TrackOffset == (sizeof(Track2Barriers) - 8)){
      TrackOffset = 0;
     } 
    }
  }
}

void saveGraphics(){
  digiPixel.clearScreen();
  if (GameMode == TitleScreen){
    for (byte index = 0; index <= 7; index++){
     digiPixel.bufferRed[index] = pgm_read_dword(&TitleRed[(index) + TitleOffset]);
     digiPixel.bufferGreen[index] = pgm_read_dword(&TitleGreen[(index) + TitleOffset]);
     digiPixel.bufferBlue[index] = pgm_read_dword(&TitleBlue[(index) + TitleOffset]);
    }
  }
  else if (GameMode == PlayingGame or GameMode == PlayingGameHoriz){
    for (byte index = 0; index <= 7; index++){
     digiPixel.bufferRed[index] = pgm_read_dword(&Track2Red[(index) + TrackOffset]);
     digiPixel.bufferGreen[index] = pgm_read_dword(&Track2Green[(index) + TrackOffset]);
     digiPixel.bufferBlue[index] = pgm_read_dword(&Track2Blue[(index) + TrackOffset]);
     digiPixel.bufferBarriers[index] = pgm_read_dword(&Track2Barriers[(index) + TrackOffset]);
    }
  if (GameMode == PlayingGame) { // No rotate for PlayingModeHoriz
    digiPixel.rotateScreen(90);
  }
  bitWrite(digiPixel.bufferRed[CarX],CarY,1);
  bitWrite(digiPixel.bufferGreen[CarX],CarY,0);
  bitWrite(digiPixel.bufferBlue[CarX],CarY,0);
  }
}




