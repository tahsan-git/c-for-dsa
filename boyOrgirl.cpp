#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    int freq[26]={0};
    for(int i=0;i<name.size();i++){
        freq[name[i]-'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>=1){
            count++;
        }
    }
    if(count%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}