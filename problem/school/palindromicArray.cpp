#include <iostream>

using namespace std;

int PalindromicArray(int a[], int n){
  int i = 0;
  while(i < n){
    string a_single = to_string(a[i]);
    for(int j = 0; j <= a_single.size()/2;j++){

      cout << a_single[j] <<":" << a_single[a_single.size()-j-1] << endl;
      if(a_single[j] != a_single[a_single.size()-1]){
        return 0;
      }
    }
    i++;
  }
  return 1;
}

int main(){
int size = 1;
int arr[size] = {5005};
int result = PalindromicArray(arr, size);
cout << result << endl;

}
