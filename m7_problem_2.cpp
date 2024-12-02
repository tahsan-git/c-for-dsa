#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    //reverse(a,a+n);
    //cout<<a[4].name;
    for(int i=n-1;i>=0;i--){
        Student temp = a[i];
        cout<<temp.name<<' '<<temp.roll<<' '<<temp.marks<<endl;
    }
    
    return 0;
}