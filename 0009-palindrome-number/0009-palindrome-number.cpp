#include <algorithm>  
class Solution {
public:
    bool isPalindrome(int x) {
        if(x  < 0)
            return false;
        
        std::string num = std::to_string(x);
        std::string original = num;
        std::reverse(num.begin(), num.end());
        if(num == original)
            return true;
        
        return false;
    }
};