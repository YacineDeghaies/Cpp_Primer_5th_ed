// #include <iostream> ist nicht nötig, da es bereits in Sales_item.h enthalten ist.
#include "Sales_item.h"



using namespace std;

int main(){

    Sales_item itemOne, itemTwo;
    cin >> itemOne >> itemTwo;
    if(itemOne.isbn() == itemTwo.isbn() )
        cout << itemOne+itemTwo<<endl;

    return 0;
}