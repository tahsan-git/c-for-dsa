#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,score=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='V'){score += 5;}
        else if(s[i]=='W'){score += 2;}
        else if(s[i]=='X' && i<s.size()-1){s.erase(i+1,1);}
        else if(s[i]=='Y' && i<s.size()-3){
            char temp = s[i+1];
            s.erase(i+1,1);
            s.push_back(temp);
            }
        else if(s[i]=='Z' && i<s.size()-2){
            if(s[i+1]=='V'){
                score=score/5;
                s.erase(i+1,1);
                }
            else if(s[i+1]=='W'){
                score=score/2;
                s.erase(i+1,1);
            }

        }
    }
    cout<<score<<endl;
    return 0;
}