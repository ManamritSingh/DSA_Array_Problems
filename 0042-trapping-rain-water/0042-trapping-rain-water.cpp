class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = size(height)-1;
        int lmax = height[l];
        int rmax = height[r];
        int res=0;

        while(l<r){
            if(lmax<rmax){
                l++;
                lmax= max(lmax,height[l]);
                res += lmax-height[l];
            }
            else{
                r--;
                rmax = max(height[r],rmax);
                res += rmax-height[r];
            }
        }

        return res;
    }
};