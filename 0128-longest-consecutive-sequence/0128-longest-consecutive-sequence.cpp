class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hashset;
        for(int num:nums){
            hashset.insert(num);
        }
        int longeststreak=0;
        for(int num:nums){
            if(!hashset.count(num-1)){
                int current_seq=num;
                int currentstreak=1;
                while(hashset.count(current_seq+1)){
                    current_seq+=1;
                    currentstreak+=1;
                }
                
                longeststreak=max(currentstreak,longeststreak);
            }
        }
        return longeststreak;
    }
};