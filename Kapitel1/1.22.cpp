// #include <iostream> muss nicht da es schon im Sales_item.h enthalten
#include "Sales_item.h" //header fiels


using namespace std;

int main(){

    Sales_item itemOne, itemTwo;
    cin >> itemOne >> itemTwo;
    if(itemOne.isbn() == itemTwo.isbn() )
        cout << itemOne+itemTwo<<endl;

    return 0;
}