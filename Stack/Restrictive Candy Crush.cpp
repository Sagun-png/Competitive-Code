string Reduced_String(int k,string s){
        stack<char> v;
        string ans; int flg=1;
        if(k==1)
            return ans;
        while(flg){
            flg=0; ans="";
            for(int i=0; i<s.length(); i++){
                if(v.empty())
                    v.push(s[i]);
                else if(v.top()==s[i]){
                    v.push(s[i]);
                    if(v.size()==k){
                        flg=1;
                        while(!v.empty())
                            v.pop();
                    }
                }
                else{
                    while(!v.empty()){
                        ans+=v.top();
                        v.pop();
                    }
                    v.push(s[i]);
                }
            }
            while(!v.empty()){
                ans+=v.top();
                v.pop();
            }
            s=ans;
        }
        return s;
    }
