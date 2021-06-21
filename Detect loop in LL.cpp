bool detectLoop(Node* head)
    {
        // your code here
        Node *p,*q;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            q=q!=NULL?q->next:NULL;
        }while(p!=NULL && q!=NULL && p!=q);
        if(p==NULL || q==NULL) return false;
        return p==q?true:false;
    }
