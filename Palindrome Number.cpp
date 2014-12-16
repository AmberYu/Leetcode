/*
 * Copyright (C) 2014 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 * @author Amber Yu <alice9112 AT g.ucla.edu>
 * @date 11/20/2014
 */
 
/*For an integer value, we can't get any digit in a given position, so we can use another data structure to store this integer. The simplest data structure is array. First store the given integer to an array, then see if it is Palindrome*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int i;
        int array[100];
        for(i=0;x;x /= 10,i++)
        array[i] = x%10;
        int len=i;
        if(len<=1) return true;
        else
        {
            for(i=0;i<len;i++)
            if(array[i]!=array[len-1-i]) return false;
            return true;
        }
    }
    
};

/*improved method: use reverse integer*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        int num=0;
        int count=0;
        for(;x;x/=10,count++)
        {
            if(num>INT_MAX/10 || (count ==9 && x>2)) return false;
            num = num*10+x%10;
        }
        if(temp == num) return true;
        else return false;
    }
};
/*convert the int to string, then we can easily get the length of the string and compare each digit. Another method is to use reverse algorithm, but it can be convenient only when the parameter of function is in string type. Otherwise, we need to convert integer to string first and then convert string to integer to call the function itself, which cost a lot*/
class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int len = s.size();
        if (len<=1) return true;
        else
        {
            for(int i=0;i<len;i++)
            if(s[i]!=s[len-1-i])  return false;
            return true;
        }
        
    }
};
