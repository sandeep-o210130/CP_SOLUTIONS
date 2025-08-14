#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int ans =INT_MAX;
    ans = min(ans, abs(x1-x2) +abs(x3-x1));
    ans = min(ans, abs(x2-x3) +abs(x2-x1));
    ans = min(ans, abs(x3-x1) +abs(x3-x2));
    cout<<ans<<endl;
}