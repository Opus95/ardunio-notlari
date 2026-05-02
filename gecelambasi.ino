
const int ldrPin = A0;  
const int ledPin = 9;   


int esikDegeri = 400; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(115200);     
}

void loop() {
  int isikMiktari = analogRead(ldrPin); 
  
  // Seri port ekranına yazdır 
  Serial.print("Işık Değeri: ");
  Serial.println(isikMiktari);

  
  if (isikMiktari < esikDegeri) {
    digitalWrite(ledPin, HIGH); /
  } else {
    digitalWrite(ledPin, LOW);  
  }

  delay(100); 
}
