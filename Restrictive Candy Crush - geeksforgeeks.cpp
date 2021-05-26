string Reduced_String(int k,string s){
        // Your code goes here
        int flag=0;
    while(flag!=1){
        int i,z,ind=0; string temp; flag=1;
        for(i=0;s[i]!='\0';i++)
        {   
            for(z=i+1;z<k+i;z++)
                if(s[z]!=s[i])
                    break;

            if(z-i==k){
               temp.append(s,ind,i-ind);
               i=i+k-1;
               ind=i+1;
               flag=0;
            }
            else
                continue;
        }
        temp.append(s,ind,i-ind);
        s=temp;
       }
        return s;
}
