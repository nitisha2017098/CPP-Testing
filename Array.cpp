#include <iostream>
using namespace std;



void printarray(int arr[], int size){
    for (int i = 0; i < size ; i++){
        // accesing array element
        cout << arr[i] << " ";
    }

}

void utilfunction(int arr[], int size){
    arr[0] = 23;
    cout << "printing in util function" << endl;
    printarray(arr , 3);
}
int main(){
    // I am niti
    // array creation 
    //int arr[5];
    //int arr1[5] = {1,2,3,4,5};
    // array 
    //int arr[5] = {3,5,6,9,12};
    int arr[3]= {5, 8, 19};
    cout << "prinitng in main function" << endl;
    printarray(arr, 3);



    // function call
    //printarray(arr, 5);

    return 0;
}

