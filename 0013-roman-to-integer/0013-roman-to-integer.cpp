// max sizez 15
//contains ('I', 'V', 'X', 'L', 'C', 'D', 'M')
// range answer = [1, 3999]
class Solution {
public:
    int Convert(const char& letter){
        if(letter=='I')
            return 1;
        if(letter =='V')
            return 5;
        if(letter == 'X')
            return 10;
        if(letter =='L')
            return 50;
        if(letter == 'C')
            return 100;
        if(letter == 'D')
            return  500;
        if(letter == 'M')
            return 1000;
        return 0;
    }
    int romanToInt(string s) {
      int lastNumber =0;
      int total =0;
      for(int i = s.size() - 1; i >= 0; i--)
      {
        int currentNumber = Convert(s[i]);
        if(currentNumber < lastNumber){
            total -= lastNumber;
            total  += lastNumber - currentNumber;
            lastNumber = currentNumber;
            continue; 
        }
        total += currentNumber;
        lastNumber =currentNumber;
      }  
      return total;
    }
};