class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string(x);
        int n = a.size();
        string result1 = "";
        string result2 = "";
        for (int i = 0 ; i < n ; i++)  
            result1 += a[i];
        for (int i = n-1 ; i >= 0 ; i --)
            result2 +=a[i];
        if (result1 == result2)
            return 1;
        else 
            return 0;
    }
   
};