void solve(int zero,int one,string op,vector<string>& ans,int N){
        if(one+zero==N){
            ans.push_back(op);
            return;
        }
        if(one!=N){
            string op1=op;
            op1.push_back('1');
            solve(zero,one+1,op1,ans,N);
        }
        if(zero<one && zero!=N){
            string op2=op;
            op2.push_back('0');
            solve(zero+1,one,op2,ans,N);
        }
        return;
    }

	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    string op="";
	    int zero=0,one=0;
	    solve(zero,one,op,ans,N);
	    return ans;
	}
