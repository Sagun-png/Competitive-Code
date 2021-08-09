string reverseWords(string S) 
    { 
        string fin,ss,tmp=".";
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                tmp+=fin;
                fin=tmp;
                tmp=".";
                continue;
            }
            tmp+=S[i];
        }
        ss.append(tmp,1,tmp.length());
        ss+=fin;
        return ss;
    } 
