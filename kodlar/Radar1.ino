#define NOTA_DO  262
#define NOTA_RE  294
#define NOTA_MI  330

const int butonDo = 2;
const int butonRe = 3;
const int butonMi = 4;
const int buzzer = 8;

void setup() {
  // Pinleri dahili dirençle (PULLUP) başlatıyoruz
  pinMode(butonDo, INPUT_PULLUP);
  pinMode(butonRe, INPUT_PULLUP);
  pinMode(butonMi, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // DİKKAT: Artık "LOW" basılı olduğu anlamına gelir!
  
  if (digitalRead(butonDo) == LOW) {
    tone(buzzer, NOTA_DO);
  } 
  else if (digitalRead(butonRe) == LOW) {
    tone(buzzer, NOTA_RE);
  } 
  else if (digitalRead(butonMi) == LOW) {
    tone(buzzer, NOTA_MI);
  } 
  else {
    noTone(buzzer);
  }
}
