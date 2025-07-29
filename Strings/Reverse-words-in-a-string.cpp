#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
           int n = s.length();
           reverse(s.begin(),s.end());
           
           string ans = "";
           for(int i=0;i<n;i++){
            string word = "";
            if(s[i] == ' ') continue;
            while(i<n && s[i] != ' '){
                word += s[i];
                i++;
            }

            reverse(word.begin(),word.end());
            if(word.length() > 0){
                ans += " " + word;
            }
            
           }


           return ans.substr(1);
    }
};


// MY APPROACH
// -----------
// ->Reverse the entire given string using reverse() STL.
// ->Traverse through the reversed and store the individual words by skipping the spaces.
// ->reverse every word for the final output and add it to the answer string.
// ->Because of the space present in the begining , use substr() to return our answer string for the required output.
// ->T.C = o(n) , S.C = o(n)