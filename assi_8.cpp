#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int a=1;
    int b = 1;
    int nt = a+b;
    cout<<a<<" "<<b<<" ";
    int i=2;
    while(i<n){
        cout<<nt<<" ";
        a=b;
        b=nt;
        nt=a+b;
        i++;
    }
    return 0;
}