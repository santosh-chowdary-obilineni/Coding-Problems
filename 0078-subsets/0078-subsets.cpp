void dfs(int i , vector<int>& nums , vector<int> dup , vector<vector<int>>& ans){
    if(i == nums.size()){
        ans.push_back(dup);
        return;
    }
    dup.push_back(nums[i]);
    dfs(i + 1 , nums, dup , ans);
    dup.pop_back();
    dfs(i + 1 , nums, dup, ans);
}


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> dup;
        dfs(0 , nums, dup , ans);
        return ans;
    }
};