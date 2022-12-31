#include <iostream>
#include <vector>
#include "insertion.h"

using namespace sort;

/**
 * @brief This will sort a vector using the insertion sort algorithm
 *
 * @param unsorted
 * @return vector<unsigned long>
 */
vector<unsigned long> insertion::sort(vector<unsigned long> unsorted)
{
	vector<unsigned long> a = unsorted;

	// key is the value being picked up to compare with the others

	unsigned long key, j;
	for (unsigned long i = 1; i < a.size(); i++)
	{
		key = a[i];
		j = i - 1;
		while (j > 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
	return a;
}