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
int minimum(Node *head){
    int n = 0;
    int minn = INT_MAX; 
    while(head != NULL){
        minn = min(minn , head->val);
        head = head->next;
    }
    return minn;
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
    if(n != 0)
    cout << minimum(head) << "\n";
    else
    cout << -1 << "\n";
}
