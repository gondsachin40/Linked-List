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
int size(Node *head){
    int n = 0;
    while(head != NULL){
        head = head->next;
        n++;
    }
    return n;
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
    cout << size(head) << "\n";
}
