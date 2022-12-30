using namespace std;

/**
 * @brief This will generate random data to sort and validate it
 *
 */
namespace util
{
	class generate
	{
	public:
		vector<unsigned long> raw(unsigned long size);
		bool validate(vector<unsigned long> unsorted, vector<unsigned long> sorted);
	};
}