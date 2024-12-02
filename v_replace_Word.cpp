#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    while(1){

        int i = s.find("EGYPT");
    if(i<0){
        break;
    }
    else{
        s.replace(i,5," ");
    }

    }
    cout<<s<<endl;

    return 0;
}