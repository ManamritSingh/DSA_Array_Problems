class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int start = 0;
        int end = 0;
        int maxl = 0;
        for(end; end < s.length(); ++end){ // iterate end
            
            while(seen.find(s[end])!= seen.end()){ // while the end that we are trying to insert is already in there...
                seen.erase(s[start]); // keep erasing from the start
                start++;//and next 
            }
            seen.insert(s[end]);// now when we don't have end in there... now insert
            maxl = max(maxl, end - start+1);// and measure the length
        }
        return maxl;
    }
};