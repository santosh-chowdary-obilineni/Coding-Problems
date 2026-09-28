class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        map<pair<int,int>,int> mpp;
        for(int i = 0;i < pick.size(); i++) mpp[{pick[i][0] , pick[i][1]}]++;
        unordered_set<int> st;
        for(auto i : mpp) if(i.second > i.first.first) st.insert(i.first.first);
        return st.size();
    }
};