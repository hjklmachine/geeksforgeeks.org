#include <iostream>

using namespace std;

void printPat(int n){
  for(int i = n; i >= 1; i--){
    for(int j = n; j >= 1;j--){
      for(int k = 1; k <= i;k++){
        cout << j << " ";
      }
    }
    cout << "$";
  }
}

int main(){
  int n = 3;
  printPat(n);

}
