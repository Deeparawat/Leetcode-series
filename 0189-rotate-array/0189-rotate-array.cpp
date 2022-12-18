class Solution {
public:
    void reverseArray(vector<int>&arr,int start,int end){
        int i=start, j= end-1;
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        k=k%n;
        reverseArray(nums,0,n-k);
        reverseArray(nums,n-k,n);
        reverseArray(nums,0,n);
        
        
        
        
        
    }
};