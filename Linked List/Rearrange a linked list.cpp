void rearrangeEvenOdd(Node *head)
    {
       Node *odd = head;
       Node* oddnxt = odd;
       Node *even = head->next;
       Node* evenxt = even;
       while(evenxt!=NULL && evenxt->next!=NULL)
       {
           oddnxt->next = evenxt->next;
           oddnxt = evenxt->next;
           evenxt->next = oddnxt->next;
           evenxt = oddnxt->next;
       }
       oddnxt->next = even;
    }
