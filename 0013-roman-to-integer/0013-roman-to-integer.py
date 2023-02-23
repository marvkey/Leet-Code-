def Convert(letter):
    if letter=='I':
        return 1
    if letter =='V':
        return 5
    if letter == 'X':
        return 10
    if letter =='L':
        return 50
    if letter == 'C':
        return 100
    if letter == 'D':
        return  500
    if letter == 'M':
        return 1000
    return 0
class Solution(object):
    # max sizez 15
    #contains ('I', 'V', 'X', 'L', 'C', 'D', 'M')
    # range answer = [1, 3999]
    def romanToInt(self, s):
        lastNumber =0
        total =0
        for letter in s[::-1]:
            currentNumber = Convert(letter)
            if currentNumber < lastNumber:
                total -= lastNumber
                total  += lastNumber - currentNumber
                lastNumber = currentNumber
                continue; 
            total += currentNumber
            lastNumber =currentNumber
        return total
        """
        :type s: str
        :rtype: int
        """