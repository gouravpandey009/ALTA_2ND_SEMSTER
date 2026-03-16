#include<iostream>
using namespace std;

int main() {
    int arr[5] = {3 , 7 , 2 , 9 , 5};

    int max = arr[0];

    for(int i = 1 ; i <= 5 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "The biggest element is: " << max << endl;
}