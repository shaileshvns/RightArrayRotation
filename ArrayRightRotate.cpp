#include<iostream>
#include<array>
using namespace std;
int* ArrayRightRotation(int a[],int d,int n){
    int temp[d],i;
    for(i=0;i<d;i++){
        temp[i]=a[n-d+i];
    }
    for(i=n-1;i>=d;i--){
        a[i]=a[i-d];
    }
    for(int i=0,j=0;i<d;i++){
        a[i]=temp[j++];
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
    int d;
    cin>>d;
    ArrayRightRotation(a,d,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}