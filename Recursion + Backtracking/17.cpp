//link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1683782098/

class Solution {
public:

    void solve(int i,string &digits,string &temp,unordered_map<char,string> &mp,vector<string> &result){
        if(i>=digits.length()){
            result.push_back(temp);
            return;
        }
        char ch=digits[i];
        string str=mp[ch];
        for(int idx=0;idx<str.length();idx++){
            temp.push_back(str[idx]);
            solve(i+1,digits,temp,mp,result);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> result;
        unordered_map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        string temp="";
        solve(0,digits,temp,mp,result);
        return result;
    }
};
