#include <iostream>

using namespace std;

int countOfElements(int arr[], int n, int x){
  int count = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] > x){
      continue;
    }
    count ++;
  }
  return count;
}

int main(){

}
