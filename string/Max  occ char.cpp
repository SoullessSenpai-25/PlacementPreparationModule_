class Solution
{
    public:
   
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            int num=0;
             num=ch-'a';
            arr[num]++;
        }
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return ans+'a';
    }

};
