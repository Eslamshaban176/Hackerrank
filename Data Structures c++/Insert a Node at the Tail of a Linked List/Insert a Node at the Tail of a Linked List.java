

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail
(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);

    if(head == nullptr){
        head = temp;
    }else{
            SinglyLinkedListNode* temp2 = head;
            while (temp2->next != nullptr) {
                temp2 = temp2->next;
            }
            temp2->next = temp;
        }
    return head;
}

