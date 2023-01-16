class Solution {
public:
    bool isPalindrome(int x) {
        long long int num=x,rev=0,n;
        
       if(x<0) return false;
        
        while(num!=0){
            n =num%10;
            num=num/10;
            rev = rev*10 +n;
            
            
        }
        if(rev==x){
            return true;
        }
        
        else{
            return false;
        }
    }
};