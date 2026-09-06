#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
int idx;
cin>>idx;

for(int i = idx;i<n;i++){
    a[i] = a[i+1];
}
n--;
for(int i = 0;i<n;i++){
    cout<<a[i]<<endl;
}




}
