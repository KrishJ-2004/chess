#include "../headers/piece.h"

piece::piece(piecenum pn, pair<int, int> s){
    piecename = pn;
    position = s;
}

int piece::getpiece(){
    return piecename;
}

void piece::setpiece(piecenum pn){
    piecename = pn;
}

pair<int, int> piece::getpos(){
    return position;
}

void piece::setpos(pair<int, int> s){
    position = s;
}

