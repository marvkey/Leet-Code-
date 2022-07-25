//https://medium.com/@ManBearPigCode/how-to-reverse-a-number-mathematically-97c556626ec6
// Refrence
class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers cannot be a palindrome
        if(x < 0)
            return false;
        
        uint32_t reverseDigit =0;
        uint32_t originalNumber  = x;
        // Getting palindrome
        //for loop
        //faster than while
        for(;x>0;)
        {
            // getting hte last digit
            // this is getting the ones collumn
            //x = 2234
            // ones column is 4
            // thats why we use %10
            uint32_t lastDigit = x %10;
            
            // we are appening the reverse digit
            // we multiply by ten so the ones column becomes the ten
            // and if so the ten becomes the 100 and so on and so on
            reverseDigit = (reverseDigit * 10) + lastDigit;
            
            
            // we are makign the originial number smaller
            // because we divide by 10 we are loosing th last digigt
            // it is an int autoomatically removes
            // x= 2234/10
            //x= 223
            x = x/10;
        }
        if(reverseDigit ==  originalNumber)return true;
        return false;
    }
};