//
// Created by Matej Kandra on 26/11/2022.
//

#include "demo.h"

int demo(){
    int SCALE = 50;
    Snake snake;
    snake.play();

    snake.collision();
    snake.foodPos = {0,0};
    std::cout << "breb" << std::endl;

    snake.eat();
}