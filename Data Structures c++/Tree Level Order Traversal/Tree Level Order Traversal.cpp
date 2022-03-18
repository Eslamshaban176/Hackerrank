
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if(!root) return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left != nullptr)
                q.push(curr->left);
            if(curr->right != nullptr)
                q.push(curr->right);    
        }

    }

