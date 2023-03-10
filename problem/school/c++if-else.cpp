#include <iostream>

using namespace std;

string compareFive(int n){
  if(n > 5){
    return "Greater than 5";
  } else if(n < 5){
    return "Less than 5";
  } else { 
    return "Equal to 5";
  }

}

int main(){
  int x = 6;
  int y = 4;
  int z = 5;

  cout << compareFive(x) << endl;
  cout << compareFive(y) << endl;
  cout << compareFive(z) << endl;

}
