class Solution {
public:
    string intToRoman(int num) {
        std::vector<std::pair<int,std::string>> vec = {
            {1000,"M"},{900,"CM"},{500,"D"},
            {400,"CD"},{100,"C"},{90,"XC"},
            {50,"L"},{40,"XL"},{10,"X"},
            {9,"IX"},{5,"V"},{4,"IV"},
            {1,"I"}
        };
        std:string res = "";

        for (const auto& pair : vec){
            if(num!=0){
                int d = num/pair.first;
                while(d>0){
                    res.append(pair.second);
                    d--;
                }
                num = num%pair.first;
            }
        }
        return res;
    }
};