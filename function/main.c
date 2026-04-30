#include "render.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
     char* level = load_file("maps/level1.txt");
     if(!level)
     {
          return 1;
     }
     render_level(level);    
     free(level);
     return 0;
}