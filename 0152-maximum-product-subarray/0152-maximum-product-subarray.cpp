class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int maxpro=INT_MIN;
        for(int i =0;i<nums.size();i++){
            prod=prod*nums[i];
            maxpro=max(maxpro,prod);
            if(prod==0 ){
                prod=1;
        }
        }
        
       int  prod1=1;
       int maxpro1=INT_MIN;
        
        for(int i = nums.size()-1; i>=0; i--){
            prod1*=nums[i];
            maxpro1=max(maxpro1,prod1);
            if(prod1==0){
                prod1=1;
            }
        }
        
        maxpro=max(maxpro,maxpro1);
          return maxpro;
    }
  
   
};