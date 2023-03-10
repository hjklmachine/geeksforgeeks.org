#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findElements(int a[], int n){
 vector<int> storage(a, a+ n);
  sort(storage.begin(), storage.end());
  storage.erase(storage.end()-2, storage.end());
  return storage;
}

int main(){

int size = 5;
int arr [size] = {2, 8, 7, 1, 5};

vector<int> result = findElements(arr, size);
for(int i = 0; i < result.size(); i++){
  cout << result[i] << " ";
}

}
