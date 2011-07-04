/* 
 * CRServoLib.h - Library for dealing with pairs of continuous
 * rotation servos.
 * Created by Carson Holgate, May 30, 2011
 */

#ifndef CRServoLib_h
#define CRServoLib_h

#include "WProgram.h"

class Bot{
  public:
    Bot(int left, int right, int rate);
    void set_rate(int rate);
    void forward(int time);
    void forward_r(int time);
    void forward_l(int time);
    void backward(int time);
    void backward_l(int time);
    void backward_r(int time);
    void spin_cw(int time);
    void spin_ccw(int time);
  private:
    int _left;
    int _right;
    int _curRate;
    int _baseDelay;
};

#endif
