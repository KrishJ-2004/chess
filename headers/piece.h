#include <iostream>
#include <vector>

#pragma once

using namespace std;

enum piecenum
{
    PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING
};

class piece 
{
private:
    piecenum piecename;
    pair<int, int> position;

public:
    piece(piecenum pn, pair<int, int> s);

    int getpiece();
    void setpiece(piecenum pn);

    pair<int, int> getpos();
    void setpos(pair<int, int> s);

    virtual vector< pair<int, int> > moveChoice() = 0;

};
