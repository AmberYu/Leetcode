/*
 * Copyright (C) 2014 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 * @author Amber Yu <alice9112 AT g.ucla.edu>
 * @date 11/20/2014
 */
 
/*When we need to compare the equality of two element, we can firstly initialize an array with all value equals to false, then when starting comparision, if the value equals false, meaning the current value is a new one, there is no the same value before; however, if the current value equals true, then there must be a same value before*/
class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int num=0;
        for(int i=0;i<len;i++)
        {
            switch(s[i]){
                case 'I':
                    if(s[i+1] == 'V'){
                        num = num+4;
                        i++;}
                    else if(s[i+1] == 'X'){
                        num = num+9;
                        i++;}
                    else num = num+1;
                    break;
                case 'V':
                    num = num+5;
                    break;
                case 'X':
                    if(s[i+1] == 'C'){
                        num=num+90;
                        i++;}
                    else if(s[i+1] == 'L'){
                        num=num+40;
                        i++;}
                    else num = num+10;
                    break;
                case 'L':
                    num = num+50;
                    break;
                case 'C':
                    if(s[i+1] == 'M'){
                        num = num+900;
                        i++;}
                    else if(s[i+1] == 'D'){
                        num=num+400;
                        i++;}
                    else num = num+100;
                    break;
                case 'D':
                    num= num+500;
                    break;
                case 'M':
                    num = num+1000;
                    break;
                default: break;
            }
        }
        return num;
    }
};

/*improved method: firstly establish a map converting string to interger then do computation process*/
class Solution {
public:
    int map(char c)
    {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int result=0;
        for (int i=0; i<s.size(); i++) {
            if (map(s[i])>map(s[i-1]))
                result = result + map(s[i]) -2*map(s[i-1]);
            else result += map(s[i]);
        }
        return result;
    }
};
