//
// Created by Bryan on 9/29/2017.
//

#ifndef LAB5_STACKS_AND_QUEUES_POSTFIX_NODE_H
#define LAB5_STACKS_AND_QUEUES_POSTFIX_NODE_H

#include <string>

class node {
public:
    std::string data;
    node * next;

    node(const std::string &data);
};


#endif //LAB5_STACKS_AND_QUEUES_POSTFIX_NODE_H