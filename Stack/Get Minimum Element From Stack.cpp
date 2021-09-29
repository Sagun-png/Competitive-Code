stack<int> ss;
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(ss.empty())
            return -1;
           return ss.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty())
                return -1;
           if(s.top()==ss.top()){
               ss.pop();
           }
           int c = s.top();
           s.pop();
           return c;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
           if(ss.size()==0 || ss.top()>=x)
                ss.push(x);
       }
