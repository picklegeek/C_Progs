#include<stdio.h>

void main() {
	int s, v, v1, vj, temp;
	printf ( "Enter the size of the array: " );
	scanf ( "%d", &s );
	int a[s];
	for ( v = 0; v < s; v ++ ) {
		scanf ( "%d", &a[v] );
	}

	printf ( "Unsorted array: \n" );
	for ( v = 0; v < s; v ++ ) {
		printf ( "%d\t", a[v] );
	}

	for ( v1 = 0; v1 < s - 1; v1 ++ ) {
		for ( vj = v1 + 1; vj < s; vj ++ ) {
			if ( a[v1] > a[vj] ) {
				temp = a[v1];
				a[v1] = a[vj];
				a[vj] = temp;
			}
		}
	}

	printf ( "\nSorted array: \n" );
	for ( v = 0; v < s; v ++ ) {
		printf ( "%d\t", a[v] );
	}
	printf ( "\n" );
}
