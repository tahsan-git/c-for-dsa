#include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    int id;
    char name[100];
    char section;
    int mark; 
};


int main()
{
    // Write your code here
    int t;
    cin>>t;
    while(t--){
       Student first;
       Student second;
       Student third;
        cin>>first.id>>first.name>>first.section>>first.mark;
        cin>>second.id>>second.name>>second.section>>second.mark;
        cin>>third.id>>third.name>>third.section>>third.mark;
        cout<<first.mark<<" "<<second.mark<<" "<<third.mark<<endl;
    }

    return 0;
}
