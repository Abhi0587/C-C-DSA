struct ListNode* removeElements(struct ListNode* head, int val) {

    while(head!=NULL && head->val==val){
        struct ListNode* temp=head;
        head=head->next;
        free(temp);
    }

    if(head==NULL){
        return NULL;
    }
    struct ListNode* p=head;
    while(p!=NULL && p->next!=NULL){
        if(p->next->val==val){
            struct ListNode* q=p->next;
            p->next=q->next;
            free(q);
        }
        else
        {
        p=p->next;
        }
       
    }
     return head;
    
}