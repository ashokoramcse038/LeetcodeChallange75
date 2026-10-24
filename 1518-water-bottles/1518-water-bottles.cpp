class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int output=numBottles;
       while(numBottles>=numExchange){
        int newBottle = numBottles/numExchange;
        int rem = numBottles%numExchange;
        output +=newBottle;
        numBottles=newBottle+rem;

       }
       return output;
    }
};