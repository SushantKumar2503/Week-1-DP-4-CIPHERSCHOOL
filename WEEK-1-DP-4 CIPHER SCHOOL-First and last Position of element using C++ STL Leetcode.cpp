class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        bool present=binary_search(nums.begin(),nums.end(),target);
        int lindex=0,uindex=0;
        vector<int>ans;
        vector<int>::iterator lb,ub;
        if(present==false)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
           lb=lower_bound(nums.begin(),nums.end(),target);
          lindex=lb - nums.begin();
           ub=upper_bound(nums.begin(),nums.end(),target);
          uindex=ub-nums.begin()-1;
          ans.push_back(lindex);
          ans.push_back(uindex);
        }
        return ans;
    }
};