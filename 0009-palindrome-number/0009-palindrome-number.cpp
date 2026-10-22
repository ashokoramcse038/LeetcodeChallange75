class Solution {
public:
    bool isPalindrome(int x) {
        int original_val = x;
        int rev = 0;
        while(x>0){
            int digit = x%10;
            x/=10;
            //for overflow condition
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7 ))
            return 0;
            //for underflow condition
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8 ))
            return 0;
            rev = rev*10+digit;
            
        }
        if(rev != original_val){
            return false;
        }
        else{
            return true;
        }
    }
};