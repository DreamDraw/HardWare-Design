#include "Light.h"

Light::Light(){
    for(int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++){
            pinMode(light_pin_D[i][j], INPUT);
            pinMode(light_pin_A[i][j], INPUT);
        }
        
}

bool Light::IsBlack(int id1, int id2){
    return digitalRead(light_pin_D[id1][id2]) == 1 ? true : false;
}
int Light::GetValue(int id1, int id2){
    return analogRead(light_pin_A[id1][id2]);
}