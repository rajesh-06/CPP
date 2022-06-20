
//function multiplies 2 vectors 
VECTOR vec_mult(VECTOR &a, VECTOR &b)
{	int len = a.size();
	if(len!=b.size()){cout<<"Vectors are not of same size";return {};}
	else{
	VECTOR c;
	for (int i = 0; i < a.size(); i++)
	{
		c.push_back(a[i] * b[i]);
	}
	return c;
	}
}

//function adds 2 vectors
VECTOR vec_add(vector<double> a, VECTOR &b)
{
	VECTOR c;
	for (int i = 0; i < a.size(); i++)
	{
		c.push_back(a[i] + b[i]);
	}
	return c;
}

//------------------------------------------------------
//Dot product of two vectors
double dot(VECTOR &a, VECTOR &b)
{	int len = a.size();
	if(len!=b.size()){cout<<"Vectors are not of same size";return 0;}
	else{
	double sum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a[i] * b[i];
	}
	return sum;
	}
}
//Identity matrix 
MATRIX identity(int n)
{
	MATRIX I(n, VECTOR(n, 0));
	for (int i = 0; i < n; i++)
	{
		I[i][i] = 1;
	}
	return I;
}
//MATRIX multiplication of two matrices

MATRIX mat_mult(MATRIX &a, MATRIX &b)
{	
	if(a[0].size()!=b.size()){cout<<"Matrices can't be multiplied";return {};}
	else{
	MATRIX c;
	for (int i = 0; i < a.size(); i++)
	{
		VECTOR d;
		for (int j = 0; j < b[0].size(); j++)
		{
			double sum = 0;
			for (int k = 0; k < a[0].size(); k++)
			{
				sum += a[i][k] * b[k][j];
			}
			d.push_back(sum);
		}
		c.push_back(d);
	}
	return c;
	}
}
VECTOR mat_mult(MATRIX &a, VECTOR &b){
	if(a[0].size()!=b.size()){cout<<"These matrices can't be multiplied";return {};}
	else{
	VECTOR c;
	for (int i = 0; i < a.size(); i++)
	{
		double sum = 0;
		for (int j = 0; j < a[0].size(); j++)
		{
			sum += a[i][j] * b[j];
		}
		c.push_back(sum);
	}
	return c;
	}
}

//----------PRINTING MATRIX-----------------------
void print_mat(MATRIX &a){
	//cout<<"["<<endl;
	for (int i = 0; i < a.size(); i++)
	{	cout<<"[";
		for (int j = 0; j < a[0].size()-1; j++){	
			cout<<a[i][j]<<", ";
		}
		cout<<a[i][a[0].size()-1]<<"]"<<endl;
	}
	//cout<<"]";
}
void display_matrix(MATRIX &ar){
	int row=ar.size();
	int column=ar[0].size();
	cout<<"[";
	for(int i=0;i<column;i++){
		cout<<"[";
		for(int j=0;j<row;j++){
			printf("%0.4f ",ar[i][j]);
			}
		if(i<row-1)cout<<"\b]\n";
		else cout<<"\b]]\n";
	}
}