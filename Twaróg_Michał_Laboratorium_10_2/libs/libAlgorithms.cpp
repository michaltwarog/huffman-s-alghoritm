#include "libAlgorithms.h"

void printCode(node* tree, int* code,int i, std::ofstream& out)
{
	if (tree->right)
	{
		code[i] = 1;
		printCode(tree->right, code, i + 1,out);
	}

	if (tree->left)
	{
		code[i] = 0;
		printCode(tree->left, code, i + 1,out);
	}

	if (!tree->left && !tree->right)
	{	
		out << tree->let << " ";

		for (int j = 0; j < i; j++)
				out << code[j];
		
	out << std::endl;
	}
}

node* Huffman(std::priority_queue<node*, std::vector<node*>, compNodes> priorityQueue) {

	while (priorityQueue.size()!=1)//there's more than one node
	{
		//taking t1 and t2 with lowest probability t1<=t2

		//taking first node and removing it from queue
		node* t1 = priorityQueue.top();
		priorityQueue.pop();

		//taking second node and removing it from queue
		node* t2 = priorityQueue.top();
		priorityQueue.pop();

		//createting node with children t1 and t2 with probability equal to p1 + p2
		node* newNode = new node('.', t1->prob + t2->prob);

		//giving adresses of children of compNode  
		newNode->left = t1;
		newNode->right = t2;

		priorityQueue.push(newNode);
	}
	
	return priorityQueue.top();
}

std::priority_queue<node*, std::vector<node*>, compNodes> declQueue(int n, std::ifstream& in, char* let,float* prob)
{
	std::priority_queue<node*, std::vector<node*>, compNodes> priorityQueue;

	for (int i = 0; i < n; i++)
	{
		in >> let[i];
		in >> prob[i];
		
		node* newNode = new node(let[i], prob[i]);

		priorityQueue.push(newNode);
	}
	return priorityQueue;
}

node::node(char let,float prob) :let(let),prob(prob)  {
	this->left = NULL;
	this->right = NULL;
}


node::~node()
{
}