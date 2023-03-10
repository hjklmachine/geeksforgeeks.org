#include <iostream>
#include <vector>

using namespace std;

string modify(string s){

  vector<int> storage;
  for(int i = 0; i < s.size();i++){
    if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ){
      storage.push_back(i);
    }
  }
  for(int i = 0; i < storage.size()/2;i++){
    int temp = s[storage[i]];
    s[storage[i]] = s[storage[storage.size()-1-i]];
    s[storage[storage.size()-1-i]] = temp;
  }
  return s;
}

int main(){

string result = modify("bcoejuvpvaboyg");
cout << result << endl;
}
