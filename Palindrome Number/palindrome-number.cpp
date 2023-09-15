// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(long int x)
    {
        if (x > 2147483647) { return false; }
        int digits = 0;
        long int inp_copy = x; if (inp_copy < 0) { inp_copy = -inp_copy; }
        int inp_copy_sub=0;
        while (inp_copy > 0) { inp_copy = inp_copy / 10; digits++; }
        inp_copy = x;
        int* dynamicArray;
        dynamicArray = new int[digits];
        for (int x = digits-1; x>-1; x--)
        { inp_copy_sub = inp_copy / 10;
        dynamicArray[x] = inp_copy - inp_copy_sub * 10;
        if(inp_copy_sub<0){inp_copy_sub=inp_copy_sub*-1;inp_copy=inp_copy*-1;}
        inp_copy = inp_copy_sub;
        if (inp_copy <= 0) { break; } }
        for (int k = 0; k < digits; k++)
        { if (digits!=1 and k == digits / 2) { break; }
          if (dynamicArray[k] != dynamicArray[digits - k - 1]) {return false; }
          if (dynamicArray[k]<0 and dynamicArray[k] == dynamicArray[digits - k - 1]) { return false; } }
        
        return true;
        }
};

