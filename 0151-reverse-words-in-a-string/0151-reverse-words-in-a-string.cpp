class Solution {
public:
    string reverseWords(string s) {
        std::string es;
        int n = s.length();
        int i = 0;
        int j;
        while(i<n){
            while(i< n && s[i] == ' '){
                i++;
            }
            if(i>=n)break;
            j=i+1;
            while(j<n && s[j] != ' '){
                j++;
            }
            string r = s.substr(i, j-i);
            if(es.length()==0){
                es = r;
            }
            else{
                es = r +" "+ es;
            }
            i=j+1;
        }
        return es;
    }
};