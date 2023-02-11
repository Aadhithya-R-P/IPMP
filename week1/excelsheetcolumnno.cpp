#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for(int i=0;i<columnTitle.length();i++) {
            sum += ((int)columnTitle[i] - 64)*pow(26,columnTitle.length()-i-1);
        }
        return sum;
    }
};