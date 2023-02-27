class Solution {
public:
  bool isPalindrome(int x) {
        int values[10];
        if(x  < 0)
            return false;
        int back =0;
        while(x!=0){
            // getting the last digit in the number 
            values[back] = x %10;
            x/= 10;
            back++;
        }
        int firstPointer= 0;
        int secondPointer=back>0 ? back-1:0;
      
        // no need to check second pointer 
        // they go at the same tieme
        while (secondPointer!=-1){
            std::cout<<secondPointer;
            if(firstPointer == secondPointer){
                if(values[firstPointer] == values[secondPointer])
                    return true;
            }
            if(values[firstPointer] != values[secondPointer])
                return false;
            
            firstPointer++;
            secondPointer--;
            
        }
        return true;
    }
};