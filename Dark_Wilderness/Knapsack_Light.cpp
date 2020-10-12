	//You found two items in a treasure chest!The first item weighs weight1and is worth value1, 
	//and the second item weighs weight2and is worth value2.What is the total maximum value of the items you can take with you, 
	//assuming that your max weight capacity is maxWand you can't come back for the items later?

	//Note that there are only two items and you can't bring more than one item of each type, 
	//i.e. you can't take two first items or two second items.

	//Example

	//For value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, and maxW = 8, the output should be
	//knapsackLight(value1, weight1, value2, weight2, maxW) = 10.

	//You can only carry the first item.

	//For value1 = 10, weight1 = 5, value2 = 6, weight2 = 4, and maxW = 9, the output should be
	//knapsackLight(value1, weight1, value2, weight2, maxW) = 16.

	//You're strong enough to take both of the items with you.

	//For value1 = 5, weight1 = 3, value2 = 7, weight2 = 4, and maxW = 6, the output should be
	//knapsackLight(value1, weight1, value2, weight2, maxW) = 7.

	//You can't take both items, but you can take any of them.


#include <iostream>

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
	
	if (maxW < weight1 && maxW < weight2)
		return 0;

	if (maxW < (weight1 + weight2))
	{
		if (maxW >= weight1 && maxW < weight2)
		{
			return value1;
		}
		else
		{
			if (maxW >= weight2 && maxW < weight1)
			{
				return value2;
			}
			else
			{
				return value1 > value2 ? value1 : value2;
			}
		}
	}

	if (maxW >= (weight1 + weight2))
		return value1 + value2;
}


int main() {
	int value1 = 15,
		weight1 = 2,
		value2 = 20,
		weight2 = 3,
		maxW = 2;

	std::cout << knapsackLight(value1, weight1, value2, weight2, maxW);
	return 0;
}
