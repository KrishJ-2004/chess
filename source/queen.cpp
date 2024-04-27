#include "../headers/queen.h"

queen::queen(pair<int, int> s = make_pair(-1, -1)): piece(QUEEN, s){

}

vector< pair<int, int> > queen::moveChoice(){
    vector< pair<int, int> > vec;
    pair<int, int> s = getpos();
    int diff = s.first - s.second;
    int sum = s.first + s.second;

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

    return vec;
}

void queen::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}