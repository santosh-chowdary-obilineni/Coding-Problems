class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int sum = 0;
       for(int i = 0;i < tickets.size(); i++){
            if(tickets[i] <= tickets[k]) sum += tickets[i];
            else sum += tickets[k];
            if(i > k && tickets[i] >= tickets[k]) sum--;
       }
       return sum;
    }
};