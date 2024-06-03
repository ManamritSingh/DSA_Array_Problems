class Solution {
public:
    int lengthOfLastWord(string s) {
        // int len = 0;
        // int maxlen =0;
        // for(int i = 0 ; i < s.size() ; i++){
        //     if(s[i] != ' '){
        //         len++;
        //     }
        //     else if(s[i]==' '){
        //         if(len>maxlen){
        //             maxlen = len;
        //         }
        //     }
        // }

        int len=0;
        int flag = 0;
        for(int i = s.size()-1 ; i>= 0; i--){
            if(s[i] != ' '){
                len++;
                flag =1;
            }
            else if(s[i]==' ' && flag == 0){
                continue;
            }
            else if(s[i]==' ' && flag == 1){
                break;;
            }
        }
    return len;
    }
};