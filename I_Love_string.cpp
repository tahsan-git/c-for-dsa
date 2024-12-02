#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string S;
        string T;
        string result;
        cin>>S>>T;
        for(int i=0;i<max(S.size(),T.size());i++){
            if(i<S.size()){
                result+=S[i];
            }
            if(i<T.size()){
                result+=T[i];
            }
            
        }
        cout<<result<<endl;

    }
    return 0;
}