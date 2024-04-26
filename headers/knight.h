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
    knight(pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};