class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas = std::accumulate(gas.begin(), gas.end(), 0);
        int sumcost = std::accumulate(cost.begin(), cost.end(), 0);
        int start=0;
        int total = 0;

        if(sumgas<sumcost){
            return -1;
        }

        vector<int> diff(gas.size(),0);
        for(int i = 0 ; i<gas.size()-1;i++){
            total += gas[i]-cost[i];
            if(total<0){
                total=0;
                start = i+1;
            }
        }
        return start;
    }
};