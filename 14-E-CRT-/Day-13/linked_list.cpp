#include <iostream>
using namespace std;

class Node {
public:           
    int data;
    Node *next;

    Node(int data) {
        this->data = data;   
        this->next = NULL;
    }
};

void PrintNode(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(5);  
    Node *n2 = new Node(6);
    Node *n3 = new Node(7);

    n1->next = n2;          
    n2->next = n3;
 
    
    PrintNode(n1);
    return 0;

}