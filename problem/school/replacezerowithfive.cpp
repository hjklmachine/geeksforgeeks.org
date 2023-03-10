#include <iostream>
#include <cmath>
using namespace std;

int convertFive(int n){
  int result = 0;
  int i = 0;
  while(n != 0){
    int single = n % 10;
    if(single == 0){
      single = 5;
    }
    result += pow(10,i) * single;
    i++;
    n/=10;
  }
  return result;
}


int main(){
  int ans1 = convertFive(1004);
  cout << ans1 << endl;

}
