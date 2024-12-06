#include <bits/stdc++.h>
using namespace std;
void invertPyramids(int row,int currentRow){
    //base case
    if(currentRow>row){
        return;
    }
    //print space
    for(int i=0;i<currentRow-1;i++){
        cout<<' ';
    }
    //print star
    for(int i=0;i<2*(row-currentRow+1)-1;i++){
        cout<<'*';
    }
    cout<<endl;
    //recursive call
    invertPyramids(row,currentRow+1);
}
int main(){
    int row;
    cin>>row;
    invertPyramids(row,1);
    
    return 0;
}