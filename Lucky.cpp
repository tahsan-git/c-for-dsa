#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string ticket;
    cin>>ticket;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0,j=3;i<3,j<6;i++,j++){
        sum1 += ticket[i]-'0';
        //cout<<sum1<<' ';
        sum2 += ticket[j]-'0';
        //cout<<sum2<<' ';

    }
    if(sum1==sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}