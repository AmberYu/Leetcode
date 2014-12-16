/*
 * Copyright (C) 2014 by The Regents of the University of California
 * Redistribution of this file is permitted under the terms of the GNU
 * Public License (GPL).
 *
 * @author Amber Yu <alice9112 AT g.ucla.edu>
 * @date 11/20/2014
 */
 

class Solution {
public:
    int reverse(int x) {
        int num=0;
        int count=0;
        while(x)
        {
            if(num>INT_MAX/10 || num<INT_MIN/10 ||(count==9 && abs(x)>2))
                return 0;
            num = num*10+x%10;
            x=x/10;
            count++;
        }
        return num;
    }
    
};
