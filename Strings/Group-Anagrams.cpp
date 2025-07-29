#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> ans;

        for(int i=0;i<strs.size();i++){
            string currString = strs[i];
            sort(currString.begin(),currString.end());
            map[currString].push_back(strs[i]);
        }

        for(auto& pair : map){
            ans.push_back(pair.second);
        }

        return ans;
    }
};


// MY APPROACH:
// -----------
// ->Loop through each word in the list.
// ->For each word, you sort its characters alphabetically — this sorted version     becomes a kind of "signature" for all its anagrams.
// ->Example: "eat" and "tea" both become "aet" when sorted.
// ->use a hash map (unordered_map) where:
// ->The key is the sorted string.
// ->The value is a list of words (original versions) that match that sorted form.
// ->After grouping all the anagrams in the map, you collect all the lists of words (the values of the map) into a final result vector.