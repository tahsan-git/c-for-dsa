#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream x(s);
    string cmp;
    bool flag = true;
    while(x>>cmp){
        if(cmp=="Jessica"){
            flag = false;
            break;
        }
    }
    (flag)?cout<<"NO"<<endl:cout<<"YES"<<endl;

    return 0;
}