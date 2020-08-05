#include "MyServo.h"

MyServo::MyServo(){
    for(int i = 0; i < 4; i++){
        servos[i].attach(servo_pin[i], 500, 2400);
        servos[i].write(init_angle[i] + 30);
    }
    delay(100);
}

void MyServo::Click(int index, int speed_level){
    servos[index].write(init_angle[index]);
    switch(speed_level){
        case 1:
            delay(80);
            servos[index].write(init_angle[index] + 30);
            //delay(80);
            break;
        case 2:
            delay(60);
            //delay(500);
            servos[index].write(init_angle[index] + 25);
            //delay(100);
            break;
        
    }
}

void MyServo::Press(int index, int mills_time){
    servos[index].write(init_angle[index]);
    delay(mills_time);
    servos[index].write(init_angle[index] + 30);
}
