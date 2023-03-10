#include <iostream>

using namespace std;

void printTillN(int N){
  if(N!= 0){

    printTillN(N-1);
    cout << N << " ";
  }
}
int main(){

 printTillN(10);
}
