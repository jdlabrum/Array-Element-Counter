//Joseph Labrum	
//CSCI250
//Assignment 2
#include <iostream>

using namespace std;

int count(int A[], int len, int target)
{
	if (len == 0) return 0;
	else if (A[len - 1] == target) return 1 + count(A, len - 1, target);
	else return 0 + count(A, len-1, target);
}

void main()
{
	int A[13] = { 5, 2, 2, 3, 5, 2, 2, 2, 1, 1, 3, 5, 2 };
	int B[13];

	cout << count(A, 13, 2) << endl; // Array with match
	cout << count(A, 13, 6) << endl; // Array without match
	cout << count(B, 0, 2);		     // Empty array
}





output:
6
0
0