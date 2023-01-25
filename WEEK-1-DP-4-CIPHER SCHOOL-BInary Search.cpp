#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int a[],int n,int  target){
     int start=0;
     int end=n-1;
     while(start<=end){
         int mid=(start+end)/2;
         if(a[mid]==target){
             return mid;
         }
         else
         if(a[mid]>target){
             end=mid-1;
         }
         else{
             start=mid+1;
         }
     }
     return -1;
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
    cout<<binary_search(a,n,target)<<endl;
    return 0;

}