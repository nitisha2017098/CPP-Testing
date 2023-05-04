#include <iostream>
using namespace std;

void printarray(int arr[], int size){
    for (int i = 0; i < size ; i++){
        // accesing array element
        cout << arr[i] << " ";
    }

}


int main(){
    // I am niti
    // array creation 
    //int arr[5];
    //int arr1[5] = {1,2,3,4,5};
    // array 
    int arr[5] = {3,5,6,9,12};

    // function call
    printarray(arr, 5);

    return 0;
}

