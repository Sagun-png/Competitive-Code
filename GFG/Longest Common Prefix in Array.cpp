string longestCommonPrefix (string arr[], int N)
    {
        string tmp1,tmp2;
        tmp1=arr[0]; int i=1;
        while(i!=N){
            tmp2=arr[i]; string ans;
            for(int j=0;tmp1[j]!='\0' && tmp2[j]!='\0';j++){
                if(tmp1[j]!=tmp2[j])
                    break;
                ans+=tmp1[j];
            }
            tmp1=ans;
            i++;
        }
        if(tmp1.length()==0)
            return "-1";
        return tmp1;
    }
