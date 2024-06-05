class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int j = 2;
        for(int i = 2 ; i < nums.size() ; i++){
            if(nums[j-2] != nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};