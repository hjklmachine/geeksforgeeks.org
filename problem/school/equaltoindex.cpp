#include <iostream>
#include <vector>


using namespace std;

vector<int> valueEqualToIndex(int arr[], int n){
  vector<int> storage;
  for(int i = 0; i < n;i++){
    if(i+1 == arr[i]){
      storage.push_back(arr[i]);
    }
  }

  return storage;

}

int main(){

  int n = 5;
  int arr[n] = {15, 2, 45, 12, 7};

  vector<int> result = valueEqualToIndex(arr, n);

  for(int i = 0; i < result.size(); i++){
    cout << result[i] << endl;
  }
}


