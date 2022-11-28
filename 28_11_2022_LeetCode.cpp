class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        vector<vector<int>> ans;
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> win;
        vector<int> los;
        
        for(int i=0;i<m.size();i++){
            mp1[m[i][0]]++;
            mp2[m[i][1]]++;
        }
        
        for(auto i:mp1){
            if(mp2.count(i.first)==0){
                win.push_back(i.first);
            }
        }
        for(auto i:mp2){
            if(i.second==1){
                los.push_back(i.first);
            }
        }
        
        ans.push_back(win);
        ans.push_back(los);
        
        return ans;
        
    }
};