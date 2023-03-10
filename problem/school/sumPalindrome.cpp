#include <iostream>

using namespace std;
int reversed(long long value){
  long long result = 0;
  while(value != 0){
     int single = value % 10;
     result = result * 10 + single;
     value /= 10;
  }
  return result;
}

long long isSumPalindrome(long long n){
    // code here
     int value = n;
   for(int i = 0; i <= 5;i++){
      long long reversed_n = reversed(value);
      
      if(value == reversed(value)){
         return value;
      } else{
        value += reversed_n; 
      }
   }
   return -1;
}
int main(){}
