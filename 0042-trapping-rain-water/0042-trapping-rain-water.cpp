class Solution {
public:     // brute force 
       // tc- o(n)
    //sc-o(n)
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>leftMax(n);
        vector<int> rightMax(n);
        int Max=0;
        int totalwater=0; 
        
        // storing all left max;
        
        for(int i=0;i<n;i++){
            Max=max(Max,height[i]);
            leftMax[i]=Max;
            
        }
        
        Max=0;
        //storing all right max
        
        for(int i=n-1; i >=0;i--){
            Max=max(Max,height[i]);
            rightMax[i]=Max;
        }
        
        for(int i=0;i<n-1;i++){
            int water=min(leftMax[i],rightMax[i])-height[i];
            totalwater+=water;
        }
        
        
        return totalwater;
    }
};