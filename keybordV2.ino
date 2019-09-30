
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>
SoftwareSerial mySoftwareSerial(0, 1);
DFRobotDFPlayerMini myDFPlayer;
int equalizacao = 0;

const int nElements = 'Z' - 'A' + 1;
const byte ledPin[nElements] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52 };
const byte buttonPin[nElements] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53 };
bool value[nElements];
bool lastValue[nElements];

void setup()
{
  mySoftwareSerial.begin(9600);
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.setTimeOut(500);
  myDFPlayer.volume(30);
  myDFPlayer.EQ(0);

  for (int i = 0; i < nElements; i++ ) {
    pinMode(ledPin[i], OUTPUT);
    digitalWrite(ledPin[i], LOW);
    pinMode(buttonPin[i], INPUT); 
  }
}


void loop()
{
  for (int i = 0; i < nElements; i++) {
    value[i] = digitalRead(buttonPin[i]);
    if ( value[i] != lastValue[i] ) {
      lastValue[i] = value[i];
      if (value[i] == HIGH)   {
        digitalWrite(ledPin[i], HIGH);
        myDFPlayer.play(i+1);
      }  else  {
        digitalWrite(ledPin[i], LOW);
      }
    }
  }
  if (value[25] == HIGH && value[0] == HIGH) {
    myDFPlayer.play(27);
  }
}
