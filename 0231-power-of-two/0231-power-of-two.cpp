class Solution {
public:
    bool isPowerOfTwo(int n) {
        //first condition if n<1 so we return false
        if(n<1){// 1 se small number
          return false;
        }
        else if(n==1){
            return true;

        }
        else{
            while(n%2==0){
                n=n/2;
            }
            if(n==1){
                return true;
            }
            else{
                return false;
            }
        }
        
    }
};