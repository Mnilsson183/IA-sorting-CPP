#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <vector>
#include "generate.h"

using namespace util;
using namespace std;

/**
 * @brief This will generate the unsorted vector
 *
 * @param size
 * @return vector<unsigned long>
 */
vector<unsigned long> generate::raw(unsigned long size)
{
	vector<unsigned long> raw_data(size);

	std::mt19937 gen32(time(nullptr));

	for (unsigned long i = 0; i < size; i++)
	{
		raw_data[i] = gen32();
	}

	return raw_data;
}

/**
 * @brief This will validate that the unsorted and sorted data contain the same information
 *
 * @param unsorted
 * @param sorted
 * @return true
 * @return false
 */
bool generate::validate(vector<unsigned long> unsorted, vector<unsigned long> sorted)
{
	if (unsorted.size() != sorted.size())
	{
		return false;
	}

	bool found;
	unsigned long i;
	for (vector<unsigned long>::iterator Iter = unsorted.begin(); Iter < unsorted.end(); Iter++)
	{
		found = false;
		i = 0;

		while (!found && (i < sorted.size()))
		{
			if (*Iter == sorted.at(i))
				found = true;

			i++;
		}

		if (!found)
			return false;
	}

	return true;
}
