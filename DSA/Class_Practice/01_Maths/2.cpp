#include<iostream>
using namespace std;

int main() {
    int n = 7;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }

        if(count == 2)
            cout << "Prime Number \n";
        else 
            cout << "No Prime \n";
    }
}