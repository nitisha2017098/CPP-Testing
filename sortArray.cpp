#include <iostream>
using namespace std;

// sorting an array of 0's , 1's and 2's 

void sortArray(int arr[], int n){
    int one = 0, two = 0, zero = 0;

    // count all number
    for (int i=0;i<n; i++){
        if(arr[i] == 0)
            zero++;
        else if(arr[i] == 1)
            one++;
        else
            two++;
    }

    int i = 0;
    // put zero
    while(zero--){
        arr[i] == 0;
        i++;
    }

    // put one
    while(one--){
        arr[i] == 1;
        i++;
    }

    while(two--){
        arr[i] == 2;
        i++;
    }


}





int main(){

    int arr[] = {0,1,2,2,1,0,0,1,2,2,1};
    sortArray(arr,11);

    // print array
    for (int i=0;i<11;i++){
        cout << arr[i] << " ";

    }

    cout << endl;


    return 0;
}