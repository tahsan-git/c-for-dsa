#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string x;
    cin>>x;
    stringstream word(s);
    string cmp;
    int count = 0;
    while(word>>cmp){
        if(cmp==x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}