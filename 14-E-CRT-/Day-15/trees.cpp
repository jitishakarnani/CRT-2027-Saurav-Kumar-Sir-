#include <iostream>
using namespace std;

class TreeNode {
private:
    int data;
    TreeNode* left;
    TreeNode* right;

public:
    TreeNode(int x) {
        this->data = x;
        left = right = nullptr;
    }

    int getData()           { return data; }
    TreeNode* getLeft()     { return left; }
    TreeNode* getRight()    { return right; }

    void setLeft(TreeNode* node)  { left = node; }
    void setRight(TreeNode* node) { right = node; }
};

int main() {
    TreeNode* T1 = new TreeNode(1);
    TreeNode* T2 = new TreeNode(2);  
    TreeNode* T3 = new TreeNode(3);  

    T1->setLeft(T2);   
    T1->setRight(T3);
    
    cout << T1->getData() << " "
         << T1->getLeft()->getData() << " "
         << T1->getRight()->getData() << endl;

    
    delete T1; delete T2; delete T3;
    return 0;
}

