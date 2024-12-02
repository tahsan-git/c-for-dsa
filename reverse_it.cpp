#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char section;
    int id,math_marks,eng_marks;
};
bool cmp(Student l,Student r){
    if(l.eng_marks > r.eng_marks){
        return true;
    }
    else if(l.eng_marks == r.eng_marks){
        // return l.math_marks>r.math_marks;
        if(l.math_marks>r.math_marks){
            return true;
        }
        else if(l.math_marks==r.math_marks){
            return l.id<r.id;
        }
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].name <<' '<<arr[i].cls<<' '<<arr[i].section<<' '<<arr[i].id<<' '<< arr[i].math_marks<<' '<<arr[i].eng_marks<<endl;
    }
    return 0;
}