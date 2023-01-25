#include<iostream>
using namespace std;
void sortZerosOnesTwos(int a[],int n){
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else
        if(a[mid]==1){
            mid++;
        }
        else
        if(a[mid]==2)
          {
            swap(a[mid],a[high]);
            high--;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sortZerosOnesTwos(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}