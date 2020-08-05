#include "MyServo.h"
#include "Light.h"

MyServo servo; //控制舵机的类
Light light; //控制光敏电阻的类

class Game{
public:
    void ClassicMode(); //经典模式/禅模式
    void RushMode(); //街机模式
    //更多模式未完待续
}

void setup(){
    Serial.begin(9600);
}
;
void loop(){
    Game game;
    while(1){
        game.ClassicMode();
    }
}
