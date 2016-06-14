#pragma once
#include "DivideAndConquer.h"
using namespace std;

template<typename Element>
class MergeSort : public DivideAndConquer<Element>
{
	public:
		//pre	: 
		//post	: MergeSort MS is generated, which is a valid instance
		MergeSort();

		//pre	: MS is a valid MergeSort instance
		//post	: MS no longer exists
		~MergeSort();

	protected:
		//pre:	MS is a valid MergeSort instance, and p is a valid vector of elements
		//post:	true is returned if p has a size of one. false otherwise.
		virtual bool isSimple(vector<Element> p);

		//pre:	MS is a valid MergeSort instance, and p is a valid vector of elements.
		//post:	p is returned.
		virtual vector<Element> simplySolve(vector<Element> p);

		//pre:	MS is a valid MergeSort instance, and p is a valid vector of elements.
		//post:	p is split in two, and a vector composed of the 2 resulting vectors is returned
		virtual vector<vector<Element> > decompose(vector<Element> p);

		//pre:	MS is a valid MergeSort instance, and p is a valid vector with size 2 of vectors of elements.
		//post:	the two vectors are combined into one vector, and that vector is returned
		virtual vector<Element> combine(vector<vector<Element> > p);
};

#ifdef MERGE_SORT
#include "MergeSort.cpp"
#endif