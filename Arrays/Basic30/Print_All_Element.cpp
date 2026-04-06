// 1. Print all elements of an array
#include <iostream>
using namespace std;
void print(int arr[], int n){
    cout << "idx: ";
    for(int i = 0; i < n; i++){
        cout << i << " |";
    }
    cout <<"\nEle: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " |";
    }
}
int main (){
    int Arr[] = {2, 4, 5, 6, 7, 8, 9};
    int n = sizeof(Arr)/ sizeof(Arr[0]);
    print(Arr, n);
    return 0;
}