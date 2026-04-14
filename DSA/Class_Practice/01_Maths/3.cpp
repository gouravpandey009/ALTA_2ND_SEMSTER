#include<iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 18;

    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout <<"GCD = " << a;
}