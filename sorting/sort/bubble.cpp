#include <iostream>
#include <vector>
#include "bubble.h"

using namespace sort;

/**
 * @brief This will sort a vector using the bubble sort algorithm
 *
 * @param unsorted
 * @return vector<unsigned long>
 */
vector<unsigned long> bubble::sort(vector<unsigned long> unsorted)
{
	vector<unsigned long> a = unsorted;
	bool swap = true;
	while (swap)
	{
		swap = false;
		for (unsigned long i = 0; i < a.size() - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				unsigned long tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				swap = true;
			}
		}
	}

	return a;
}