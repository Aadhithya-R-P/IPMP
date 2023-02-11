#include <bits/stdc++.h>

using namespace std;

string reverseWord(string str){
    int l = str.length();char temp;
    int start = 0,end = l-1;
    while(start<end)
    {
        swap(str[start++],str[end--]);
    }
    return str;
}