#include <iostream>
#include <vector>
#include "merge.h"

using namespace sort;

/**
 * @brief This will sort a vector using the insertion sort algorithm
 *
 * @param unsorted
 * @return vector<unsigned long>
 */
vector<unsigned long> merge::sort(vector<unsigned long> unsorted)
{
	vector<unsigned long> a = unsorted;
	vector<unsigned long> b = unsorted;

	split(b, 0, a.size(), a);

	return a;
}

/**
 * @brief Split the vector
 *
 * @param b
 * @param begin
 * @param end
 * @param a
 */
void merge::split(vector<unsigned long> &b, unsigned long begin, unsigned long end, vector<unsigned long> &a)
{
	if (end - begin <= 1)
		return;

	unsigned long middle = (end + begin) / 2;

	split(a, begin, middle, b);
	split(a, middle, end, b);
	merge_vector(b, begin, middle, end, a);
}

/**
 * @brief merge
 *
 * @param a
 * @param begin
 * @param middle
 * @param end
 * @param b
 */
void merge::merge_vector(vector<unsigned long> &a, unsigned long begin, unsigned long middle, unsigned long end, vector<unsigned long> &b)
{
	unsigned long i = begin;
	unsigned long j = middle;

	for (unsigned long k = begin; k < end; k++)
	{
		if (i < middle && (j >= end || a[i] <= a[j]))
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] = a[j];
			j++;
		}
	}
}
