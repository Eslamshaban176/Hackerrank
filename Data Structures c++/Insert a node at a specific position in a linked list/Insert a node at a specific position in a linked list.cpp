

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    if(position == 0){
        temp->next = llist;
        llist = temp;
    }else{
        SinglyLinkedListNode *pre ,*newNode = llist;
        for (int i = 0; i < position && newNode->next != NULL; i++) {
            pre = newNode;
            newNode = newNode->next;
        }
        temp->next = pre->next;
        pre->next = temp;
    }
    return llist;
}

