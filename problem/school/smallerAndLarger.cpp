#include <iostream>
#include <vector>

using namespace std;

vector<int> getMoreAndLess(int arr[], int n, int x){
  int less = 0;
  int more = 0;
  for(int i = 0; i< n;i++){
    if(arr[i] == x){
      less++;
      more++;
    }else{
      x>=arr[i] ? less++:more++;
    }
  }
  return {less, more};
}


int main(){
  int N = 7;
  int X =0;
  int arr[N] = {1, 2, 8, 10, 11, 12, 19};
  vector<int> result =  getMoreAndLess(arr,N, X);
  cout << result[0] << endl;
  cout << result[1] << endl;
}
