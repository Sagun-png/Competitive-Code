struct Node* partition(struct Node* head, int x) {
    vector<int> v;
    struct Node* t=head;
    while(t!=NULL){
        if(t->data<x)
            v.push_back(t->data);
        t=t->next;
    }
    t=head;
    while(t!=NULL){
        if(t->data==x)
            v.push_back(t->data);
        t=t->next;
    }
    t=head;
    while(t!=NULL){
        if(t->data>x)
            v.push_back(t->data);
        t=t->next;
    }
    struct Node *l,*fin=NULL;
    l=fin;
    for(int i=0;i<v.size();i++){
        struct Node* tmp = new struct Node(v[i]);
        if(fin==NULL){
            fin=l=tmp;
            continue;
        }
        l->next=tmp;
        l=tmp;
    }
    return fin;
}
