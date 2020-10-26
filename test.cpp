#include <iostream>
#include "cfg.h"

using namespace std;

CFG cfg("params.conf");

void bubble_sort(int size, Deq_List_One &q1, Deq_List_One &q2){
    int eq1, eq2;
    for(int i = 0; i < size; i++){
        eq1 = q2.Pop_Left();
        for(int j = i; j < size-1; j++){
            eq2 = q2.Pop_Left();
            if(eq1 > eq2){
                swap(eq1, eq2);
            }
            q1.Push_Left(eq2);
        }
        for(int j = i; j < size-1; j++){
            q2.Push_Right(q1.Pop_Left());
        }
        q1.Push_Right(eq1);        
    }
}

int main(){
    cout << cfg.p["NUMBER_LR"] << endl;
    cout << cfg.p["AUTOR"] << endl;
    cout << cfg.p["ZADANIE"] << endl;
    cout << cfg.p["TYPE_OF_INPUT"] << endl;
    cout << cfg.p["KOL_ELEMENTOV"] << endl;
    cout << cfg.p["CONGRATULATIONS"] << endl;
    return 0;
}
