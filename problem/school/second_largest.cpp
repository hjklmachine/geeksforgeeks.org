#include <iostream>

using namespace std;

int print2largest(  int arr[], int n){

  int second_largest = -1;
  int largest = arr[0];

  for(int i = 1; i < n;i++){
    if(arr[i] > largest){
      second_largest = largest;
      largest = arr[i];
    }
    else if(arr[i] > second_largest && arr[i] < largest){
      second_largest = arr[i];
    }
  }

  return second_largest;
}

int main(){
  int n = 6;
  int arr[n]= {12, 35, 1, 10, 34, 1};

  int result = print2largest(arr, 6);
  cout << result << endl;

}
