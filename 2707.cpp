class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int len = s.size();
        string substring;
        vector<int> dp(len+1);
        for(int i = len-1; i >= 0; i--){
            dp[i] = dp[i+1]+1;
            for(int length = 1; length < len - i + 1; length++){
                substring = s.substr(i,length);
                if(find(dictionary.begin(),dictionary.end(),substring) != dictionary.end()){
                    dp[i] = min(dp[i], dp[i+length]);
                }
            }
        }
        return dp[0];
    }
};
