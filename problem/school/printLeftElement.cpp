#include <iostream>

using namespace std;

int leftElement(int a[], int n){
  sort(a, a+n);
  return n % 2 == 0? a[(n/2)-1] : a[n/2];
}

int main(){}
