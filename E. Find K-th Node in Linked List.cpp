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
int findKth(Node* head, int k){
    for(int i = 1;i < k;i++){
        head = head->next;
    }
    return head->val;
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
    if(k <= n && k >= 1)
    cout << findKth(head , k) << "\n";
    else
    cout << -1 << "\n";
}
