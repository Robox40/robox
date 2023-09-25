#include <Arduino.h>

// Définir le numéro de broche de la LED
const int ledPin = 13;

void setup() {
  // Initialisation de la broche de la LED en tant que sortie
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Allumer la LED pendant une seconde
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // Éteindre la LED pendant une seconde
  digitalWrite(ledPin, LOW);
  delay(1000);
}
