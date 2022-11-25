//
// Created by Matej Kandra on 25/11/2022.
//

#include "Helper.h"

bool Helper::Vector2::compare(Helper::Vector2 i, Helper::Vector2 j) {
    if(i.x == j.x && i.y == j.y){
        return true;
    }else{
        return false;
    }
}
