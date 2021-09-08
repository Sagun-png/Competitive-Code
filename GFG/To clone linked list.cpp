Node *copyList(Node *head)
    {
        //To make duplicates in head list
        Node *t=head;
        while(t!=NULL)
        {
            Node* tmp = new Node(t->data);
            tmp->next=t->next;
            t->next=tmp;
            t=t->next->next;
        }
        
        
        //To join random pointers
        t=head;
        while(t!=NULL)
        {
            if(t->arb==NULL)
            {
                t->next->arb=NULL;
            }
            else
            {
                t->next->arb=t->arb->next;
            }
            t=t->next->next;
        }
        
        
        //To separate duplicates which we made in step 1
        Node *l1=head,*l2;
        Node* start=new Node(0);
        start->next=l1->next;
        l2=start->next;
        while(l1!=NULL && l2!=NULL)
        {
            l1->next=l2->next;
            l1=l1->next;
            if(l1!=NULL)
            {
                l2->next=l1->next;
                l2=l2->next;
            }else
            {
                l2->next=NULL;
            }
        }
        return start->next;
    }
