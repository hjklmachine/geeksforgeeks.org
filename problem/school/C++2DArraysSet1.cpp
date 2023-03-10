#include <iostream>
#include <vector>

using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n)
{
    if(n==0){
        return{{}};
    }
    vector<vector<int>> result(n,vector<int>(n));

    for(int i = 0; i < n;i++){
        vector<int> mini;
        for(int j = 0; j < n;j++){
             result[i][j] = a[j][i];
        }
    }
    return result;
}


int main(){}
