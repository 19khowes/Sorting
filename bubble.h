#ifndef BUBBLE_H
#define BUBBLE_H

#include <iostream>

template <class T>
class Bubble {
	private:	
		
	public:
		Bubble(T * nums, int count) {
			// Create a counter i, bool swapped (true), and T temp
			int i;
			bool swapped = true;
			T temp;
			// Loop while swapped is true (meaning swap was made)
			while (swapped == true) {
				// Set swapped to be false before each loop through array
				swapped = false;
				// loop from first index of array to arraylength - 1
				for (i = 1; i <= count-1; i++) {
					// If array index i-1 is greater than array index i
					if (nums[i-1] > nums[i]) {
						
						// Swap array index i-1 and array index i
						temp = nums[i-1];
						nums[i-1] = nums[i];
						nums[i] = temp;
						
						// Set swapped to be true to continue sorting
						swapped = true;
					}
				}
				// Decrement length counter to increase efficiency
				count--;
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