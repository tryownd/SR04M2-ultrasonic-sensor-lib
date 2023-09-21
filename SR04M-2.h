#ifndef SR04M_2_h
#define SR04M_2_h

#include "Arduino.h"

class SR04M2 {
  public:
    SR04M2(int rxPin);
    void begin();
    int getDistance();
  
  private:
    int _rxPin;
};

#endif
