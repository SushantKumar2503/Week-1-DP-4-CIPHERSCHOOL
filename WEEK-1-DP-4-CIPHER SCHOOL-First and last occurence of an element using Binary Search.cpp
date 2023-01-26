#include<iostream>
#include<algorithm>
using namespace std;
int first_occurence(int a[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else
        if(a[mid]>target){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int last_occurence(int a[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else
        if(a[mid]>target){
            end=mid-1;
        }
        else
        start=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int target;
    cin>>target;
    cout<<first_occurence(a,n,target)<<" "<<last_occurence(a,n,target)<<endl;
    return 0;
}