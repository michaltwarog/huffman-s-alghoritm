#include "libs/libAlgorithms.h"

int main()
{
	try {
		std::ifstream in;
		openFile(in);

		int n;
		in >> n;
		notPositiveInt(n);

		char* let = createCharTable1D(n);
		float* prob = createFloatTable1D(n);

		//1 - data type , 2 - container , 3- the comparison function object
		std::priority_queue<node*,std::vector<node*>,compNodes> priorityQueue=declQueue(n, in,let, prob);

		node* tree = Huffman(priorityQueue);

		int* code = createTable1D(n-1);
		int i = 0;

		std::ofstream out;
		createFile(out);

		printCode(tree,code,i,out);

   }
	catch(std::exception &e){
		std::cerr << e.what();
	}
}

