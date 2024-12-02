
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            count++;
        }
        else{
            count--;
        }

    }
    cout<<count<<endl;
    return 0;
}