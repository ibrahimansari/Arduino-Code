#include <LiquidCrystal.h>

#define trigPin 13
#define echoPin 12
LiquidCrystal lcd(11, 10, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.print("Distance Equals");
}

void loop() {
  lcd.setCursor(0, 1);
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance >= 200 || distance <= 0){
    lcd.print("Out of range");
  }
  else {
    lcd.print(distance         );
    lcd.print(" Centimeters   ");
  }
  delay(500);
}
