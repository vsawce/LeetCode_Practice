#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode temp; //Mark left most position
    ListNode *h = &temp; //Linked list navigator
    unsigned char carry = 0, sum; //int unnecessary. Saves a few bytes
    while (l1 != nullptr || l2 != nullptr) {
        sum = carry;
        if (l1 != nullptr) //If l1 is longer than l2
            sum += l1->val;
        if (l2 != nullptr) //If l2 is longer than l1
            sum += l2->val;
        if (sum >= 10) { //If sum is 2 digits, carry needed
            carry = sum/10;
            sum %= 10;
        }
        else {
            carry = 0; //Sum is single digit, reset carry to 0
        }
        h->next = new ListNode(sum); //New node to the right. Next node equal to single digit
        h = h->next; //Move to next node
        if (l1 != nullptr) //If l1 is longer than l2, move to next node in l1
            l1 = l1->next;
        if (l2 != nullptr) //If l2 is longer than l1, move to next node in l2
            l2 = l2->next;
    }
    if (carry) { //If carry needed
        h->next = new ListNode(carry); //New node to the right if carry exists
    }
    return temp.next;
}

int main() {
    ListNode *tail1 = new ListNode(3);
    ListNode *middle1 = new ListNode(4, tail1);
    ListNode *head1 = new ListNode(2, middle1);

    ListNode *tail2 = new ListNode(4);
    ListNode *middle2 = new ListNode(6, tail2);
    ListNode *head2 = new ListNode(5, middle2);

    ListNode *a = new ListNode(9);
    ListNode *b = new ListNode(9, a);
    ListNode *c = new ListNode(9, b);
    ListNode *d = new ListNode(9, c);
    ListNode *e = new ListNode(9, d);
    ListNode *f = new ListNode(9, e);
    ListNode *g = new ListNode(9, f);

    ListNode *h = new ListNode(9);
    ListNode *i = new ListNode(9, h);
    ListNode *j = new ListNode(9, i);
    ListNode *k = new ListNode(9, j);

    
    //ListNode *lnptr = addTwoNumbers(head1, head2);
    ListNode *lnptr = addTwoNumbers(g, k);

    cout << "[";
    while (lnptr != nullptr) {
        cout << lnptr->val;
        lnptr = lnptr->next;
        if (lnptr != nullptr)
            cout << ", ";
    }
    cout << "]\n";

    return 0;
}