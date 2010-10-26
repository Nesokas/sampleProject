#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {

	int color;
	int vruntime;
	int num_threads;
	queue_t *queue;
	struct node *parent;
	struct node *left;
	struct node *right;

};

struct rbt {

	struct node *root;
	struct node *first;
	struct node *nil;

};

struct rbt *init_tree();

void insert_node(struct rbt *tree, int vruntime, struct _sthread *thread);

struct _sthread *remove_node(struct rbt *tree, int vruntime);

void printTree(struct rbt *tree);

void destroy_tree(struct rbt *tree);
