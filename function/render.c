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
     fseek(file, 0 , SEEK_END);
     int size = ftell(file);
     rewind(file);
     char* content = (char*) malloc((size + 1));
     
     if (!file){
          return NULL;
     }
     fread(content,sizeof(char),size, file); 
     content[size]='\0';

     fclose(file);
     return content;
}