#include <iostream>
using namespace std;

void PrintNumber(int num){
    num = 10;
    cout << "printing number" << num << endl;

}



int main(){

    int num = 5;
    //function calling
    PrintNumber(num);
    cout << "in main function" << num << endl;

    return 0;

}