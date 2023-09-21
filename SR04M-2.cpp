#include "SR04M-2.h"

SR04M2::SR04M2(int rxPin) {
  _rxPin = rxPin;
}

void SR04M2::begin() {
  pinMode(_rxPin, INPUT);
  Serial.begin(9600); // Inisialisasi komunikasi serial di dalam library
}

int SR04M2::getDistance() {
  long durasi = pulseIn(_rxPin, HIGH);
  int jarak = durasi * 0.034 / 2;
  return jarak;
}
