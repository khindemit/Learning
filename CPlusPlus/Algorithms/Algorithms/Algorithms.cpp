// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iterator>
#include <iostream>
#include "bubble_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"


void sort_vector(std::vector<int> &vi)
{
    ::std::cout << "vector: ";
    ::std::copy(vi.cbegin(), vi.cend(), ::std::ostream_iterator<int>(::std::cout, " "));
    merge_sort(vi.begin(), vi.end());
    ::std::cout << "\nsorted: ";
    ::std::copy(vi.cbegin(), vi.cend(), ::std::ostream_iterator<int>(::std::cout, " "));
    ::std::cout << ::std::endl;
}

int main()
{
    ::std::vector<int> vi{ 3,2,1,5,4 };
    ::std::vector<int> vie{ 3,2,1,5,4,2 };
    sort_vector(vi);
    sort_vector(vie);
    return 0;
}

