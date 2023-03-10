#include <iostream>

using namespace std;

long long factorial(int value){
  if(value == 0){
    return 1;
  }else{
    return value * factorial(value - 1);
  }
}


long long nPr(int n, int r){
  return factorial(n) / factorial(n - r);


}

int main(){

}
