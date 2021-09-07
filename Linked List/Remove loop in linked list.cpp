void removeLoop(Node* head)
    {
        Node *prev;
        if(head==NULL || head->next==NULL)
            return;
        
        Node*slow=head;
        Node*fast=head;


        do{
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            if(fast==NULL || fast->next==NULL) return;
        }while(slow!=fast);
        
        fast=head;
        while(slow!=fast){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }

        prev->next=NULL;
    }
