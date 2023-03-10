#include <iostream>
#include <vector>

using namespace std;

vector<int> findIndex(int a[], int n, int key){
  vector<int> storage;

  for(int i = 0; i < n; i++){
    if(a[i] == key){
      storage.push_back(i);
      break;
    }
  }

  for(int i = n; i > 0; i--){
    if(a[i] == key){
      storage.push_back(i);
      break;
    }
  }

  if(storage.size() == 0){
    storage.push_back(-1);
    storage.push_back(-1);
  }
  else if(storage.size() == 1){
    storage.push_back(storage[0]);
  }

  return storage;
}

int main(){
  int N = 6;
  int Key = 5;
  int arr [N] = {1, 2, 3, 4, 5, 5};
  vector<int> result =  findIndex(arr, N, Key);
  for(int i = 0; i < result.size();i++){
    cout << result[i] << " ";
  }
  cout << endl;

}
