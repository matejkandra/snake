//
// Created by Matej Kandra on 26/11/2022.
//

#include "Demo.h"

void Demo::play() {
    Snake snake;

    snake.snakePosition.push_back({0,0});
    snake.orientation = 'f';

    snake.move();
    snake.move();
    for (int i = 0; i < snake.snakePosition.size(); ++i) {
        std::cout << std::to_string(snake.snakePosition.at(i).x) << std::endl << std::to_string(snake.snakePosition.at(i).y) << std::endl;
    }
}
