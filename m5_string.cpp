#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    name = "Tahsan";
    //cout<<name.size()<<endl;
    for(string::iterator i=name.begin();i<name.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}