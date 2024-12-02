#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string word;
        int count = 0;
        while(word.find("map")> -1||word.find("pie")> -1){
            if(word.find("map")!= -1){
                word.erase(word.find("map"),3);
                count++;
            }
            if(word.find("pie")!= -1){
                word.erase(word.find("pie"),3);
                count++;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}