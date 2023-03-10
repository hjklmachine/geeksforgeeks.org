#include <iostream>
#include <vector>

using namespace std;

vector<float> streamAvg(int arr[], int n){

 vector<float> result; 

 for(int i = 0; i < n ;i++){
   int sum = 0;
   int count = 0;
   for(int j = 0; j <= i;j++){
     sum+=arr[j];
     count++;
   }
   result.push_back(static_cast<float>(sum)/count);
 }
 return result;
}
vector<float> streamAvgA(int arr[], int n){
   vector<float>result;
   float avg;
   float sum = 0;  
 
  for(int i = 0; i < n; i++){
    sum += arr[i];
    avg = sum / (i+1);
    result.push_back(avg);  
  }
 return result;
}
int main(){

}
