#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n){
    int i = 0;
    int j = n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;

    }

}

// creating swap function without using swap()
// given a = 10;
// given b = 20;
// create another variable named "temp";
// now temp = a;
// a = b;
// b = temp;

// question :- how to swap with (xor)?
// swaping by using + and - ?


int main(){
    int arr[] = {3,5,6,8,9};
    ReverseArray(arr, 5);

    //print the array
    for(int i; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}