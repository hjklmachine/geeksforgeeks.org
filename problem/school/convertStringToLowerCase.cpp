#include <iostream>

using namespace std;

string toLower(string s){
  string result;
  for(int i = 0; i < s.size(); i++){
    isupper(s[i])?result += tolower(s[i]):result += s[i];
  }
  return result;
}

int main(){

string result =  toLower("ABCddE");
cout << result << endl;
}
