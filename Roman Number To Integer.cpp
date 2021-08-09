int romanToDecimal(string &str) {
        int sum=0;
        map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<str.length();i++){
            if(i<str.length()-1 && mp[str[i]]<mp[str[i+1]]){
                sum+=mp[str[i+1]]-mp[str[i]]; i++;}
            else
                sum+=mp[str[i]];
        }
        return sum;
    }
