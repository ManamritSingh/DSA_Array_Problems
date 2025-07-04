class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> map;
        for(char c : t){
            map[c]++;
        }
        int left=0;
        int need=map.size();
        int have = 0;
        int res_len=INT_MAX;
        int ind;
        unordered_map<char,int> curr;
        for(int right = 0; right<s.length(); right++){
            char c = s[right];
            if(map.count(c)){
                curr[c]++;
                if(map[c]==curr[c]){
                    have++;
                }
            }

            while(have==need){
                if(right-left+1<res_len){
                    res_len = right-left+1;
                    ind= left;
                }

                int d  = s[left];

                if(map.count(d)){
                    curr[d]--;
                    if(map[d]>curr[d]){
                        have--;
                    }
                }
                left++;
            }
        }
        return res_len == INT_MAX ? "" : s.substr(ind, res_len);
    }
};