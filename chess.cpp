#include "./headers/piece.h"
#include "./headers/pawn.h"

int main(){
    pair<int ,int> p = make_pair(2 , 4);
    pawn paf(PAWN, p);

    paf.printa();

    paf.moveChoice();

}

