#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int row;
    cin>>row;
    
    for(int i=1;i<=3;i++){
        for(int j=1;j<=row;j++)
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<"\n";
    }

    return 0;
}