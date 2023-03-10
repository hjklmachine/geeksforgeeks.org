#include <iostream>

using namespace std;

int findsingle(int N, int arr[]){
  for(int i = 0; i < N; i++){
    int flag = 0;
    for(int j = 0; j < N; j++){
      if(arr[i] == arr[j]){
        flag ++;
      }
    }
    if(flag == 1){
      return arr[i];
    }
  }
}

int main(){
  int size = 5;
  int arr[size] = {1, 2, 3, 2, 1};
  int result = findsingle(size, arr);
  cout << result;

}
