//
// Created by Matej Kandra on 26/11/2022.
//

#include "Demo.h"

void Demo::play() {
    InitWindow(SCREEN_DIMENSIONS.x, SCREEN_DIMENSIONS.y, "SNAKE");

    Snake snake;

    snake.snakePosition.push_back({0,0});
    snake.snakePosition.push_back({0,-1});
    snake.snakePosition.push_back({1,-1});
    snake.snakePosition.push_back({2,-1});
    snake.snakePosition.push_back({2,-2});
    snake.snakePosition.push_back({2,-3});
    snake.snakePosition.push_back({3,-3});
    snake.snakePosition.push_back({3,-4});
    snake.snakePosition.push_back({3,-5});
    snake.snakePosition.push_back({3,-6});
    snake.orientation = 'f';

    SetTargetFPS(10);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        for (int i = 0; i < snake.snakePosition.size(); ++i) {
            DrawRectangle(snake.snakePosition.at(i).x*50+500,snake.snakePosition.at(i).y*50+500,RATIO.x,RATIO.y, BLUE);
        }
        EndDrawing();
        if(IsKeyDown(KEY_UP)){
            if(snake.orientation != 'f'){
                snake.orientation = 'd';
            }
        }else if(IsKeyDown(KEY_DOWN)){
            if(snake.orientation != 'd'){
                snake.orientation = 'f';
            }
        }else if(IsKeyDown(KEY_LEFT)){
            if(snake.orientation != 'r'){
                snake.orientation = 'l';
            }
        }else if(IsKeyDown(KEY_RIGHT)){
            if(snake.orientation != 'l'){
                snake.orientation = 'r';
            }
        }
        snake.move();
        snake.collision();
    }

    snake.move();

    for (int i = 0; i < snake.snakePosition.size(); ++i) {
        std::cout << std::to_string(snake.snakePosition.at(i).x) << " " << std::to_string(snake.snakePosition.at(i).y) << std::endl;
    }
}
