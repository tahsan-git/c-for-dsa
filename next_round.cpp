#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int score[n];
    int perticipate = 0;
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    k = score[k-1];
    for(int i=0;i<n;i++){
        if(score[i]>=k && score[i]>0){
            perticipate++;
        }
    }
    cout<<perticipate<<endl;
    return 0;
}