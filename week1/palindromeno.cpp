#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // if(x  <  0)return false;
        // string s = to_string(x);
        // for(int i=0;i<s.length()/2;i++){
        //     if(s[i] != s[s.length() -1 - i])return false;
        // }
        // return true;
        if( x<0 || (x%10 == 0 && x!=0) ) return false;
        int s=0,d,b=1;
        while(x>s)
        {
            d=x%10;
            s=s*b+d;
            x/=10;
            b*=10;
        }
        return x==s || x==s/10;
    }
};