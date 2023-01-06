/*
 tc-o(nlongn)
 sc-o(1)

*/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt=0;
        // sort(costs.begin(),costs.end());
        // int cnt=0;
        // for(int i=0;i<costs.size()&&coins>0;i++){
        //     coins-=costs[i];
        //     if(coins>=0)cnt++;
        // }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:costs){
            pq.push(it);
        }
        while(!pq.empty()&&coins>0){
            coins-=pq.top();
            pq.pop();
            if(coins>=0)cnt++;
        }
        // set<pair<int,int>>st;
        // for(int i=0;i<costs.size();i++){
        //     st.insert({costs[i],i});
        // }
        // for(auto it:st){
        //     coins-=it.first;
        //     if(coins>=0)cnt++;
        // }
        return cnt;
    }
};
