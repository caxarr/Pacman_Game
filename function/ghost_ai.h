#ifndef GHOST_AI_H
#define GHOST_AI_H

typedef struct 
{
     int x;
     int y;
}Position;

typedef struct
{
     Position position;
     int speed;
     int direction; // 0: up, 1: right, 2: down, 3: left
     
}GHOST;

#endif // GHOST_AI_H