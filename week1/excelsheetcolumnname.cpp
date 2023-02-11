#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber > 0){
            columnNumber -= 1;
            ans.insert(0,1,columnNumber % 26 + 65);
            columnNumber /= 26;
        }
        return ans;
    }
};