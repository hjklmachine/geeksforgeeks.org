#include <iostream>

using namespace std;

int getSum(int a[], int n){
  int sum = 0;

  // return static_cast<double>(a[0]+ a[n-1]) /2.00 * n; // if there is a sequence
  for(int i = 0; i < n; i++){
    sum += a[i];
  }
  return sum;
}

int main(){
  int size = 4;
  int arr[size] = {1, 2, 3, 4};
  int result = getSum(arr, size);
  cout << result << endl;
}
