class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int t = strs.size();
        string str1 = strs[0];
        string str2 = strs[t-1];
        string str3="";
        for(int i =0 ; i < str1.size(); i++){
            if(str1[i]==str2[i]){
                str3+=str1[i];
            }
            else{
                break;
            }
        }
    return str3;
    }
};