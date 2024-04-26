#include <iostream>
#include <set>
#include <vector>

#include "piece.h"

#pragma once

using namespace std;

class queen: public piece
{
private:


public:
    queen(pair<int, int> s);

    vector< pair<int, int> > moveChoice();

    void printa();
};