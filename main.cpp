#include "snake.h"
#include <raylib.h>
#include <iostream>

int main(){
    int SCALE = 50;
    Snake snake;
    snake.play();

    snake.collision();
    snake.foodPos = {0,0};
    std::cout << "breb" << std::endl;

    snake.eat();

}