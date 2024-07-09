class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int r = 0,l = 0;
        while(r<nums.size()-1){
            int farthest = 0;
            for(l;l<r+1;l++){
                farthest = max(farthest, l+nums[l]);
            }
            l=r+1;
            r=farthest;
            jumps+=1;
        }
        return jumps;
    }
};