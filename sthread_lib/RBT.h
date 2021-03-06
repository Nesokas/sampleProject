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

struct rbt *rbt_init();

void rbt_insert(struct rbt *tree, int vruntime, struct _sthread *thread);

struct _sthread *rbt_remove(struct rbt *tree, int vruntime);

void rbt_destroy(struct rbt *tree);

int rbt_is_empty(struct rbt *tree);

struct _sthread *rbt_remove_first(struct rbt *tree);

struct node *rbt_find(struct rbt *tree, int vruntime);

void printTree(struct rbt *tree);
