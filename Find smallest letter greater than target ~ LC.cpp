char nextGreatestLetter(vector<char>& letters, char target) {
        if(target=='z')
            target='a';
        else{
            int c=target+1;
            target=c;
        }
        int i=0,j=letters.size()-1; char res;
        if(letters[j]<target)
            return letters[0];
        while(i<=j){
            int mid=i+(j-i)/2;
            if(letters[mid]==target)
                return letters[mid];
            else if((int)letters[mid]<(int)target)
                i=mid+1;
            else if((int)letters[mid]>(int)target){
                res=letters[mid];
                j=mid-1;
            }
        }
        return res;
    }
