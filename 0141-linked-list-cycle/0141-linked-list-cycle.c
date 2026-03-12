bool hasCycle(struct ListNode *head) {

    struct ListNode *p, *q;

    if(head == NULL || head->next == NULL)
        return false;

    p = q = head;

    do{
        p = p->next;
        q = q->next;
        q = (q != NULL) ? q->next : NULL;

        if(p == q)
            return true;

    }while(p != NULL && q != NULL);

    return false;
}