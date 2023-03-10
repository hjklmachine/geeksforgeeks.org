#include <iostream>

using namespace std;
string is_palindrome(int n){

  int original = n;
  int reverse  = 0;
  while(n != 0){
    int single = n % 10;
    reverse = single + reverse * 10 ;
    n /= 10;
  }

  /* cout << original << endl;
  cout << reverse << endl; */

  return (original == reverse)?"Yes" : "No";
}

int main(){
  int x1 = 5555;
  string result = is_palindrome(x1);
  cout << result << endl;
}
