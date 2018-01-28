//Syntax for one class is inherited from another class.

class derived_class_name:access_specifier base_class_name 
{
	instructions
		------;
		------;
		------;
	
};

/*1)access_specifiers can be either public, private or protected..
2) By default the access specifier is private (even though it is not specified explicitly)
3)If the access_specifier is public:
3.a)All public members of the base class become public members of the derived class.
3.b)All protected members of the base class become protected members of the derived class.
3.c)Any private member of the base class remain private to it and is inaccessible by the derived class.
4)If the access_specifier is private:
4.a)All public members of the base class become private members of the derived class.
4.b)Any protected member of the base class become private member of the derived class.
4.c)Any private member of the base class remain private to it and is inaccessible by the derived class.
5)If the access_specifier is protected:
5.a)All public members of the base class become protected members of the derived class.
5.b)Any protected member of the base class become protected member of the derived class.
5.c)Any private member of the base class remain private to it and is inaccessible by the derived class.


