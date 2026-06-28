
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int x){
        val = x;
        next = NULL;
    }
};
/*
brute force approach
find size of linked list then search fro (n - k) node from start
*/

//now better maybe

Node *kthFromEnd(Node* head, int k){
    Node *slow = head;
    Node *fast = head;
    while(k-- > 0){
        fast = fast->next;
    }
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
int main() {
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    int target;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        Node *curr = new Node(x);
        if(head == NULL){
            head = new Node(x);
            tail = head;
        }else{
            tail->next = curr;
            tail = curr;
        }
    }
    int k;
    cin >> k;
    Node *ans = kthFromEnd(head , k);
    cout << ans->val << "\n";
}
