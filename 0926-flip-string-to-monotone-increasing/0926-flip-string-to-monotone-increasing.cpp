class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count_1=0;
        int count_flip=0;
        for(int i =0; i<s.length() ; i++){
            if(s[i]=='1'){
                count_1++;
            }
            else{
                count_flip++;
            }
            count_flip=min(count_flip,count_1);
        }
        
        return count_flip;
    }
};