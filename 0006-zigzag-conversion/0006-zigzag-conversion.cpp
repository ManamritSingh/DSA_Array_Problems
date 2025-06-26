class Solution {
public:
    string convert(string s, int numRows) {
        string res;
        if(numRows==1){
            return s;
        }
        for(int r = 0; r < numRows; r++){
            int inc = (numRows-1)*2;
            int i = r;
            for(i ; i < s.length(); i+=inc){
                res+=s[i];
                if(r>0 && r<numRows-1 && (i+inc - 2*r)<s.length()){
                    res+=s[i+inc-2*r];
                }
            }
        }
        return res;
    }
};