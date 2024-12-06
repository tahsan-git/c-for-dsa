#include <bits/stdc++.h>
using namespace std;
void pyramids(int row,int currentRow){
    if(currentRow>row){
        return;
    }
    //space print
    for(int i=0;i<row-currentRow;i++){
        cout<<' ';
    }
    //star print;
    for(int i=0;i<2*currentRow -1;i++){
        cout<<'*';
    }
    cout<<endl;
    //recursive part
    pyramids(row,currentRow+1); 

}
int main(){
    pyramids(3,1);
    
    return 0;
}