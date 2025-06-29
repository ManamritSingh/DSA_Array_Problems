class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        // int offset = 0; // there are word_len set of possible windows
        int word_len = words[0].length();
        int set_size = words.size(); 
        int win_len = set_size*word_len;
        int s_len = s.length();

        vector<int> res;

        unordered_map<string,int> wordcount; // map to count each word's occurence
        for (const string& word : words) {
            wordcount[word]++;
        }

        for(int offset=0 ;offset<word_len;offset++){ // trying all offsets
            int start = offset;
            unordered_map<string,int> seen;// map to count occurences in current window
            for(int end = offset; end + word_len <= s_len; end+=word_len){ // inc by word length and see out of bounds by adding buffer equal to an entire word
                string sub = s.substr(end,word_len);// slice a word
                if(wordcount.find(sub)!=wordcount.end()){ // if word is found in og map
                    seen[sub]++; // add to current map

                    while(seen[sub]>wordcount[sub]){ // if too many occurences
                    string rem = s.substr(start, word_len); //remove a word from lefr
                    seen[rem]--;
                    start+=word_len;
                    }
                    if(end-start+word_len==win_len){ // at the end if there is a match
                        res.push_back(start);
                    }
                }
                else{
                    seen.clear(); // otherwise start over
                    start = end + word_len;

                }
            }
        }
        return res;
    }
};