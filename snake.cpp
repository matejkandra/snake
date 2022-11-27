//
// Created by Matej Kandra on 22/11/2022.
//
#include "snake.h"

void Snake::eat() {
    if(Helper::Vector2::compare(snakePosition[0], foodPos)){
        snakeLength++;
        switch (orientation) {
            case 'f':
                snakePosition.push_back({snakePosition.end()->x--,snakePosition.end()->y });
                break;
            case 'd':
                snakePosition.push_back({snakePosition.end()->x--,snakePosition.end()->y });
                break;
        }
    }
}

void Snake::play() {
    snakePosition.push_back({0,0});
    orientation = 'f';
    HEAD = snakePosition.at(0);
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
    }else if(Helper::Vector2::compare(snakePosition.at(0), foodPos)){

    }
}

void Snake::placeFood() {

}

void Snake::move() {
    Helper::Vector2 val = snakePosition.at(0);
    std::rotate(snakePosition.rbegin(), snakePosition.rbegin() + 1, snakePosition.rend());
    switch(orientation){
        case 'f':
            snakePosition.at(0) = val;
            snakePosition.at(0).y++;
            break;
        case 'd':
            snakePosition.at(0) = val;
            snakePosition.at(0).y--;
            break;
        case 'l':
            snakePosition.at(0) = val;
            snakePosition.at(0).x--;
            break;
        case 'r':
            snakePosition.at(0) = val;
            snakePosition.at(0).x++;
            break;
    }
}
