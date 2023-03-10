#include <iostream>

using namespace std;

int gcd(int A, int B){
  if(B == 0){
    return A;
  }else{
    cout << B << endl;
    return gcd(B, A % B);
  }
}


int main(){
  int result = gcd(3, 6);
  cout << result << endl;

}
