#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<row*2-2*i+1;j++)
            cout<<" ";
        if(row!=1){
            for(int j=i;j>1;j--)
            cout<<j<<" ";
        }    
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<"\n";
    }

    return 0;
}