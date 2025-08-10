// you can use npos or -1 for checking exist or not that string part what we want in main string


#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,x=0;
    cin>>n;
    string statement;
    while(n--){
        cin>>statement;
        if(statement.find("++")!=-1)
            x++;
        else
            x--;
    }
    cout<<x<<endl;
    return 0;
}
