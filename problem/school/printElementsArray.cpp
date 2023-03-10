#include <iostream>

using namespace std;

void printArray(int arr[], int n){
  for(int i = 0 ; i < n;i++){
    cout << arr[i] << " ";
  }
}

int main(){

  int size = 5;
  int arr[size] = {2,3,1,5,4};
  printArray(arr, size);

}
