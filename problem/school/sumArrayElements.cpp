#include <iostream>

using namespace std;

int sumElement(int arr[], int n){
  int sum = 0;
  for(int i = 0;i < n;i++){
    sum+= arr[i];
  }
  return sum;
}

int main(){

  int n = 3;
  int arr[n] = {1, 2, 3, 4};

  int result =  sumElement(arr, n);

  cout << result << endl;

}
