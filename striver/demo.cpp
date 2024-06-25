#include <iostream>
#include<limits.h>
#include<vector>
#include <algorithm>
using namespace std;
int longestPalindrome(string s) {
        int i, j, x;
        i = 0;
        j = s.length()-1;
        if(s.length()%2 == 0) x =0;
        if(s.length()%2 != 0) x = 1;
        while(i<j){
            if(s[i] == s[j])
                x++;
            else{
                x = 0;
                break;
            }
            i++;
            j--;
        }
        return 0;
    }

int main()
{
    int x = longestPalindrome("abccccdd");
    cout<<x;
}