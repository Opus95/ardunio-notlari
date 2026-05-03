⚡  Arduino IDE Üzerinden Yapılan Bir Radar Projesi.



🛠️ Bileşenler:


Arduino Uno (Veya Herhangi Bir Mikrokontrolcü).

-I2C LCD Ekran

-SG90 Servo

-Buzzer

-Breadboard & Jumper

HC-SR04 Ultrasonik Mesafe Sensörü

⚙️ Devre Şeması ve Bağlantılar:

1-HC-SR04:

VCC: Arduino 5V

GND: Arduino GND

Trig: Arduino Pin 10   

Echo: Arduino Pin 11

2-Servo Motor:

Sinyal: Arduino Pin 12   

VCC: Arduino 5V

GND: Arduino GND

3-I2C LCD Ekran:

VCC: Arduino 5V

GND: Arduino GND

SDA: Arduino A4 

SCL: Arduino A5 

4-Buzzer:

Artı (+): Pin 8
Eksi (-): GND

💻 Kurulum ve Çalıştırma:

Yukarıdaki "Devre Şeması ve Bağlantılar" Kısmını Doğru Bir Şekilde Yerleştirin.

Servo.h,
LiquidCrystal_I2C.h,
Wire.h,
Kütüphanelerinin Yüklü Olduğundan Emin Olun.

🖥️ Kullanılan Teknolojiler:

![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)




