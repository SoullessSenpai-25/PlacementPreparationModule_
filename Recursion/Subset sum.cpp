class Solution
{
    
public:
      void solve(vector<int> arr,vector<int>&output,vector<int>&ans){
          if(arr.size()==0)
    {
        ans.push_back(accumulate(output.begin(),output.end(),0));
        return;
    }
    vector<int>op1=output;
    vector<int>op2=output;
    op2.push_back(arr[0]);
    arr.erase(arr.begin());
    solve(arr,op1,ans);
    solve(arr,op2,ans);
}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
         vector<int>output;
        vector<int>ans;
        solve(arr,output,ans);
        return ans;
        // Write Your Code here
    }
};
