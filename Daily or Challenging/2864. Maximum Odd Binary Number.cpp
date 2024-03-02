class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        string str = string(n, '0');
        int i = 0;
        for(auto x : s){
            if(x == '1'){
                if(str[n-1] == '1'){
                    str[i] = '1';
                    i++;
                }
                else{
                    str[n-1] = '1';
                }
            }
        }
        return str;
    }
};
