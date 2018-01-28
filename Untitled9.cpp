// C++ implementation below
#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;

class Answer
{
public:
    static bool exists(int ints[], int size, int k)
    {
    	int i;
        for(i=0;i<size;i++){
        	if(ints[i]==k){
        		return true;
			}
		}
		
		return false;
    }
};

int main(){
    int ints[] = { -9, 14, 37, 102 };
    cout << Answer::exists(ints, 4, 102) << endl; // 1
    cout << Answer::exists(ints, 4, 36) << endl; // 0
    
    return 0;
}
