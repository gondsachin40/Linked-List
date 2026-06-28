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
void Print(Node *head){
    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "X" << "\n";
}
int main() {
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
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
    Print(head);

}
