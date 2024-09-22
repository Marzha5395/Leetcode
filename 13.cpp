class Solution {
    map<char,int> symboltovalue = {
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000},
    };
public:
    int romanToInt(string s) {
        int result = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(symboltovalue[s[i+1]] > symboltovalue[s[i]]) {
                result -= symboltovalue[s[i]];
            }
            else {
                result += symboltovalue[s[i]];
            }
        }
        result += symboltovalue[s[s.size()-1]];
        return result;
    }
};
