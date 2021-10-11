Node* connect(Node* root) {
        if(!root)
            return root;
        vector<Node*> v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            long long int m = q.size();
            for(long long int i=0;i<m;i++){
                Node *f = q.front();
                v.push_back(f);
                q.pop();
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            for(int i=0;i<v.size()-1;i++)
                v[i]->next=v[i+1];
            v[v.size()-1]->next=NULL;
            v.clear();
        }
        return root;
    }
