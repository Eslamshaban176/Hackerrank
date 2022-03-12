

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode* head,*current,*temp1 = head1,*temp2 = head2;

    if(temp1->data <= temp2->data){
        current = temp1;
        temp1 = current->next;
    }else{
        current = temp2;
        temp2 = current->next;
    }
    head = current;
    while (temp1 && temp2) {
        if(temp1->data <= temp2->data){
            current->next = temp1;
            current = temp1;
            temp1 = current->next;
        }else{
            current->next = temp2;
            current = temp2;
            temp2 = current->next;
        }
    }
    if(!temp1) current->next = temp2;
    if(!temp2) current->next = temp1;
    return head;
}

