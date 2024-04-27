#include "../headers/king.h"

king::king(pair<int, int> s = make_pair(-1, -1)): piece(KING, s){

}

vector< pair<int, int> > king::moveChoice(){
    vector< pair<int, int> > vec;
    pair<int, int> s = getpos();

    if(validPos(make_pair(s.first, s.second+1))){
        vec.push_back(make_pair(s.first, s.second+1));
    }
    if(validPos(make_pair(s.first+1, s.second+1))){
        vec.push_back(make_pair(s.first+1, s.second+1));
    }

    if(validPos(make_pair(s.first+1, s.second))){
        vec.push_back(make_pair(s.first+1, s.second));
    }
    if(validPos(make_pair(s.first+1, s.second-1))){
        vec.push_back(make_pair(s.first+1, s.second-1));
    }

    if(validPos(make_pair(s.first, s.second-1))){
        vec.push_back(make_pair(s.first, s.second-1));
    }
    if(validPos(make_pair(s.first-1, s.second-1))){
        vec.push_back(make_pair(s.first-1, s.second-1));
    }

    if(validPos(make_pair(s.first-1, s.second))){
        vec.push_back(make_pair(s.first-1, s.second));
    }
    if(validPos(make_pair(s.first-1, s.second+1))){
        vec.push_back(make_pair(s.first-1, s.second+1));
    }


    for(int i=0; i<vec.size(); i++){
        cout << "Pos: " << vec[i].first << "," << vec[i].second << endl;
    }

    return vec;
}

void king::printa(){
    cout << "Piecenum: " << getpiece() << endl;

    cout << "Position: " << getpos().first << "," << getpos().second << endl; 


}