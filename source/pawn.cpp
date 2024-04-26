#include "../headers/pawn.h"

pawn::pawn(piecenum pn = PAWN, pair<int, int> s = make_pair(-1, -1)): piece(pn, s){

}

vector< pair<int, int> > pawn::moveChoice(){
    vector< pair<int, int> > vec;

    if(getpos().second < 7){
        vec.push_back(make_pair(getpos().first, getpos().second + 1));
    }

    for(int i=0; i<vec.size(); i++){
        cout << "Pos: " << vec[i].first << "," << vec[i].second << endl;
    }
}

void pawn::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}