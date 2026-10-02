class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>& dup ,vector<int>& vec , int i , int n , int k ){
        if(dup.size() == k){
            ans.push_back(dup);
            return;
        }
        if(i == n) return;
        dup.push_back(vec[i]);
        dfs(dup , vec, i + 1 , n , k);
        dup.pop_back();
        dfs(dup , vec , i + 1 , n , k);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> vec(n);
        for(int i =0;i < n; i++) vec[i] = i + 1;
        vector<int> dup;
        dfs(dup ,vec ,0, n, k);
        return ans;
    }
};