#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"Final ans is : "<<fact<<endl;
    return 0;
}