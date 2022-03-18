

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode* temp = llist;
    if(!llist) return 0;
    int cnt = 0;
    while (temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }
   temp=llist;
   for (int i = 0; i < abs(positionFromTail-cnt); i++) {
       temp = temp->next;
   }
   return temp->data;
}