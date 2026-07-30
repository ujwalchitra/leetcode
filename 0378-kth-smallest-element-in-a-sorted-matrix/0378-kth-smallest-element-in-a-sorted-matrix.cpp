class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int a=0;
       int count=1;
       vector<int>v;
       sort(matrix.begin(),matrix.end());
       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
           v.push_back(matrix[i][j]);
        }
       } 
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++){
        if(count==k){
            a=v[i];
        }
        count++;
       }
       return a;
    }
};