struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode temp;
    temp.next=head;

    struct ListNode* slow=&temp;
    struct ListNode* fast=&temp;

    for(int i=0;i<n;i++){
        fast=fast->next;
    }

    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

    struct ListNode* q=slow->next;
    slow->next=q->next;
    free(q);

    return temp.next;


    
}