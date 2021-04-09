#ifndef INSERTION_H
#define INSERTION_H

#include <iostream>

template <class T>
class Insertion {
	private:
		
	public:
		Insertion(T * nums, int count) {
			// Create counters i and j, T temp
			int i, j;
			T temp;
			
			// Set i to be 1 before looping
			i = 1;
			// Loop while i is less than count
			while (i < count) {
				// Set j to be i
				j = i;
				// Loop backwards while j is above 0 and
				// array at one less than j is still greater than array at j
				while (j > 0 && nums[j-1] > nums[j]) {
					// Swap nums[j] and nums[j-1]
					temp = nums[j];
					nums[j] = nums[j-1];
					nums[j-1] = temp; 
					
					// Decrement j
					j--;
				}
				// Increment i
				i++;
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