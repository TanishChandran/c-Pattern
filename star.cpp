#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row*2-2*i;j++)
            cout<<" ";
        for(int j=1;j<=(i*2)-1;j++)
            cout<<"*"<<" ";    
        cout<<"\n";
    }
    for(int i=row;i>0;i--){
        for(int j=1;j<=row*2-2*i;j++)
            cout<<" ";
        for(int j=1;j<=(i*2)-1;j++)
            cout<<"*"<<" ";    
        cout<<"\n";
    }

    return 0;
}