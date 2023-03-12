

// Unit Test Code
#include <assert.h>
#include <iostream>
#include "Function_Global.h"

int main() {

    // Test 1: CheckCollision() 
    SDL_Rect objet_1 = {0, 0, 10, 10}; 
    SDL_Rect objet_2 = {5, 5, 10, 10}; 

    assert(SDLFunctionGlobal::CheckCollision(objet_1, objet_2) == true); 

    // Test 2: CheckCollision() 
    SDL_Rect objet_3 = {0, 0, 10, 10}; 
    SDL_Rect objet_4 = {15, 15, 10, 10}; 

    assert(SDLFunctionGlobal::CheckCollision(objet_3, objet_4) == false); 

    std::cout << "All tests passed!" << std::endl;

    return 0;  
}
