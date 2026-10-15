class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int cnt = sum / 9;
        if(sum % 9 != 0) cnt++;
        if(cnt > num) return "";
        string ans;
        while(num--){
            if(sum >= 9){
                ans.push_back('9');
                sum -= 9;
            } 
            else if(sum > 0){
                ans.push_back(sum + '0');
                sum = 0;
            }
            else ans.push_back('0');
        }
        return ans;

    }
};