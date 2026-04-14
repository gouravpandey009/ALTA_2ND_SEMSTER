//Max element

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {5 , 9 , 2 , 11 , 4};
    int maxVal = arr[0];

    for(int i = 1 ; i < 5 ; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    cout << maxVal;
}