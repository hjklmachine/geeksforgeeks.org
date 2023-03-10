#include <iostream>

using namespace std;

int evenlyDivides(int N){
  int count = 0;
  int value = N;
  while(N != 0){
    int single = N % 10;
    if(single != 0 && value % single == 0){
      count ++;
    }
    N /= 10;
  }

  return count;

}

int main(){
  int result = evenlyDivides(23);
  int result2 = evenlyDivides(12);
  cout << result << endl;
  cout << result2 << endl;
}
