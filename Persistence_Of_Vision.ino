//Code Inspired by Mitch Altman's presentation from Noisebridge's Circuit Hacking Monday


/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 2;
int led2 = 4;
int led3 = 6;
int led4 = 8;
int led5 = 10;

int dasDelay=5;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);    
  pinMode(led5, OUTPUT);     
 
}

// the loop routine runs over and over again forever:
void loop() {

//Draw what shape you want here
LEDARRAY(0,1,1,0,0);
LEDARRAY(1,0,0,1,0);
LEDARRAY(1,0,0,1,0);
LEDARRAY(1,1,1,1,0);
LEDARRAY(1,0,0,1,0);
LEDARRAY(1,0,0,1,0);
LEDARRAY(0,0,0,0,0);

delay(20);               // wait for a second
}


void LEDARRAY(int a, int b, int c, int d,int e) //testing it out, it seems the arduino-code accepts 1 and 0 as replacement for HIGH and LOW
{
  digitalWrite(led1, a);   // turn the LED on (1 is the voltage level)
  digitalWrite(led2, b);   // turn the LED on (1 is the voltage level)
  digitalWrite(led3, c);   // turn the LED on (1 is the voltage level)
  digitalWrite(led4, d);   // turn the LED on (1 is the voltage level)
  digitalWrite(led5, e);   // turn the LED on (1 is the voltage level)

  delay(dasDelay);
  
}
