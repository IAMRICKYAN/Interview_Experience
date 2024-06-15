


int main()
{
	//const int buf;

	int cnt = 0;
	const int sz = cnt;
	++cnt;
	//++sz;

	/*int i = 42;
	const int& r1 = i;

	int& r4 = r1 * 2;*/

	double dval = 3.14;
	const int& r1 = dval;


	/*-----pointer----*/
	int i = -1/*, & r = 0;*/;
	
	int i2 = 2;
	int* const p2 = &i2;

	const int i = -1, & r = 0;
	const int* const p3 = &i2;
	

	int const& a = i2;
}
