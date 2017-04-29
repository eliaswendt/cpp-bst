#ifndef NODE_H
#define NODE_H

#include <string>


class Node
{
    public:
        Node(unsigned int id);
        virtual ~Node();

        unsigned int getID();
        void setLeft(Node *node);
        void setRight(Node *node);
        Node* getLeft();
        Node* getRight();
        void setData(std::string data);
        std::string getData();

    private:

        unsigned int id;

        Node *left;
        Node *right;

        std::string data;
};

#endif // NODE_H
