#include <algorithm>

void reverse(int* ps, int size)
{
	for (int* e = ps + size - 1; ps < e; ps++, e--)
	{
		//std::swap(*ps, *e);
		int temp = *ps;
		*ps = *e;
		*e = temp;
	}
}

int main()
{
	int array[] = { 5,6,7,8,9 };
	reverse(array, 5);

	return 0;
}