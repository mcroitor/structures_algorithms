#include <iostream>
#include <string>

struct node
{
    int value;
    node *left;
    node *right;
};

class binary_tree
{
    node *root;

    node *create(int value)
    {
        node *new_node = new node;
        new_node->value = value;
        new_node->left = nullptr;
        new_node->right = nullptr;
        return new_node;
    }

    node *parent(node *n)
    {
        if (n == root)
        {
            return nullptr;
        }
        node *p = root;
        while (p->left != n && p->right != n)
        {
            if (n->value < p->value)
            {
                p = p->left;
            }
            else
            {
                p = p->right;
            }
        }
        return p;
    }

    void remove(node *n)
    {
        if (n == nullptr)
        {
            return;
        }
        remove(n->left);
        remove(n->right);

        node *p = parent(n);
        if (p == nullptr)
        {
            root = nullptr;
            return;
        }
        if (p->left == n)
        {
            p->left = nullptr;
        }
        else
        {
            p->right = nullptr;
        }
        delete n;
    }

    void print_inorder(node *n)
    {
        if (n == nullptr)
        {
            return;
        }
        this->print_inorder(n->left);
        std::cout << n->value << " ";
        this->print_inorder(n->right);
    }

    void print_preorder(node *n)
    {
        if (n == nullptr)
        {
            return;
        }
        std::cout << n->value << " ";
        this->print_preorder(n->left);
        this->print_preorder(n->right);
    }

public:
    binary_tree() : root(nullptr) {}

    ~binary_tree()
    {
        this->remove(root);
    }

    void insert(int value)
    {
        if (root == nullptr)
        {
            root = this->create(value);
            return;
        }
        node *temp = root;
        while (true)
        {
            if (value < temp->value)
            {
                if (temp->left == nullptr)
                {
                    temp->left = this->create(value);
                    return;
                }
                temp = temp->left;
            }
            else
            {
                if (temp->right == nullptr)
                {
                    temp->right = this->create(value);
                    return;
                }
                temp = temp->right;
            }
        }
    }

    node *find(int value)
    {
        node *temp = root;
        while (temp != nullptr)
        {
            if (value == temp->value)
                return temp;
            if (value < temp->value)
                temp = temp->left;
            else
                temp = temp->right;
        }
        return nullptr;
    }

    void remove(int value)
    {
        node *temp = this->find(value);
        this->remove(temp);
    }

    void print_inorder()
    {
        this->print_inorder(root);
    }

    void print_preorder()
    {
        if(root == nullptr)
        {
            std::cout << "empty";
        }
        this->print_preorder(root);
    }
};

int main()
{
    binary_tree tree;
    int m, n;
    std::string command;

    std::cin >> m;

    while (m--)
    {
        std::cin >> command >> n;

        if (command == "INSERT")
        {
            tree.insert(n);
        }
        else if (command == "REMOVE")
        {
            tree.remove(n);
        }
    }

    tree.print_preorder();
    return 0;
}