#include <iostream>

using namespace std;

bool IsPerfect(int a[], int n){
  for(int i= 0 ; i < n/2;i++){
    cout << a[i] << ":" << a[n-i-1] << endl;
    if(a[i] != a[n-i-1]){
      return false;
    }
  }
  return true;
}


int main(){
  int size = 6;
  int arr[size] = {11,12,14,12,19,11};
  bool result = IsPerfect(arr, size);
  cout << result << endl;
}
