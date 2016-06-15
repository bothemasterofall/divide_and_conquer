#include "MergeSort.h"
using namespace std;

//pre: 
//post: MergeSort MS is generated, which is a valid instance
template<typename Element>
MergeSort<Element>::MergeSort()
{
}

//pre: MS is a valid MergeSort instance
//post: MS no longer exists
template<typename Element>
MergeSort<Element>::~MergeSort()
{
}

//pre: MS is a valid MergeSort instance, and p is a valid vector of elements
//post: true is returned if p has a size of one. false otherwise.
template<typename Element>
bool MergeSort<Element>::isSimple(vector<Element> p)
{
    return (p.size() == 1);
}

//pre: MS is a valid MergeSort instance, and p is a valid vector of elements.
//post: p is returned.
template<typename Element>
vector<Element> MergeSort<Element>::simplySolve(vector<Element> p)
{
    return p;
}

//pre: MS is a valid MergeSort instance, and p is a valid vector of elements.
//post: p is split in two, and a vector composed of the 2 resulting vectors is
//  returned
template<typename Element>
vector <vector<Element> > MergeSort<Element>::decompose(vector<Element> p)
{
    int mid = p.size()/2;
    vector<vector<Element> > decomp;
    vector<Element> l;
    vector<Element> r;
    for (int i = 0; i < mid; i++)
    {
        l.push_back(p[i]);
    }
    for (int i = mid; i < p.size(); i++)
    {
        r.push_back(p[i]);
    }

    decomp.push_back(l);
    decomp.push_back(r);
    return decomp;
}

//pre: MS is a valid MergeSort instance, and p is a valid vector with size 2 of
//  vectors of elements.
//post: the two vectors are combined into one vector, and that vector is
//  returned
template<typename Element>
vector<Element> MergeSort<Element>::combine(vector<vector<Element> > p)
{
    vector<Element>sort;
    int l = 0, r = 0;

    while (sort.size() < p[0].size() + p[1].size())
    {
        if (l < p[0].size() && r < p[1].size())
        {
            if (p[0][l] < p[1][r])
            {
                sort.push_back(p[0][l]);
                l++;
            }
            else
            {
                sort.push_back(p[1][r]);
                r++;
            }
        }
        else
        {
            if (l < p[0].size())
            {
                sort.push_back(p[0][l]);
                l++;
            }
            else
            {
                sort.push_back(p[1][r]);
                r++;
            }
        }
    }
    return sort;
}
