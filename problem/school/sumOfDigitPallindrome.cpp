#include <iostream>

using namespace std;

int isDigitSumPalindrome(int N){
  int sum = 0;
  int sum_value = N;
  while(sum_value != 0){
    int single = sum_value % 10;
    sum+= single;
    sum_value /= 10;
  }
  
  int reverse_num = 0;
  int check_sum = sum;
  while(sum != 0){
    int single_sum = sum % 10;
    reverse_num = single_sum + reverse_num * 10;
    sum /= 10;
  }

  return reverse_num == check_sum ? 1 : 0;
}

int main(){
  int N = 98;
  int result = isDigitSumPalindrome(N);
  cout << result << endl;
}
