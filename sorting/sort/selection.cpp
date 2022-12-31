#include <iostream>
#include <vector>
#include "selection.h"

using namespace sort;

/**
 * @brief This will sort a vector using the selection sort algorithm
 *
 * @param unsorted
 * @return vector<unsigned long>
 */
vector<unsigned long> selection::sort(vector<unsigned long> unsorted)
{
	vector<unsigned long> a = unsorted;

	unsigned long key, j;
	for (unsigned long i = 1; i < a.size(); i++)
	{
		key = a[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
	return a;
}