string convert(string s, int n) {
        int k=0,l=0,z=0; string tmp;
        if(n==1)
            return s;
        for(int i=0;i<n;i++)
        {   
            for(int j=i;j<s.length();)
            {   
                z=j;
                tmp+=s[j];
                j+=2*(n-1-l);
                if(k!=0 && j<s.length())
                {   
                    if(j!=z)
                        tmp+=s[j];
                    j+=k;
                }
            }
            k+=2;
            l++;
        }
        return tmp;
    }
