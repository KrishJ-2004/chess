#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class knight: public piece
{
private:


public:
    knight(piecenum pn, pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};