bool ispar(string x)
    {
        stack<char>s;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='[' || x[i]== '{' || x[i]== '(')
           {
                s.push(x[i]);
                continue;
           }
           if(s.empty())
               return false;
           else
           {
              if(x[i]==')' && s.top()=='(') 
               s.pop();
              else if(x[i]=='}' && s.top()=='{') 
               s.pop();
              else if(x[i]==']' && s.top()=='[') 
               s.pop();
              else
                   return false;
           }
       }
       return (s.empty());
    }
