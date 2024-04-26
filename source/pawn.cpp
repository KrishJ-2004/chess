#include "../headers/pawn.h"

pawn::pawn(pair<int, int> s = make_pair(-1, -1)): piece(PAWN, s){

}

vector< pair<int, int> > pawn::moveChoice(){
    vector< pair<int, int> > vec;
    pair<int, int> s = getpos();

    if(validPos({s.first, s.second+1})){
        vec.push_back({s.first, s.second + 1});
    }

    for(int i=0; i<vec.size(); i++){
        cout << "Pos: " << vec[i].first << "," << vec[i].second << endl;
    }

    return vec;
}

void pawn::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}