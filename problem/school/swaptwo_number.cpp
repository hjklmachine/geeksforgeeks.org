#include <iostream>

using namespace std;

pair<int, int> get(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  return {a, b};
}

int main()
{

}
