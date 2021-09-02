ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *nd1,*nd2,*lastB,*lastA; int cnt1=1,cnt2=1;
        for(lastA=headA;lastA->next!=NULL;cnt1++,lastA=lastA->next);
        for(lastB=headB;lastB->next!=NULL;cnt2++,lastB=lastB->next);
        if(lastA!=lastB)
            return NULL;
        int cut = abs(cnt1-cnt2);
        nd1 = (cnt1>=cnt2)?headA:headB;
        nd2 = (cnt1<cnt2)?headA:headB;
        while(cut--)
            nd1=nd1->next;
        while(nd1!=nd2){
            nd1=nd1->next;
            nd2=nd2->next;
        }
        return nd1;
    }
