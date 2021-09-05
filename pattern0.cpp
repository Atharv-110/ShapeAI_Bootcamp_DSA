/*Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/
#include <iostream>
using namespace std;
int main()
{
	int i, j, row = 5, sp;
	for (i = 1; i <= row; i++)
	{
		for (sp = 1; sp <= row - i; sp++)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}