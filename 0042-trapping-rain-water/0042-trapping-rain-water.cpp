class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        int Max=0;
        int totalwater=0;
        int maxIndex=0;
        for(int i=0;i<n;i++){
            if(height[i]>Max){
                Max=height[i];  // it is both right and left max;
                maxIndex=i;
            }
        }
            int leftMax=0;
            // part 1
            for(int i=0;i<maxIndex;i++){
                leftMax= max(leftMax,height[i]);
                int water=min(leftMax,Max)-height[i];
                totalwater+=water;
                
            }
            
            //part2
            leftMax=0;
            for(int i=n-1;i>maxIndex;i--){
                leftMax= max(leftMax,height[i]);
                int water=min(leftMax,Max)-height[i];
                totalwater+=water;
                
            }
        
        
            return totalwater;
            }
        
        
    
};