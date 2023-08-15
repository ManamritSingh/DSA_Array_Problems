class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int *a = new int[len];
        int *b = new int [len];
        for(int i = 0, temp = 1 ; i<len ; i++){
            a[i]=temp;
            temp *= nums[i];
        }
        for(int i = len-1 , temp=1 ; i>=0; i--){
            b[i]=temp;
            temp*= nums[i];
        }
        for(int i =0 ; i<len ; i++){
            nums[i] = a[i]*b[i];
        }
        return nums;
    }
};