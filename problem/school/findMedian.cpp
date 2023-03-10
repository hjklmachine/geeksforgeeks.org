#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_median(vector<int> v){
  sort(v.begin(), v.end());

  if(v.size()%2 == 0){
    return (v[v.size()/2] + v[(v.size()/2)-1]) / 2;
  }else{
    return v[v.size()/2];
  }
}


int main(){
  vector<int> arr = {90,100, 78, 89, 67};

  int result = find_median(arr);
  cout << result << endl;

  vector<int> arr_2 = {56,67,30,79};
  int result2 = find_median(arr_2);
  cout << result2 << endl;

}
