// [Medium]
int getListLength(struct ListNode* head) {
    int len = 1;
    if(head == NULL) return len;
    while (head->next != NULL){
        head = head->next;
        len++;
    }    
    return len;
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    int length = getListLength(head);
    
    if (length == n) 
      return head->next;
    
    struct ListNode* current = head;
    for (int i = 1; i < length - n; i++) 
        current = current->next;
    current->next = current->next->next;
    
    return head;
}
