#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
class Sensor{
    public:
    Sensor(){
        srand(time(NULL));
    }
int generateRandomValue() {
     
     return rand() %256;
}
};