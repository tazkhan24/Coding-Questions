class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost =0;
        int n = gas.size();
        for(int i=0;i<n;i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalgas<totalcost) return -1;
        int start=0,surplus=0;
        for(int i=0;i<n;i++){
            surplus+=gas[i]-cost[i];
            if(surplus<0){
                surplus=0;
                start = i+1;
            }
        }
        return surplus<0 ? -1: start;
    }
};