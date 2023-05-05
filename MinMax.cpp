#include <iostream>
#include <limits.h>
using namespace std;


// FInding maximum value of an array
int getMaxfromArray(int arr[], int n){
    int Maxi = INT32_MIN ;

    for(int i; i<n ; i++){
        Maxi = max(Maxi, arr[i]);
    }
    
    return Maxi;

}


int getMinfromArray(int arr[], int n){
    int Mini = INT32_MAX ;
    for(int i; i<n; i++){
        Mini = min(Mini , arr[i]);
    }

    return Mini;

}

int main(){
    int arr[] = {3,4,5,6,7,8,9};

    cout << "maximum value is :" <<  getMaxfromArray(arr,7)  << "  " << endl;
    cout << "minimun value is :" << getMinfromArray(arr, 7) << " ";

    return 0;
}