#include "Point.h"
#include "Board.h"
#include "snake.h"
#include <iostream>


using namespace std;


//constructeur par default
Snake::Snake()
{
this->m_indexSerpent=2;
}

//destructeur par défaut

Snake::Snake()
{
}
// méthode afficher point
void Snake::afficher()
{
for(int i=0;i<m_indexSerpent;i++)
{

.drawPoint();
}
}
// méthode ajouter point
void Snake::ajouterPoint(Point P)
{
 this-> Snake[m_snake]=P;
 m_indexSerpent++;

}
// méthode déplacer point
void Snake::deplacer() 
{

}

