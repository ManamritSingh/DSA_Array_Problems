class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int i =0;
        while(i < nums.size()-2){
            if (i > 0 && nums[i] == nums[i - 1]){
                i++;
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                vector<int> pos;
                int twosum=nums[j]+nums[k];
                if(nums[i]+twosum==0){
                    pos.push_back(nums[i]);
                    pos.push_back(nums[j]);
                    pos.push_back(nums[k]);
                    res.push_back(pos);
                    // skip duplicates for left
                    while (j < k && nums[j] == nums[j + 1]) ++j;
                    // skip duplicates for right
                    while (j < k && nums[k] == nums[k - 1]) --k;
                    ++j;
                    --k;

                }
                else if(nums[i]+twosum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
            i++;
        }
        return res;
    }
};