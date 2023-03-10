#include <iostream>

using namespace std;

long long seriesSum(int n){

  return static_cast<long long>(n) * (static_cast<long long>(n) + 1) / 2;
}


int main(){
  long long result = seriesSum(5);
  cout << result << endl;

}
