//
// Created by Matej Kandra on 26/11/2022.
//

#ifndef SNAKE_DEMO_H
#define SNAKE_DEMO_H

#include "raylib.h"
#include "stdlib.h"
#include "snake.h"

class Demo{
public:
    Vector2 SCREEN_DIMENSIONS = {1000,1000};
    Vector2 RATIO = {50,50};

    void play();
};

#endif //SNAKE_DEMO_H
