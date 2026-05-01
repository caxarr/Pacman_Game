#include "render.h"
#include "main.h"
#include "game.h"
#include "ghost_ai.h"
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(void){
     


     while(isRunning()){
          game_logic();
     }
     
     return 0;
}