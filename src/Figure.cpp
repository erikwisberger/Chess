#include "../include/Figure.hpp"

using namespace std;

Figure::Figure(Colour colour, FigureType figureType){
    this -> colour = colour;
    this -> figureType = figureType;
    this -> value = figureType;
    this -> alive = true;
    this -> attacked = false;
    this -> fixedToProtectKing = false;

}