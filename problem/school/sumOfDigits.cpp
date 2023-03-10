#include <iostream>

using namespace std;

int sumOfDigits(int N){
  int sum = 0;
  while(N != 0){
    int single = N % 10;
    sum+=single;
    N/=10;
  }
  return sum;
}

int main(){}
