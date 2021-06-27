#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include <fstream>
#include <iostream>
#include <queue>
#include <string>
#include "libAlgorithms.h"
#include "libExceptions.h"
#include "libTables.h"



class node
{
public:

	node(char letter,float prob);
	~node();
	//letter
	char let;
	//probability
	float prob;
	//pointer on left child of current node 
	node* left;
	//pointer on righ child of current node
	node* right;
};

class compNodes
{
public:
	//compares probabilities of nodes, needed for priority queue
	bool operator()(node* a, node* b)
	{
		return a->prob > b->prob;
	}
};
/// <summary>
/// Prints result for every letter in tree 
/// </summary>
/// <param name="tree"></param>
/// <param name="code">array to store results</param>
/// <param name="i">current position (starting from 0)</param>
/// <param name="out">file to save results in</param>
void printCode(node* tree, int* code, int i, std::ofstream& out);

/// <summary>
/// creates Huffman tree
/// </summary>
/// <param name="priorityQueue"></param>
/// <returns>pointer to a tree root</returns>
node* Huffman(std::priority_queue<node*, std::vector<node*>, compNodes> priorityQueue);

/// <summary>
/// creates queue for given data
/// </summary>
/// <param name="n">amount of nodes to create</param>
/// <param name="in">file we take data from</param>
/// <param name="let">char array in which we save letters into</param>
/// <param name="prob">int array in which we save probability into</param>
/// <returns>priority queue</returns>
std::priority_queue<node*, std::vector<node*>, compNodes> declQueue(int n, std::ifstream& in, char* let, float* prob);
#endif