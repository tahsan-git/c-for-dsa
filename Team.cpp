#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}