#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        cout<<c;
        for(int i=1;i<n;i++){
            cout<<' '<<c;
        }
        cout<<endl;
    }
    return 0;
}