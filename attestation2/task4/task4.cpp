#include <iostream>
#include <string>

struct node
{
    int data;
    node *left;
    node *right;
};

class binary_tree
{
    node* root;

    node* create(int data)
    {
        node* new_node = new node;
        new_node->data = data;
        new_node->left = nullptr;
        new_node->right = nullptr;
        return new_node;
    }

    void remove(node* n)
    {
        if (n == nullptr)
            return;
        remove(n->left);
        remove(n->right);
        delete n;
    }

    void print_inorder(node* n)
    {
        if (n == nullptr)
            return;
        print_inorder(n->left);
        std::cout << n->data << " ";
        print_inorder(n->right);
    }

    void print_preorder(node* n)
    {
        if (n == nullptr)
            return;
        std::cout << n->data << " ";
        print_preorder(n->left);
        print_preorder(n->right);
    }

public:
    binary_tree() : root(nullptr) {}

    ~binary_tree()
    {
        remove(root);
    }

    void insert(int data){
        if(root == nullptr){
            root = create(data);
            return;
        }
        node* temp = root;
        while(true){
            if(data < temp->data){
                if(temp->left == nullptr){
                    temp->left = create(data);
                    return;
                }
                temp = temp->left;
            }
            else{
                if(temp->right == nullptr){
                    temp->right = create(data);
                    return;
                }
                temp = temp->right;
            }
        }
        
    }

    node* find(int data){
        node* temp = root;
        while(temp != nullptr){
            if(data == temp->data)
                return temp;
            if(data < temp->data)
                temp = temp->left;
            else
                temp = temp->right;
        }
        return nullptr;
    }

    void print_inorder(){
        print_inorder(root);
    }

    void print_preorder(){
        print_preorder(root);
    }
};

int main() {
    binary_tree tree;
    int m, n;
    std::string command;

    std::cin >> m;

    while(m --){
        std::cin >> command >> n;

        if(command == "ADD") {
            tree.insert(n);
        }
    }

    tree.print_preorder();
    return 0;
}