#include "game.h"
#include "ncurses.h"

char isRunning(){
     char key = getch();
     if(key == 27){ // ESC key to exit
          return 0;
     }
     
     return 1; // Placeholder for game running state
}

void game_logic(){
     // Placeholder for game logic
     // This function will be called in the main loop to update the game state
}