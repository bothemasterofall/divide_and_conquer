#pragma once
#include <vector>
using namespace std;

template <typename Element>
class DivideAndConquer
{
    public:
        //pre: DQ is a valid instance of DivideAndConquer
        //pst: DQ no longer exists.
        ~DivideAndConquer(){}

        //pre: DQ is a valid instance of DivideAndConquer, and p is a valid
        //  vector of Element
        //post: a solved version of p is returned
        vector<Element> solve(vector<Element> p);

    protected:
        //pre: p is a valid vector of Element, and DQ is a valid instance of
        //  DivideAndConquer
        //post: true returned if p is simple enough. false otherwise.
        virtual bool isSimple(vector<Element> p) = 0;

        //pre: DQ is a valid instance of DivideAndConquer, and p is a valid
        //  vector of Element
        //post: some operation is performed on p, returning a valid vector of
        //  Elements
        virtual vector<Element> simplySolve(vector<Element> p) = 0;

        //pre: DQ is a valid instance of DivideAndConquer, and p is a valid
        //  vector of Element
        //post: p is somehow decomosed, and a vector of vectors of Element is
        //  returned
        virtual vector<vector<Element> > decompose(vector<Element> p) = 0;

        //pre: DQ is a valid instance of DivideAndConquer, and p is a valid
        //  vector of vectors of Element
        //post: the different vectors of p are combined somehow
        virtual vector<Element> combine(vector<vector<Element> > p) = 0;
};

#ifdef DIV_AND_CON
#include "DivideAndConquer.cpp"
#endif
