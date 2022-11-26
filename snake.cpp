//
// Created by Matej Kandra on 22/11/2022.
//
#include "snake.h"

void Snake::eat() {
    if(Helper::Vector2::compare(snakePosition[0], foodPos)){
        snakeLength++;
    }
}

void Snake::play() {
    snakePosition.push_back({0,0});
    orientation = 'f';
    HEAD = snakePosition.at(0);
    move();
    collision();



}

void Snake::collision() {
    for (int i = 0; i < snakePosition.size(); ++i) {
        if(Helper::Vector2::compare(snakePosition.at(0), snakePosition.at(i)) && i != 0){
            exit(0);
        }
    }
    if(snakePosition.at(0).x > BORDER || snakePosition.at(0).y > BORDER || snakePosition.at(0).x < -BORDER || snakePosition.at(0).y < -BORDER) {
        exit(0);
    }
}

void Snake::placeFood() {

}

void Snake::move() {
    switch(orientation){
        case 'f':
            for (auto & i : snakePosition) {
                i.x++;
            }
        case 'd':
            for (auto & i : snakePosition) {
                i.x++;
            }
        case 'l':
            for (auto & i : snakePosition) {
                i.x++;
            }
        case 'r':
            for (auto & i : snakePosition) {
                i.x++;
            }
    }
}
