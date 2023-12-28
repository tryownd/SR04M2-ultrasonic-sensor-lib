
/* 
find me on https://www.instagram.com/tryownd | https://www.facebook.com/tryoo.cgr | iyatryo@gmail.com
*/

#include <SR04M-2.h>
#define rxPin 27 //terhubung dengan TX (modul SR04M-2 hanya menggunakan 3 pin, TX, GND, VCC)
SR04M2 ultrasonic(rxPin); // Inisialisasi objek ultrasonic dengan pin rx

void setup() {
  ultrasonic.begin(); // Inisialisasi sensor ultrasonic
  Serial.begin(9600);
}

void loop() {
  //SR04M-2 waterprof ultrasinic sensor memiliki noise pembacaan sesekali dalam membaca bidang yang tidak baik dalam memantulkan gelombang ulrasonic
  //gunakan program penghilang noise dibawah ini, atau anda juga dapat menambahkan delay()

  int jarak = ultrasonic.getDistance(); // Mendapatkan jarak dari sensor
  //Serial.println(jarak); // Menampilkan nilai diluar penghilang noise
  
  // menghilangkan kesalahan membaca dengan membatasi maksimal pembacaan
  if (jarak < 200) { // sesuaikan dengan noice yang muncul pada serial monitor
    // tambahkan program lain disini untuk menghindari noise/kesalahan baca
    Serial.println(jarak);
  }

  //delay(1000); // pilihan opsional
}
