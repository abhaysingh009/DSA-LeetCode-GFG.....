/* Structure of the node of the list is
class DLLNode {
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  private:
   
    DLLNode* splitList(DLLNode* head) {
        if (!head || !head->next) return nullptr;
        DLLNode* slow = head;
        DLLNode* fast = head;
    
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        DLLNode* second = slow->next;
        slow->next = nullptr;
        if (second) second->prev = nullptr;
        return second;
    }

    
    DLLNode* mergeLists(DLLNode* a, DLLNode* b) {
        if (!a) return b;
        if (!b) return a;

        DLLNode* head = nullptr;
        DLLNode* tail = nullptr;

        if (a->data <= b->data) {
            head = tail = a;
            a = a->next;
        } else {
            head = tail = b;
            b = b->next;
        }
        head->prev = nullptr; 

        while (a && b) {
            if (a->data <= b->data) {
                tail->next = a;
                a->prev = tail;
                tail = a;
                a = a->next;
            } else {
                tail->next = b;
                b->prev = tail;
                tail = b;
                b = b->next;
            }
        }

        
        if (a) {
            tail->next = a;
            a->prev = tail;
        } else if (b) {
            tail->next = b;
            b->prev = tail;
        }

        return head;
    }

    
    DLLNode* mergeSort(DLLNode* head) {
        if (!head || !head->next) return head;
        DLLNode* second = splitList(head);
        DLLNode* left = mergeSort(head);
        DLLNode* right = mergeSort(second);
        return mergeLists(left, right);
    }

  public:
    DLLNode *sortDoubly(DLLNode *head) {
        return mergeSort(head);
    }
};
