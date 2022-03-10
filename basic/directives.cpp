#include<iostream> 
#define val 12
// macro with parameter 
#define AREA(l) (l * l)

#ifdef dimen
    // This will be compiled
    // if 'dimen'  i s  defined
#else
    // This will be compiled if
    // 'dimen' is  n o t  defined
#endif

using namespace std;

int main()
{
    cout << "Value is :" << val << endl;

    int x = 10, area; 
    area = AREA(x);
    cout << "Area of square is: " << area;

    return 0;
}