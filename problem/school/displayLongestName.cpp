#include <iostream>

using namespace std;

string longest(string names[], int n){
  int max_size = names[0].size();
  string max_name  = names[0];
  for(int i = 1; i < n; i++){
    if(names[i].size() > max_size){
      max_size = names[i].size();
      max_name = names[i];
    }
  }
  return max_name;
}

int main(){
int n = 5;
string names[n] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" };

string result =  longest(names, n);

cout << result << endl;

}
