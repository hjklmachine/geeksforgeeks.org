#include <iostream>
#include <cmath>

using namespace std;

long long int reverse_digit(long long int n){
  long long int result = 0;
  while(n != 0){
    int single = n % 10;
    result = single + result * 10;
    n/=10;
  }

  return result;

}

int main(){
  long long int result = reverse_digit(122);
  cout << result << endl;
}
