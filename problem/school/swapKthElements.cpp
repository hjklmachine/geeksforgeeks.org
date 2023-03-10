#include <iostream>

using namespace std;

void swapKth(int *arr, int n, int k){

  int temp = arr[k-1];
  arr[k-1] = arr[n-k];
  arr[n-k] = temp;
}

int main(){
  int n = 8;
  int k = 3;
  int arr [n] = {1, 2, 3, 4, 5, 6, 7, 8};
  swapKth(arr, n, k);

  for(int i = 0; i < 8; i++){
    cout << arr[i] << " ";
  }

}
