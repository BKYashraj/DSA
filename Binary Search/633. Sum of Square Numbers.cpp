class Solution {
public:
    bool isPerfectSquare(int x){
        int t = sqrt(x);
        if(t*t==x) return true;
        else return false;

    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int y = c;
        while(x<=y){
            if(isPerfectSquare(x) && isPerfectSquare(y)){
                return true;
            }
            else if(!isPerfectSquare(y)){
                y = (int)sqrt(y)*(int)sqrt(y);
                x = c-y;
            }
            else{
                x = ((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y = c-x;
            }
       } 
        return false;
    }
};
