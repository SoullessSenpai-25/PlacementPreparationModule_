class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;
        int sum = 0;
        int length = 0;
        mp.insert({0 , -1});
        for(int i = 0;i<n;i++)
        {
            sum += A[i];
            if(mp.find(sum) != mp.end())
            {
                length = max(length , i -mp[sum]);
            }
            else 
            {
                mp.insert({sum , i});
            }
        }
        return length;
    }
};
