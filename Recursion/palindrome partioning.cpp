class Solution {
public:
    bool checkPalindrome(string &str,int s,int e){
        int n = str.size();
        while(s<=e){
            if(str[s++] != str[e--])
                return false;
        }
        return true;
    }
void solve(int id,string &s,vector<string> &temp,vector<vector<string>> &v){
        if(id == s.size()){
            v.push_back(temp);
            return;
        }
        string str = "";
        for(int i=id;i<s.size();i++){
            str += s[i];
            if(checkPalindrome(s,id,i) == true){
                temp.push_back(str);
                solve(i+1,s,temp,v);
                temp.pop_back(); // Backtrack
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> temp; 
        vector<vector<string>> v;
        solve(0,s,temp,v);
        return v;
    }
};
