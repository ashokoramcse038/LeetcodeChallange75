class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;

        }
        else if(n==1 || n==2){
            return 1;
        }
        double first_term = 0;
        double second_term = 1;
        double third_term = 1;
        for(double i=1;i<=n;i++){
            double fourth_term = first_term+second_term+third_term;
            first_term=second_term;
            second_term=third_term;
            third_term = fourth_term;
            
        }
        return first_term;
        
    }
};