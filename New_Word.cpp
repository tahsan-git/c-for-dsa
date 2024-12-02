#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int arr[5]={0};
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='E' || s[i]=='e'){
            //0th index
            arr[0]++;
        }
        else if(s[i]=='G' || s[i]=='g'){
            //0th index
            arr[1]++;
        }
        else if(s[i]=='Y' || s[i]=='y'){
            //0th index
            arr[2]++;
        }
        else if(s[i]=='P' || s[i]=='p'){
            //0th index
            arr[3]++;
        }
        else if(s[i]=='T' || s[i]=='t'){
            //0th index
            arr[4]++;
        }
 
    }
    int minimum = INT_MAX;
    for(int i=0;i<5;i++){
        minimum = min(minimum,arr[i]);
    }
    cout<<minimum<<endl;


    return 0;
}