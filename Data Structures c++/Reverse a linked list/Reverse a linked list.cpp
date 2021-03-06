

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

    if(llist->next == NULL || llist == NULL){
      return llist;  
    } 
    SinglyLinkedListNode* temp = reverse(llist->next);
    llist->next->next = llist ;
    llist->next = NULL;
    return temp;
}

