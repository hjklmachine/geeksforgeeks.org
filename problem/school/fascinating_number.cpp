#include <iostream>
#include <algorithm>

using namespace std;

bool fascinating(int n ){
string combination_st = to_string(n);

   if(to_string(n).size() > 2){
     combination_st += to_string(n * 2) + to_string(n * 3);     
  }else {
      return false;
  }
  
  int count = 0;
  for(int i = 1; i <= 9; i++){
      for(int j = 0; j < combination_st.size();j++){
        if(i == static_cast<int>(combination_st[j])-48){
            count ++;
            break;
        }
   }
  }
  return count == 9 && combination_st.size() == 9 ? true: false;
}
bool fascinatingA(int n){
  string combination_st = to_string(n);
  if(to_string(n).size() > 2){
   combination_st += to_string(n*2) + to_string(n*3);
 }
 sort(combination_st.begin(), combination_st.end());

 return combination_st == "123456789"? true: false;
}
int main(){}
