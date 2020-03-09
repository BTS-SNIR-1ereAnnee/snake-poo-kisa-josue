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
   Snake(); //constructeur
   ~Snake(); // destructeur
   
   void ajouterPoint(Point P);
   void afficher();
   void deplacer();
private:


Point m_snake[20];
int m_indexSerpent;


};

#endif
