/* C++ Program for finding out majority element in an array */

#include <bits/stdc++.h>

using namespace std;

/* Function to find the candidate for Majority */
int findCandidate(int arr[], int size)
{
	int maj_index = 0, count = 1;
	for (int i = 1; i < size; i++)
	{
		if (arr[maj_index] == arr[i])
			count++;
		else
			count--;
		if (count == 0)
		{
			maj_index = i;
			count = 1;
		}
	}
	return arr[maj_index];
}

/* Function to check if the candidate occurs more than n/2 times */
bool isMajority(int arr[], int size, int cand)
{
	int count = 0;
	for (int i = 0; i < size; i++)

	if (arr[i] == cand)
	count++;

	if (count > size/2)
	return 1;

	else
	return 0;
}
void printMajority(int arr[], int size) /* Function to print Majority Element */
{
int cand = findCandidate(arr, size); /* Find the candidate for Majority*/

if (isMajority(arr, size, cand))  /* Print the candidate if it is Majority*/
cout << "The Majority Element is :" << cand;

else
cout << "No Majority Element Found";
}

int main()                 /* Driver function to test above functions */
{
	int arr[] = {1, 3, 3, 3, 2};
	int size = (sizeof(arr))/sizeof(arr[0]);

	// Function calling
	printMajority(arr, size);

	return 0;
}
