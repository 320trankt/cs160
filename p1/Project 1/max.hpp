#ifndef _MAX_HPP
#define _MAX_HPP

#include "tree.hpp"
#include <climits>
// You will need to implement a complete visitor that
// finds the maximum element in the tree. You can use
// the print and sum visitors for reference.

// WRITEME
class MaxVisitor : public Visitor {
    public:
        int max;
        MaxVisitor() : max(INT_MIN) {}
        void visitNode(Node* node);
};

#endif
