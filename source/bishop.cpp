#include "../headers/bishop.h"

bishop::bishop(piecenum pn = BISHOP, pair<int, int> s = make_pair(-1, -1)): piece(pn, s){

}

vector< pair<int, int> > bishop::moveChoice(){
    vector< pair<int, int> > vec;
    pair<int, int> s = getpos();
    int diff = s.first - s.second;
    int sum = s.first + s.second;

    for(int i=0; i<8; i++){
        if(validPos({i, i-diff})){
            vec.push_back({i, i-diff});
        }
    }

    for(int i=0; i<8; i++){
        if(validPos({i, sum-i})){
            vec.push_back({i, sum-i});
        }
    }

    for(int i=0; i<vec.size(); i++){
        cout << "Pos: " << vec[i].first << "," << vec[i].second << endl;
    }
}

void bishop::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}