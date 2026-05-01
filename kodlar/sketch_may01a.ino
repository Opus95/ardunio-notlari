#include <Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


const int trigPin = 10;
const int echoPin = 11;
const int buzzerPin = 8;
const int servoPin = 12;


LiquidCrystal_I2C lcd(0x27, 16, 2); 
Servo myServo;

void setup() {
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  // Servo ve Seri Port
  myServo.attach(servoPin);
  Serial.begin(115200);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("RADARRR");
  lcd.setCursor(0, 1);
  lcd.print("Basliyor");
  delay(1500);
  lcd.clear();
}

void loop() {
  
  for(int i = 15; i <= 165; i++) {  
    radarIslem(i);
  }
  for(int i = 165; i >= 15; i--) {  
    radarIslem(i);
  }
}

void radarIslem(int aci) {
  myServo.write(aci); 
  
  int mesafe = mesafeOlc(); 
  
  
  if (aci % 3 == 0) {
    lcd.setCursor(0, 0);
    lcd.print("Aci: ");
    lcd.print(aci);
    lcd.print(" deg   ");
    
    lcd.setCursor(0, 1);
    lcd.print("Mesafe: ");
    lcd.print(mesafe);
    lcd.print(" cm   ");
  }

  
  if(mesafe > 0 && mesafe < 15) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  
  Serial.print(aci);
  Serial.print(",");
  Serial.print(mesafe);
  Serial.print(".");
  
  
  delay(12); 
}

int mesafeOlc() { 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
 
  long sure = pulseIn(echoPin, HIGH, 25000); 
  int sonuc = sure * 0.034 / 2;
  
  return (sonuc == 0) ? 400 : sonuc; 
}
