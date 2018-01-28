#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	float n=145.89;
	std::cout.width(10); std::cout<<std::right<<n<<"\n";
	std::cout.width(10); std::cout<<std::left<<n<<"\n";
	std::cout.width(10); std::cout<<std::internal<<n<<"\n";
	 std::cout<<std::uppercase<<<<"\n";
}
