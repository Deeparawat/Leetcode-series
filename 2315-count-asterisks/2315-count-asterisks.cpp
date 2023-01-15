class Solution {
public:
    int countAsterisks(string s) {
        int l=0;
        int cnt_Asterisks=0;
        for(int i=0;i<s.size();++i){
            if(l%2==0 && s[i]=='*'){

                cnt_Asterisks++;
            }
            if(s[i]=='|'){
               l++;
            }
        }
        return cnt_Asterisks;
    }
};
            
         