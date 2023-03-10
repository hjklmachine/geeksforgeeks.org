#include <iostream>

using namespace std;

string revStr(string S){
  string result;
  for(int i = S.size()-1; i >= 0; i--){
    result += S[i];
  }
  return result;
}

int main()
{
  cout << revStr("GeeksforGeeks") << endl;
}

