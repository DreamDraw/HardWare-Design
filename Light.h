#ifndef _LIGHT_H
#define _LIGHT_H
#include <Arduino.h>

class Light{
private:
    int light_pin_D[4][2] = {{30, 31}, {32, 33}, {34, 35}, {36, 37}}; //光敏电阻数字引脚定义
    int light_pin_A[4][2] = {{A0, A1}, {A2, A3}, {A4, A5}, {A6, A7}}; //光敏电阻模拟引脚定义
public:
    Light();
    bool IsBlack(int id1, int id2); //若检测到黑则返回true，否则false
    int GetValue(int id1, int id2); //返回检测到的值
};

#endif