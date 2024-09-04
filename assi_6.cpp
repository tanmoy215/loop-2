#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cout<<"enter n : ";
    cin>>n;
    string str = to_string(n);
    reverse(str.begin(),str.end());
    int m = stoi(str);
    cout<<"final ans is : "<<n+m<<endl;
    return 0;
}