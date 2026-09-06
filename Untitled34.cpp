#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i =0;i<n;i++){
    cin>>a[i];
}
int val;
cin>>val;

int low =0;
int high = n-1;

while(low<=high){
    int mid = (low+high)/2;

    if(a[mid]==val){
        cout<<"found";
        return 0;
    }

    else if(a[mid]<val){
        low= mid + 1;
    }
    else{
        high = mid -1;
    }


}
cout<<"not found";











}
