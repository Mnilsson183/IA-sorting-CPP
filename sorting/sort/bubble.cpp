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

	for (unsigned long i = 0; i < a.size(); i++)
	{
		for (unsigned long j = 0; j < a.size(); j++)
		{
			if (a[j] > a[j + 1])
			{
				unsigned long tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	return a;
}
// void merge::sort(vector<unsigned long> &b, unsigned long begin, unsigned long end, vector<unsigned long> &a)
// {
// 	for (int i = 0; i < ; i++)
// 	{
// 		for (int j = 0; j < ; j++)
// 		{
// 			if ([j] > [j + 1])
// 			{
// 				unsigned long tmp = [j];
// 				[j] = [j + 1];
// 				[j + 1] = tmp
// 			}
// 		}
// 	}
// }

// /**
//  * @brief Split the vector
//  *
//  * @param b
//  * @param begin
//  * @param end
//  * @param a
//  */
// void merge::split(vector<unsigned long> &b, unsigned long begin, unsigned long end, vector<unsigned long> &a)
// {
//
// 	if (end - begin <= 1)
// 		return;

// 	unsigned long middle = (end + begin) / 2;

// 	split(a, begin, middle, b);
// 	split(a, middle, end, b);
// 	merge_vector(b, begin, middle, end, a);
// }

// /**
//  * @brief merge
//  *
//  * @param a
//  * @param begin
//  * @param middle
//  * @param end
//  * @param b
//  */
// void merge::merge_vector(vector<unsigned long> &a, unsigned long begin, unsigned long middle, unsigned long end, vector<unsigned long> &b)
// {
// 	unsigned long i = begin;
// 	unsigned long j = middle;

// 	for (unsigned long k = begin; k < end; k++)
// 	{
// 		if (i < middle && (j >= end || a[i] <= a[j]))
// 		{
// 			b[k] = a[i];
// 			i++;
// 		}
// 		else
// 		{
// 			b[k] = a[j];
// 			j++;
// 		}
// 	}
// }
