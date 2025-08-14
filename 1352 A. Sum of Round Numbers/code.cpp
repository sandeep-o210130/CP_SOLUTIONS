#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back(x);
    }
    for(auto i:ans){
        vector<int> roundNumbers;
        int c=0;
        while(i>0){
            int r =i%10;
            if(r!=0){
                int roundNumber = r*(int) pow(10,c);
                roundNumbers.push_back(roundNumber);
            }
            c++;
            i/=10;
        }
        cout<<roundNumbers.size()<<endl;
        for(auto j:roundNumbers)
            cout<<j<<" ";
        cout<<endl;
    }
}