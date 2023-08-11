
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string ans="",first=arr[0];
        for(int i=0;i<first.length();i++){
            for(int j=0;j<N;j++){
                if(first[i]!=arr[j][i]){
                    if(ans.length()==0){
                        return to_string(-1);
                    }
                    else
                    return ans;
                }
            }
            ans+=first[i];
        }return ans;
        // your code here
    }
};
