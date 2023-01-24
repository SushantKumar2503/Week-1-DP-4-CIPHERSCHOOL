class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>merged(m+n);
        int k=0;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                merged[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                merged[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m){
            merged[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            merged[k]=nums2[j];
            j++;
            k++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=merged[i];
        }
    }
};