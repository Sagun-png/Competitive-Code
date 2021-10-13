string removeKdigits(string s, int k) {
        string t = "";
        
        for(int i=0; i<s.size(); i++){
            while(t.size() && s[i] < t.back() && k-- > 0)
                t.pop_back();
            if(t.size() || s[i]!='0') /* Append only if non-zero OR is not empty */
                t += s[i];
        }
        while(k-- > 0 && t.size())
            t.pop_back();
        
        return t.size() ? t : "0";
    }
