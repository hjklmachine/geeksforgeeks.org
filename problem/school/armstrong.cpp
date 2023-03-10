#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

string armstrongNumber(int n){

  int sum = 0;
  int value = n;
  vector<int> storage;

  while(n != 0){
    int single = n % 10;
     sum += (single * single * single);
     n/=10;
  }
  cout << sum << ":" << value << endl;
  return sum == value? "Yes" : "No";
}


int main(){
  int x1 = 153;
  int x2 = 370;

  cout << armstrongNumber(x1) << endl;
  cout << armstrongNumber(x2) << endl;
}
