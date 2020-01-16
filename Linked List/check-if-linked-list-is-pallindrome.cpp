bool isPalindrome(Node *head)
{
    int n = 0;
    Node *temp = head;
    while(temp != nullptr) {
        n++;
        temp = temp->next;
    }
    stack<int> listData;
    for(int i = 0; i < n / 2; ++i) {
        listData.push(head->data);
        head = head->next;
    }
    if(n%2) head = head->next;
    for(int i = 0; i < n / 2; ++i) {
        if(listData.top() == head->data) listData.pop();
        head = head->next;
    }
    return listData.empty();
}
