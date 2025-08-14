#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5));
    int row,col;
    for(int i=0;i<5;i++){
        cin>>matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
        for(int j=0;j<5;j++){
            if(matrix[i][j] == 1){
                row=i;
                col=j;
            }
        }
    }
    cout<<(abs(row-2) + abs(col-2)) << endl;
    return 0;
}