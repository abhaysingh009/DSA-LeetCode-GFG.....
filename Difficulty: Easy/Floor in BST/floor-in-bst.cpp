class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        int ans = -1;

        while (root != NULL) {
            if (root->data == k) {
                return root->data;
            }
            else if (root->data < k) {
                ans = root->data;
                root = root->right;
            }
            else {
                root = root->left;
            }
        }

        return ans;
    }
};