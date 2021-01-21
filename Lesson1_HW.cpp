#include<iostream>

using namespace std;

//operators

int main(){
	int x = 10, y = 20;
	int b, d, e, g, s;
	b = x * y;
	d = x / y;
	e = y - x;
	s = x + y;	
	g = y % x;
	cout<<"int count answers:"<<endl<<"x*y= "<<b<<endl<<"x / y = "<<d<<endl<<"y - x = "<<e<<endl<<"x + y = "<<s<<endl<<"x % y = "<<g<<endl;

	double q = 1.2, w = 2.8;
	double r, t;
	r = q * w;
	t = q / w;
	cout<<"double count answers:"<<endl<<"q*w= "<<r<<endl<<"q / w = "<<t<<endl;
		
	char ovog = 'M';
	string my_name = "Davaajargal";
	int old;
	old = 25;
	cout<<"string, char answers:"<<endl<<ovog<<"."<<my_name<<endl<<"My old:"<<" "<<old<<endl;
	
	int h = 1, j = 5;
	bool check = (h==j);
		
	if(check){
		h==j;
		cout<<"bool answer:"<<false<<endl;
	}else{
		j>=h;
		cout<<"bool answer:"<<true<<endl;
	}
	
	
	int z = 10, o = 9; //rectangular
	int S, P;
	S = z * o;
	P = (z + o)* 2;
	string perimeter = "P";
	string square = "S";
	cout<<"Perimeter answer:"<<perimeter<<endl<<square<<endl;
	
	int m = 10;  //circle
	double R, D, W;
	R = 2* 2.14 * m; 
	W = R;
	D = 2 * m; 
	string perimeter_and_square = "R";
	string diameter = "D";
	cout<<"Perimeter and square:"<<R<<endl<<"Diameter:"<<D<<endl;
	
	double L, M, K; 
	L = 100;
	M = L/100;
	K = M/1000;
	string cm = "L";
	string meter = "M";
	string km = "K";
	cout<<"Cm:"<<L<<endl<<"M:"<<M<<endl<<"Km:"<<K<<endl;

	
	return 0;
	
}
