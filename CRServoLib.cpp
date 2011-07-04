#include "WProgram.h"
#include "CRServoLib.h"

Bot::Bot(int left, int right, int rate){
  _left = left;
  _right = right;
  _curRate = rate;
  _baseDelay = 1500;
  
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
}
    
//rate is in ms
void Bot::forward(int time){      
    for(int i = 0; i < time/20; i++){
      digitalWrite(_right, HIGH);
      delayMicroseconds(_baseDelay-_curRate);
      digitalWrite(_right, LOW);
      
      digitalWrite(_left, HIGH);
      delayMicroseconds(_baseDelay+_curRate);
      digitalWrite(_left, LOW);
      
      delay(20);
   }
}

void Bot::set_rate(int rate){
    _curRate = rate;
}

void Bot::forward_r(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_left, HIGH);
        delayMicroseconds(_baseDelay+_curRate);
        digitalWrite(_left, LOW);
        
        delay(20);
    }
}

void Bot::forward_l(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_right, HIGH);
        delayMicroseconds(_baseDelay-_curRate);
        digitalWrite(_right, LOW);
        
        delay(20);
    }
}

void Bot::backward(int time){
    for(int i = 0; i < time/20; i++){
      digitalWrite(_right, HIGH);
      delayMicroseconds(_baseDelay+_curRate);
      digitalWrite(_right, LOW);
      
      digitalWrite(_left, HIGH);
      delayMicroseconds(_baseDelay-_curRate);
      digitalWrite(_left, LOW);
      
      delay(20);
   }
}

void Bot::backward_l(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_right, HIGH);
        delayMicroseconds(_baseDelay+_curRate);
        digitalWrite(_right, LOW);
        
        delay(20);
    }
}

void Bot::backward_r(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_left, HIGH);
        delayMicroseconds(_baseDelay-_curRate);
        digitalWrite(_left, LOW);
        
        delay(20);
    }
}

void Bot::spin_cw(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_right, HIGH);
        delayMicroseconds(_baseDelay+_curRate);
        digitalWrite(_right, LOW);
        
        digitalWrite(_left, HIGH);
        delayMicroseconds(_baseDelay+_curRate);
        digitalWrite(_left, LOW);
        
        delay(20);
    }
}

void Bot::spin_ccw(int time){
    for(int i = 0; i < time/20; i++){
        digitalWrite(_right, HIGH);
        delayMicroseconds(_baseDelay-_curRate);
        digitalWrite(_right, LOW);
        
        digitalWrite(_left, HIGH);
        delayMicroseconds(_baseDelay-_curRate);
        digitalWrite(_left, LOW);
        
        delay(20);
    }
}
