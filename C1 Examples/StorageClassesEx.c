
/*
Storage Class 5.11
Sally Coder
* March 11, 2018
* Not useful code
*/

#include<stdio.h>
extern, int reps = 0; //Same as int reps = 0. This is a global value
void f(void)
{
	static int called = 0;//Same as intialized as 0 but the value is going to be whatever it last exited value is
	printf("f called %d\n", called);
	called++;
	reps = reps + called;
}
int main(void)
{
	auto int i = 1; //means automatic, meaning on entry to main
	const int Limit = 10; //const is not a storage class but lets you know the value should not be changed
	for( i = 1; i < Limit; i++) {
	printf("i local = %d, reps global =%d\n",
	i, reps);
	f();
	}
	return 0;
}