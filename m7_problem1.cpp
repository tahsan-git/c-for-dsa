#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    // Student(stirng name,int roll,int marks){
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    //}

};
bool cmp(Student l,Student r){
    return l.marks==r.marks?l.roll<r.roll:l.marks>r.marks;
}
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
    //sorting part;
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<' '<<arr[i].marks<< ' '<< arr[i].roll<<endl;
    }

    
    return 0;
}