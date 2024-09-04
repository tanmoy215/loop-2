#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cout<<"enter n : ";
     cin>>n;
     int sum = 0;
     while(n!=0){
        int rer = n%10;
         if(rer%2==0) sum+=rer;
        n/=10;
     }
     cout<<"Final ans is : "<<sum<<endl;
    return 0;
}