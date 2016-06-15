#include "DivideAndConquer.h"

//pre: DQ is a valid instance of DivideAndConquer, and p is a valid vector of
//  Element
//post: a solved version of p is returned
template<typename Element>
vector<Element> DivideAndConquer<Element>::solve(vector <Element> p)
{
    if (isSimple(p))
        return simplySolve(p);
    else
    {
        vector<vector<Element> > sol;
        vector<vector<Element> > sp = decompose(p);
        for (int i = 0; i < sp.size(); i++)
        {
            sol.push_back(solve(sp[i]));
        }

        return combine(sol);
    }
}
