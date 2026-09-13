class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto i : nums) mpp[i]++;
        int cnt = 0;
        for(auto i : mpp){
            if(i.second == 3){
                int one = -1;
                int two = -1;
                int three = -1;
                for(int j = 0;j < nums.size(); j++){
                    if(nums[j] == i.first && one == -1) one = j;
                    else if(nums[j] == i.first && two == -1) two = j;
                    else if(nums[j] == i.first && three == -1) three = j; 
                }
                if((two - one) == (three - two)) cnt++;
            }
        }
        return cnt;
    }
};