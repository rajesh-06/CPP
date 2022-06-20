#include "../package/utility.h"
#include "../package/matrix_utility.cpp"
#include "../package/matplotlibcpp.h"
int main ()
{
//multiplying 2 vectors 
	
	VECTOR a = { 1,2,3 };
	vector<double> b = { 5,4,3 };
	//vector<double> c = vec_add(a, b);

	MATRIX raj = { { 1,2,3,4,5 },{ 4,5,6,1,2 } };
	
	MATRIX raj2 = { { 1,2 },{ 3,4 },{ 5,6 },{7,8},{9,10} };
	MATRIX raj3 = mat_mult(raj2,raj);

	print_mat(raj3);
	cout<<endl;
	display_matrix(raj3);

return 0;	
}

