void solve(string S, string op, vector<string>& ans){
        if(S.length()==0){
            ans.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        op2.push_back(' '); op2.push_back(S[0]);
        op1.push_back(S[0]);
        S.erase(S.begin()+0);
        solve(S,op2,ans);
        solve(S,op1,ans);
    }

    vector<string> permutation(string S){
        // Code Here
        vector<string>ans; string op="";
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        solve(S,op,ans);
        return ans;
    }
