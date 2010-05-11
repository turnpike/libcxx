//===----------------------------------------------------------------------===//
//
// ΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚΚThe LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <random>

// class bernoulli_distribution

// template<class _URNG> result_type operator()(_URNG& g);

#include <random>
#include <cassert>

int main()
{
    {
        typedef std::uniform_int_distribution<> D;
        typedef std::minstd_rand0 G;
        G g;
        D d(.75);
        int count = 0;
        for (int i = 0; i < 10000; ++i)
        {
            bool u = d(g);
            if (u)
                ++count;
        }
        assert(count > 7400);
    }
}
