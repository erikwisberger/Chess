#ifndef FIGURE_HPP
#define FIGURE_HPP


using namespace std;


enum Colour {WHITE, BLACK};
enum FigureType {PAWN=1, KNIGHT=3, BISHOP=3, ROOK=5, QUEEN=9, KING=1000};


class Figure{

    public:
        Figure(Colour colour, FigureType figureType);

        Colour getColour();
        FigureType getFigureType();
        short getValue();
        bool getAlive();
        bool getAttacked();
        bool getFixedToProtectKing();

        void kill();
        void setAttack(bool attacked);
        void setFixedToProtectKing(bool fixedToProtectKing);

        void print();

    
    private:
        Colour colour;
        FigureType figureType;
        int value;
        bool alive;
        bool attacked;
        bool fixedToProtectKing;

};


#endif