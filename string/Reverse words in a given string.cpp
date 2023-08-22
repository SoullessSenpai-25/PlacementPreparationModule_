Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
  code-:
 string reverseWords(string S) 
    {
        stack<string>st;
        string str="",res="";
        for(int i=0;i<S.length();i++){
            string words="";
            while(S[i]!='.'&&i<S.length()){
                words+=S[i];
                i++;
            }
          st.push(words);
        }
          while(!st.empty())
          {
            str=st.top();
             res+=str+".";
            st.pop();
        }
        res.pop_back();
        return res;
    } 
