#include "Tree.h"
#include "Node.h"

// set root
Tree::Tree(Node *root)
: root(root)
{
    this->root = root;
    this->nodeCount = 1;
    //ctor
}

Tree::~Tree()
{
    //dtor
}


bool Tree::insert(Node *node) {

    Node *current = root;
    unsigned nodeID = node->getID();
    unsigned currentNodeID;

    while (true) {

        // buffer of current node
        currentNodeID = current->getID();

        // nodeID is smaller than current nodeID
        if (nodeID < currentNodeID) {

            // left child is not set
            if (current->getLeft() == NULL) {
                current->setLeft(node);

                this->nodeCount++;
                return true;
            }

            // left child is not empty
            current = current->getLeft();
        }

        // nodeID is taller than current nodeID
        else if (nodeID > currentNodeID) {

            // right child is not set
            if (current->getRight() == NULL) {
                current->setRight(node);

                this->nodeCount++;
                return true;
            }

            // right child is not empty
            else {
                current = current->getLeft();
            }
        }

        // nodeID already in use
        return false;
    }
}

{
bool Tree::remove(unsigned nodeID) {

    Node *current = root;
    Node *parent;

    bool parentSide; // false = left, true = right

    while(true) {

        if (nodeID < current->getID()) {

            // id does not exist in tree
            if (current->getLeft() == NULL) {

                return false;
            }

            parent = current;
            current = current->getLeft();

            parentSide = false;
        }
        else if (nodeID > current->getID()) {

            // id does not exist in tree
            if (current->getRight() == NULL) {

                return false;
            }
            parent = current;
            current = current->getRight();

            parentSide = true;
        }

        // zu loeschender Node wurde gefunden
        else {


            Node *left = current->getLeft();
            Node *right = current->getRight();

            // if node is a leaf
            if (left == NULL && right == NULL) {


                if (parentSide) {
                    parent->setLeft(NULL);
                }
                else {
                    parent->setRight(NULL);
                }
            }

            // if node has left child
            else if (left != NULL && right == NULL) {

                if (!parentSide) {
                    parent->setLeft(current->getLeft());
                }
                else {
                    parent->setRight(current->getLeft());
                }
            }

            // if node has right child
            else if (left == NULL && right != NULL) {

                if (!parentSide) {
                    parent->setLeft(current->getRight());
                }
                else {
                    parent->setRight(current->getRight());
                }
            }


            // if node has left AND right child
            else {

                parent






            }
        }

        delete current;
        return true;
    }
}





bool Tree::remove(unsigned nodeID) {

    Node *current;
    Node *parent;

    while (true) {


        /* PART 1: Find affected Node */

        //
        if (current)
    }



}














Node* Tree::search(unsigned int nodeID) {

    Node *current = root;

    while (true) {

        // left
        if (nodeID < current->getID()) {

            if (current == NULL) {
                return NULL;
            }
            else {
                current = current->getLeft();
            }
        }

        // right
        else if (nodeID > current->getID()) {

            if (current == NULL) {
                return NULL;
            }
            else {
                current = current->getRight();
            }
        }

        // nodeID == current.getID()
        else {
            return current;
        }
    }
}


void Tree::balance() {

}
