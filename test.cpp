#include <iostream>
#include "cfg.h"

using namespace std;

CFG cfg("params.conf");

int main(){
    cout << cfg.p["NUMBER_LR"] << endl;
    cout << cfg.p["AUTOR"] << endl;
    cout << cfg.p["ZADANIE"] << endl;
    cout << cfg.p["TYPE_OF_INPUT"] << endl;
    cout << cfg.p["KOL_ELEMENTOV"] << endl;
    cout << cfg.p["CONGRATULATIONS"] << endl;
    return 0;
}
