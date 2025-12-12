// #include <iostream> ist nicht nötig, da es bereits in Sales_item.h enthalten ist.
#include "Sales_item.h"



using namespace std;

int main(){
    Sales_item current_item;
    int cnt = 0;

    if(cin >> current_item){
        cnt++;
        Sales_item next_item;

        while(cin >> next_item){
            if(current_item.isbn() == next_item.isbn()){
                cnt++;
            }
            else {
                cout << "For isbn: "<<current_item.isbn() << " times: " << cnt<<endl;
                current_item = next_item;
                cnt = 1;
            }

            cout << "For isbn: "<<current_item.isbn() << " appeared " << cnt <<" final count."<<endl;
        }
    }

    return 0;

}