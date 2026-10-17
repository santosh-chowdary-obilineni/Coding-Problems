class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0] * nums[0];
       vector<int> odd;
       vector<int> even;
       int bit = 0;
       for(auto i : nums){
        if(bit ^ 1){
            if(i < 0) even.push_back(-1 * i);
            else even.push_back(i);
        }
        else{
            if(i < 0) odd.push_back(- 1 * i);
            else odd.push_back(i);
        }
        bit ^= 1;
       }
       sort(even.begin() , even.end());
       sort(odd.rbegin() , odd.rend());
        for(int i = 0;i < odd.size(); i++){
            if(odd[i] > even[i]){
                int temp = even[i];
                even[i] = odd[i];
                odd[i] = temp;
            }
        }
        long long ans = 0;
        for(int i = 0; i < even.size(); i++){
            ans += even[i] * even[i];
            if(i < odd.size()) ans -= odd[i] * odd[i];
        }
        return ans;

    }
};