#include <stdlib.h>

int redPin = 32;
int greenPin = 25;
int bluePin = 33;

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW); 
  int r = rand() % 3;

  switch(r){
    case 0:
      digitalWrite(redPin, HIGH);
      Serial.println("Bad");
      break;
    case 1:
      digitalWrite(bluePin, HIGH);
      Serial.println("Meh");
      break;
    case 2:
      digitalWrite(greenPin, HIGH);
      Serial.println("Good");
      break;
    default:
      digitalWrite(redPin, HIGH);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, HIGH);
      Serial.println("Something Broke...");
      break;
  }

  delay(10000);
}
