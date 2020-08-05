#ifndef _MY_SERVO_H
#define _MY_SERVO_H

#include <Servo.h>
#include <Arduino.h>

class MyServo{
private:
    Servo servos[4];
    int servo_pin[4] = {10, 11, 12, 13}; //舵机引脚定义
    int init_angle[4] = {100, 90, 90, 90}; ///舵机初始角度定义 需要重新测量调试
public:
    MyServo();
    void Click(int index, int speed_level);
        //进行一次点击，即舵角放下后立即返回，第一个参数是舵机编号，第二个参数提供了1(slow)、2(fast)两个speed_level(然而差别似乎并不大)

    void Press(int index, int mills_time);
        //进行一次按压，经过mills_time的时间之后抬起
};


#endif