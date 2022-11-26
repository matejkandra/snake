//
// Created by Matej Kandra on 22/11/2022.
//


#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include <cstdlib>
#include "Helper.h"
#include <vector>

class Snake{
public:
    Helper::Vector2 HEAD = {NULL,NULL};
    std::vector<Helper::Vector2> snakePosition;
    int snakeLength = 1;
    const int BORDER = 10;
    Helper::Vector2 foodPos;
    char orientation = ' ';

    void play();
    void eat();
    void placeFood();
    void collision();
    void move();
};

#endif //SNAKE_SNAKE_H
