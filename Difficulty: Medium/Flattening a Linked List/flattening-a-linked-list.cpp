class Solution {
  public:

    // Step 1: collect all values
    void collect(Node* root, vector<int>& temp) {
        if (root == NULL) return;

        temp.push_back(root->data);
        collect(root->bottom, temp);
        collect(root->next, temp);
    }

    Node* createList(vector<int>& temp) {
        if (temp.size() == 0) return NULL;

        Node* head = new Node(temp[0]);
        Node* curr = head;

        for (int i = 1; i < temp.size(); i++) {
            curr->bottom = new Node(temp[i]);
            curr = curr->bottom;
        }
        return head;
    }

    Node* flatten(Node* root) {
        vector<int> temp;

        collect(root, temp);

        sort(temp.begin(), temp.end());

        return createList(temp);
    }
};
