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

bool piece::validPos(pair<int, int> s){
    if(s.first <= 7 && s.first >= 0 && s.second <= 7 && s.second >= 0){
        return true;
    }
    else{
        return false;
    }
}
