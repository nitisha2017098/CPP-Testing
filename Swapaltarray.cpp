#include <iostream>
using namespace std;

void SwapaltArray(int arr[], int n){
    int i = 0;

    while(i<n){

        if ( i+1 < n){
            
            swap(arr[i],arr[i+1]);
        }
        i = i+2;
    }
    
    
}




int main(){

    int arr[] = {2,4,3,5,7,9,6,8};
    //cout << "printing original array " << arr[4] << " ";
    
    SwapaltArray(arr,8);

    for(int i; i<8; i++){
        cout << arr << " ";
    }

    return 0;

}