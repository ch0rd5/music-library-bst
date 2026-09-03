#ifndef BST_H
#define BST_H

#include <cstddef>

template <typename T>
class BST
{
private:
    struct Node
    {
        T data;
        Node* left;
        Node* right;

        Node(const T& value)
            : data(value), left(nullptr), right(nullptr)
        {
        }
    };

    Node* root;
    std::size_t nodeCount;

    bool insert(Node*& node, const T& value)
    {
        if (node == nullptr)
        {
            node = new Node(value);
            ++nodeCount;
            return true;
        }

        if (value == node->data)
        {
            return false;
        }

        if (value < node->data)
        {
            return insert(node->left, value);
        }

        return insert(node->right, value);
    }

    bool contains(const Node* node, const T& value) const
    {
        if (node == nullptr)
        {
            return false;
        }

        if (value == node->data)
        {
            return true;
        }

        if (value < node->data)
        {
            return contains(node->left, value);
        }

        return contains(node->right, value);
    }

public:
    BST()
        : root(nullptr), nodeCount(0)
    {
    }

    bool empty() const
    {
        return root == nullptr;
    }

    std::size_t size() const
    {
        return nodeCount;
    }

    bool insert(const T& value)
    {
        return insert(root, value);
    }

    bool contains(const T& value) const
    {
        return contains(root, value);
    }
};

#endif