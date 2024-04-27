#include "../headers/rook.h"

rook::rook(pair<int, int> s = make_pair(-1, -1)): piece(ROOK, s){

}

vector< pair<int, int> > rook::moveChoice(){
    vector< pair<int, int> > vec;
    pair<int, int> s = getpos();

    for(int i=0; i<8; i++){
        if(validPos({s.first, i})){
            vec.push_back({s.first, i});
        }
    }

    for(int i=0; i<8; i++){
        if(validPos({i, s.second})){
            vec.push_back({i, s.second});
        }
    }

    for(int i=0; i<vec.size(); i++){
        cout << "Pos: " << vec[i].first << "," << vec[i].second << endl;
    }

    return vec;
}

void rook::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}