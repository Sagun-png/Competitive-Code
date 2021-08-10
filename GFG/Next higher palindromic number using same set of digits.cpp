string nextPalin(string str) {
        if(str.size() <= 3)
        {
            return "-1";
        }
        
        string res;
        
        int mid = str.size() / 2 - 1;
        
        string firstHalf = str.substr(0, mid + 1);
        string prevFirstHalf = firstHalf;
        
        next_permutation(firstHalf.begin(), firstHalf.end());
        
        if(firstHalf <= prevFirstHalf)
        {
            return "-1";
        }
        
        res += firstHalf;
        
        if(str.size() % 2 == 1)
        {
            res += str[str.size() / 2];
        }
        
        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());
        
        res += secondHalf;
        
        return res;
    }
