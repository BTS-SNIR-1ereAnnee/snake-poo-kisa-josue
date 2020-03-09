#ifndef SNAKE_H
#define SNAKE_H

#include <ncurses.h>
#include "Point.h"
#include "Board.h"
class Board;
class Point;
class Snake
{
public:
   Snake(); 
   ~Snake();
   
   void ajouterPoint(Point P);
   void afficher();

private:


Point snake[20];
int m_indexSerpent;


};

#endif
