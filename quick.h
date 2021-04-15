#ifndef QUICK_H
#define QUICK_H

#include <iostream>

template <class T>
class Quick {
	private:
		/*
			quicksort function that takes in an array, the lowest and highest
			index and recursively uses itself to sort that given array
		*/
		void quicksort(T * nums, int lo, int hi){
			// If lo < hi (end condition to prevent endless recursion)
			if (lo < hi) {
				// Create an int p (partition index)
				int p;
				// Set p to be whatever partition function returns
				p = partition(nums, lo, hi);
				
				// Call quicksort with lowest index of lo and hi of p-1
				quicksort(nums, lo, p - 1);
				// Call quicksort with lowest index of p+1 and hi of hi
				quicksort(nums, p + 1, hi);
			}	
		}
		
		/*
			partition function takes in an array and a lo index and hi index
			and correctly separates the data in the array to larger or smaller
			than the pivot and returns new partition index
		*/
		int partition(T * nums, int lo, int hi) {
			int i, j;
			T temp, pivot;
			// Set pivot to be the array at the hi index (could be any index)
			pivot = nums[hi];
			
			// Set i to be lo - 1
			i = lo - 1;
			// ForLoop j = lo to hi -1 inclusive
			for (j = lo; j <= hi - 1; j++) {
				// If nums[j] is less than chosen pivot
				if (nums[j] < pivot) {
					// Increment i
					i++;
					
					// Swap nums[i] and nums[j]
					temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
				}
			}
			
			// Swap nums[i+1] and nums[hi]
			temp = nums[i+1];
			nums[i+1] = nums[hi];
			nums[hi] = temp;
			
			// Return i incremented
			return i + 1;
		}
		
		
	public:
		// Quick constructor mostly just to call quicksort function
		Quick(T * nums, int count) {
			// Create ints hi and lo
			int hi, lo;
			// Set hi to be count-1 for highest index of array
			hi = count - 1;
			// Set lo to be 0 for lowest index of array
			lo = 0;
			
			quicksort(nums, lo, hi);
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