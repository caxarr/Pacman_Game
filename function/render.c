#include "render.h"
#include <stdio.h>
#include <stdlib.h>

void render_level(const char* level){
     printf("%s", level);     
}

char* load_file(const char* filename){
     FILE* file = fopen(filename,"r");
     if (!file){
          return NULL;
     }
     char buffer[256];
     int size;
     char* content;

     fseek(file, 0 , SEEK_END);
     size = ftell(file);
     rewind(file);
     content = (char*) malloc((size + 1) * sizeof(char));
     
     if (!file){
          return NULL;
     }
     fread(content,sizeof(char),size, file); 
     content[size]='\0';

     fclose(file);
     return content;
}

// char* level = load_file("maps/level2.txt");
     // if(!level)
     // {
     //      printf("Level was not loaded\n");
     //      return 1;
     // }



     // render_level(level);    
     // free(level);