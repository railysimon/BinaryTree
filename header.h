#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class tree
{
public:
        void Create(int value, Node **Tree);
        void Show(Node *Tree, string range);
        void PrefixOrder(Node *Tree);
        void PostfixOrder(Node *Tree);
        void InfixOrder(Node *Tree);
};

void tree::Create(int value, Node **Tree)
{
    if (!(*Tree))
    {
        (*Tree) = new Node;
        (*Tree)->data = value;
        (*Tree)->left = (*Tree)->right = nullptr;
        return;
    }

    if (value > (*Tree)->data) Create(value, &(*Tree)->right);
    else Create(value, &(*Tree)->left);

}

void tree::Show(Node *Tree, string range)
{
    if (Tree)
    {
       cout << range << Tree->data << endl;
       Show(Tree->left, "left: ");
       Show(Tree->right, "right: ");
    }
}

void tree::PrefixOrder(Node *Tree)
{
    if (Tree)
    {
        cout << Tree->data << "  ";
        PrefixOrder(Tree->left);
        PrefixOrder(Tree->right);
    }
}
void tree::PostfixOrder(Node *Tree)
{
    if (Tree)
    {
        PostfixOrder(Tree->left);
        PostfixOrder(Tree->right);
        cout << Tree->data << "  ";
    }
}
void tree::InfixOrder(Node *Tree)
{
    if (Tree)
    {
        InfixOrder(Tree->left);
        cout << Tree->data << "  ";
        InfixOrder(Tree->right);
    }
}

#endif // HEADER_H
