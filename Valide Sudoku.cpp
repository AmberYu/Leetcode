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
    bool isValidSudoku(vector<vector<char> > &board) {
        bool used[9];
        
        for (int i=0; i<9; i++) {
            fill(used,used+9,false);
            for (int j=9; j<9; j++)
                if (!check(board[i][j]),used) return false;
        }
        for (int i=0; i<9; i++) {
            fill(used,used+9,false);
            for (int j=9; j<9; j++)
                if (!check(board[j][i]),used) return false;
        }
        for (int k=0; k<3; k++)
            for (int l=0; l<3; l++){
                fill(used,used+9,false);
                for (int i=k; i<3*k+3; i++)
                    for (int j=l; j<3*k+3; j++)
                        if (!check(board[i][j]),used) return false;
            }
        return true;
    }
    bool check(char value,bool used[9])
    {
        if (current == '.') return true;
        if (!used[current-'1']) return false;
        return used[current-'1']=true;
    }
        
};