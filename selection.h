#ifndef SELECTION_H
#define SELECTION_H

#include <iostream>


template <class T>
class Selection {
	private:
		
	public:
		Selection(T * nums, int count) {
			// Create ints i, j, and iMin and T temp
			// iMin keeps track of index of minimum value each loop through
			int i, j, iMin;
			T temp;
			
			// Loop through array length - 1 using j counter
			for (j = 0; j < count-1; j++) {
				// Set iMin to be j
				iMin = j;
				// Loop starting 1 above j through array length using i counter
				for (i = j + 1; i < count; i++) {
					// If array at index i is less than array at index iMin
					if (nums[i] < nums[iMin]) {
						// Set iMin to be i
						iMin = i;
					}
				}
				
				// If iMin does not equal j (min value was the starting spot)
				if (iMin != j) {
					// Swap nums[j] and nums[iMin]
						temp = nums[j];
						nums[j] = nums[iMin];
						nums[iMin] = temp;
				}
			}
		}
		
		
		// Print simply loops throught the given T array, printing all values
		void print(T * nums, int count) {
			int i;
			for(i = 0; i < count; i++) {
				std::cout << nums[i] << std::endl;
			}
		}
};
#endif