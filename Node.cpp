#include "Node.h"
#include <string>
#include <iostream>

Node::Node(unsigned id, std::string data)
{
    this->id = id;
    this->left = NULL;
    this->right = NULL;
    this->data = data;
    //ctor
}

Node::~Node()
{
    //dtor
}

unsigned int Node::getID() {
    return this->id;
}

void Node::setLeft(Node *node) {
    this->left = node;
}

void Node::setRight(Node *node) {
    this->right = node;
}

Node* Node::getLeft() {
    return this->left;
}

Node* Node::getRight() {
    return this->right;
}

void Node::setData(std::string data) {
    this->data = data;
}

std::string Node::getData() {
    return this->data;
}
