class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string k=strs[i];
            sort(k.begin(),k.end());
             m[k].push_back(strs[i]);
            
        }
        for(auto const &pair:m){
            ans.push_back(pair.second);
        }
 
        
        return ans;
    }
};