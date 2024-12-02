#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool barlanese = false;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!='a'&& s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='e' || s[i]!='n'){
            char temp = s[i+1];
            if(temp == 'a' || temp == 'i' || temp == 'u' || temp == 'o' || temp == 'e' ){
                barlanese = true;
            }
            if(s[i]=='n' && i!=0 && (temp != 'a' || temp != 'i' || temp != 'u' || temp != 'o' || temp != 'e' )){
                barlanese = true;
            }

    }
    (barlanese)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}
}