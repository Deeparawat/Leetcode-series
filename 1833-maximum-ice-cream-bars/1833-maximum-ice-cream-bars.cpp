class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0;
        int count=0;
        int rem=coins;
        int n =costs.size();
        for(int i=0;i<n;i++){
            if(costs[i]<coins && costs[i]<=rem){
                sum+=costs[i];
                count=count+1;
                rem=coins-sum;
            }
            else{
                continue;
            }
             
        
        }  
         return count;
   
            
        
    }
};