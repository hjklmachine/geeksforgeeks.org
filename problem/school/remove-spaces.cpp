#include <iostream>

using namespace std;

string modify(string s){
  string result;
  for(int i = 0; i < s.size();i++){
    if(s[i] == ' '){
      continue;
    }
    result+= s[i];
  }
  return result;
  // s.erase(remove(s.begin(), s.end(), ' '), s.end());
}

int main(){

string result =  modify("geeks for geeks");
cout << result << endl;
}
