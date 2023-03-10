#include <iostream>

using namespace std;

void print(int ar[], int n){
  for(int i = 0; i < n; i+=2){
    cout << ar[i]<< " ";
  }
}

int main(){
  int n = 4;
  int arr[n] = {1, 2, 3, 4};

  print(arr, n);

}
