class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k = k % len; // To handle cases where k is greater than len
        if (k == 0) return; // No need to rotate if k is 0

        int count = 0; // Count of elements moved
        for (int start = 0; count < len; start++) {
            int current = start;
            int prev = nums[start];
            do {
                int next = (current + k) % len;
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);
        }
    }
};