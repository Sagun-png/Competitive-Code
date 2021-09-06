Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *last,*fin=nullptr; last=fin;
    Node *t;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            t=new Node(head1->data);
            head1=head1->next;
        }else{
            t=new Node(head2->data);
            head2=head2->next;
        }
        if(fin==nullptr){
            fin=t;
            last=fin;
        }else{
            last->next=t;
            last=t;
        }
    }
    while(head1!=NULL){
        t=new Node(head1->data);
        head1=head1->next;
        last->next=t;
        last=t;
    }
    while(head2!=NULL){
        t=new Node(head2->data);
        head2=head2->next;
        last->next=t;
        last=t;
    }
    return fin;
}
