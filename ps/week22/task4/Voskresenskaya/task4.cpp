
#include "Array.h"
#include <iostream>

int main()
{
	Array <int> arr;
	arr.setSize(4, 5);
	arr.setSize(10, 5);
	std::cout << arr.getSize();
	/*std::cout << arr.getSize() << std::endl;*/
	/*arr.add(5);
	arr.add(5);
	arr.add(5);
	/*std::cout << arr.getUpperBound();
	std::cout << arr[1] << std::endl;*/
	/*std::cout << arr.getAt(2) << std::endl;*/
	/*arr.setAt(2, 6);
	/*std::cout << arr.getAt(2) << std::endl;
	std::cout << arr.getData() << std::endl;*/
	/*arr.insertAt(2, 2);
	/*std::cout << arr.getAt(1) << std::endl;
	std::cout << arr.getAt(2) << std::endl;
	std::cout << arr.getAt(3) << std::endl;*/
	/*arr.removeAt(3);
	std::cout << arr.getAt(0) << std::endl;
	std::cout << arr.getAt(1) << std::endl;
	std::cout << arr.getAt(2) << std::endl;
	Array <int> arr1;
	arr1 = arr;
	std::cout << arr1.getAt(0) << std::endl;
	std::cout << arr1.getAt(1) << std::endl;
	std::cout << arr1.getAt(2) << std::endl;*/

	return 0;
}


