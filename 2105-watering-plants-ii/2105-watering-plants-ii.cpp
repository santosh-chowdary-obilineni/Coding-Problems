class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        if(plants.size() == 1) return 0;
        int cnt = 0;
        int k1 = capacityA;
        for(int i = 0 ;i < plants.size() / 2; i++){
            if(plants[i] <= k1) k1 -= plants[i];
            else{
                cnt++;
                k1 = capacityA - plants[i];
            }
        }
        int k2 = capacityB;
        for(int i = plants.size() - 1; i >= ceil(plants.size() / 2.0) ; i--){
            if(plants[i] <= k2) k2 -= plants[i];
            else{
                cnt++;
                k2 = capacityB - plants[i];
            }
        }
        if(plants.size() % 2 == 1){
            if(!(plants[plants.size() / 2] <= k1 || plants[plants.size() / 2] <= k2)) cnt++;
        }
        return cnt;
       
    }
};