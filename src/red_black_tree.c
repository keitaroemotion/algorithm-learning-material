#include "red_black_tree.h"

struct t_red_black_node {
    enum { red, black } colour;
    void   *item;
    struct t_red_black_node *left,
                            *right,
                            *parent;
};
