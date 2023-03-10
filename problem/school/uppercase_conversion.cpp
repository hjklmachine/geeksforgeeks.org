#include <iostream>

using namespace std;

string transform(string s){
  s[0] = toupper(s[0]);
  for(int i = 1; i < s.size();i++){
    if(s[i] == ' '){
      s[i+1] = toupper(s[i+1]);
    }
  }
  return s;
}

string transformA(string s){
  string full_word = "";
  string word = "";

  for(int i = 0; i < s.size();i++){
    if(s[i] == ' '){
      full_word += word;
      full_word += ' ';
      word.clear();
    }
    else if (word.empty()){
      word += toupper(s[i]);
    }
    else {
      word += s[i];
    }
  }
  full_word += word;

  return full_word;
}




int main(){
  string result = transform("i love programming");
  string result2 = transformA("i love programming");
  cout << result << endl;
  cout << result2 << endl;
}

