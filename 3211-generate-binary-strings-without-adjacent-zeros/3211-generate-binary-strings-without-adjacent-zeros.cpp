class Solution {
public:
    vector<string> ans;
    void dfs(string str , int n){
        if(str.size() == n){
            ans.push_back(str);
            return;
        }
        dfs(str + '1' , n);
        if(str.empty() || str[str.size() - 1] != '0') dfs(str + '0' , n);
    }


    vector<string> validStrings(int n) {
        dfs("", n);
        return ans;
    }
};