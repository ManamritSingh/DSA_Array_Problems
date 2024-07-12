class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> a(len,1);
        for(int i = 0,temp=1 ; i < len-1 ; i++){
            temp*=nums[i];
            a[i+1]*=temp;
        }
        for(int i = len-1, temp =1; i>=0; i--){
            
            a[i]*=temp;
            temp*=nums[i];
        }
        for(int i =0; i<len;i++){
            nums[i]=a[i];
        }
        return nums;
    }
};