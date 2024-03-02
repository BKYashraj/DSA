---------------Using recursion--------------
class Solution {
public:
    void reverse(vector<char>& s, int i, int j){
        if(i>j) return;
        swap(s[i],s[j]);
        i++;
        j--;
        reverse(s,i,j);
    }
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size()-1);
    }
};

-------------Without Recursion------------------
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};
