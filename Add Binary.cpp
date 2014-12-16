/*
 * Copyright (C) 2014 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 * @author Amber Yu <alice9112 AT g.ucla.edu>
 * @date 11/20/2014
 */
 
/*Given two binary strings, return their sum (also a binary string).
 
 For example,
 a = "11"
 b = "1"
 Return "100"*/
/*First reverse the string, since the order of add should be from right to left. Since there is problem that two string have different length, we need to add zero so that they can add up at every position. After the addition, we need to store the digit in a string and make sure the order is right. We can use insert wihch gurantte the last addition digit appearing at the first place of the final result*/

class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.size();
        int len2 = b.size();
        int len = len1>len2? len1:len2;
        int num;
        string result;
        int carry = 0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for (int i=0; i<len; i++) {
            const int a1 = i<len1? a[i]-'0' : 0;
            const int b1 = i<len2? b[i]-'0' : 0;
            num = (a1+b1+carry)%2;
            result.insert(result.begin(),num+'0');
            carry = (a1+b1+carry)/2;
        }
        if (carry>0) result.insert(result.begin(),'1');
        return result;
    }
};
