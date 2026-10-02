class Solution {
public:
    vector<string> ans;


    void dfs(string& dup ,string& s ,int i, int n){
        if(i == s.size()) {
            ans.push_back(dup);
            return;
        }
        if(dup[i] >= '0' && dup[i] <= '9') dfs(dup, s,i + 1, n);
        else if(dup[i] >= 'A' && dup[i] <= 'Z'){
            dup[i] = s[i] + 32;
            dfs(dup ,s, i + 1 , n);
            dup[i] = s[i];
            dfs(dup , s,i + 1 , n);
        }
        else{
            dup[i] = s[i] - 32;
             dfs(dup ,s , i + 1 , n);
            dup[i] = s[i];
            dfs(dup ,s, i + 1 , n);
        }
    }


    vector<string> letterCasePermutation(string s) {
        string dup = s;
        dfs(dup ,s,0, s.size());
        return ans;
    }
};