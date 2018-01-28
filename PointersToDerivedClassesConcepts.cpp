//Pointers To Derived Classes

Two Classes:
	1) Base Class
	2) Derived Class

Base *pb;//Pointer to base
Base bob;//Base object
Derived dob;//Derived object
pb= &bob;
pb= &dob;//? 

****Note:A pointer declared as a pointer to a base Class can also be used to point to any Class derived from that base Class.

Derived *pd;//Pointer to derived
pd= &dob;
pd=&bob;//Error since,
