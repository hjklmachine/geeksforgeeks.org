#include <iostream>

using namespace std;
    string delAlternate(string S) {
      string new_s;
      for(int i =0; i < S.size();i++){
        if(i % 2 ==0){
          new_s += S[i];
        }
      }
      return new_s;
    }

int main(){}
