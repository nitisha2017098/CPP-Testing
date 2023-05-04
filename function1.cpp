#include <iostream>
using namespace std;

void fun1(int n ){
    cout << "fun1 integer" << n << endl;
    
}

void fun2(int m ){
    cout << "fun2 integer " << m << endl;
    m++;
    fun1(m);
}

void fun3(int k){
    cout << "fun3 integer" << k << endl;
    k++;
    fun2(k);
}

void printEven(int n){
    for (int i = 2; i<= n ; i = i+2){
        cout << i << " " << endl;
    }
    
}

void PrintSquare(int n){
    for (int i = 1; i<=n; i++ ){
        cout << i*i << " ";
        
    }
} 

int getfactorial(int n ){
    int ans = 1;

    for (int i = n; i>=1; i--){
        ans = ans*i;

    }
    return ans;
}

int main(){
    int n = 21;

    int fact = getfactorial(4);
    cout << fact << endl;
    //fun3(n);
    //cout<< "again in main function"<< n << endl;
    //printEven(n);
    //PrintSquare(n);
    

    return 0;
}