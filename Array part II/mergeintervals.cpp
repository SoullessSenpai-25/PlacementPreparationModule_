class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& mat) {
        sort(mat.begin(),mat.end());
   vector<vector<int>>ans;
   int first=-1;
   int second=-1;
   for(int i=0;i<mat.size();i++){
      if(first==-1){first=mat[i][0];second=mat[i][1];}
      else{
         if(second>=mat[i][0])
         {
            if(second<=mat[i][1])
            {
               second=mat[i][1];
            }
         }
         else{
            ans.push_back({first,second});
            first=mat[i][0];
            second=mat[i][1];
         }
      }
   }
   if(second!=-1){
      ans.push_back({first,second});
   }
   return ans;
    }
};
