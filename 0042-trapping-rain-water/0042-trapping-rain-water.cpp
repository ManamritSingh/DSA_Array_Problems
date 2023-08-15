class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = height[0], rmax = height[n - 1];
        int lpos = 1, rpos = n - 2;
        int water = 0;

        while (lpos <= rpos) {
            if (height[lpos] >= lmax) {
                lmax = height[lpos];
                lpos++;
            } else if (height[rpos] >= rmax) {
                rmax = height[rpos];
                rpos--;
            } else if (lmax <= rmax) {
                water += lmax - height[lpos];
                lpos++;
            } else {
                water += rmax - height[rpos];
                rpos--;
            }
        }
        return water;
    }
};
