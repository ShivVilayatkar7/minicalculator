# minicalculator
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

//addition
double addition(double x,double y){
	return x + y ;
}

//substraction
double substraction(double x, double y){
	return x - y;
}

//multiplication
double multiplication(double x, double y){
	return x * y;
}

//divisoin
double division(double x, double y){
	return x / y;
}

//maximum
double maximum(double m, double n){
	return max(m, n);
}

//minimum
double minimum(double m, double n){
	return min(m, n);
}

//even or odd 
void evenOrOdd(int ev){
	if(ev % 2 == 0){
	     cout << "it is even number" << endl;
	} else {
		 cout<<"it is odd number"<< endl;
	       }
	}	
	
//prime or not
void prime(int X){
	int flag = 0;
	for(int i=2 ; i <= X / 2 ; i++){
	if(X % i == 0){
	flag = 1;
	break;
    }
	
	} if(flag == 0){
		cout << "it is a prime number." << endl;
	} else {
		cout << "it is not a prime number." << endl;
	}

}

//swapping 
void swapp(double a, double b){
	cout << "before swapping : " << "a = " << a << "| b = " << b << "\n";
	double c=a;
	a=b;
	b=c;
	cout << "after swapping : " << "a = " << a << "| b = " << b << "\n"; 
}
//area of circle
double areaOfCircle(double r){
	return 3.14*r*r;
}

//area of rectangle
double areaOfRectangle(double len, double brd){
	return len*brd;
}

//area of right angle triangle
double areaOfRightangleTriangle(double bs, double hgt){
	return 1.5*bs*hgt;
}

//area of square
double areaOfSquare(double sd){
	return sd*sd;	
}

//square
double square(double sq){
	return sq*sq;
}

//cube
double cube(double cb){
	return cb*cb*cb;
}

//factorial
double factorial(double fcc){
	double i = 1,fc = 1.0;
	for(i;i<=fcc;i++){
		fc=fc*i;
	} return fc;
}

//3 by 3 matrix
void matrix(){
	int r,c,m[3][3];
	for(r=0;r<=2;r++){
		for(c=0;c<=2;c++){
			cout << "enter 9 array element : " << endl;
			cin >> m[r][c] ;
		} cout << "\n" ;
	} 
	
	for(r=0;r<=2;r++){
		for(c=0;c<=2;c++){
	    	cout << m[r][c] << "\t";
        }  cout <<"\n\n" ;
    }
}

int main()
{

	cont:
	
	cout << "____________________________________________________________________" << "\n";	
	cout << "|                                                                  |" << "\n";
	cout << "|   weclome to mini calculator...                                  |" << "\n";
	cout << "|                                                                  |" << "\n";
	cout << "|  what are you looking for ?                                      |" << "\n";
	cout << "|  you can search here for                                         |" << "\n";
	cout << "|                                                                  |" << "\n";
	cout << "|  additon | substraction | multiuplication |                      |" << "\n"; 
	cout << "|                                                                  |" << "\n";
	cout << "|  division | square | cube | factorial |                          |" << "\n"; 
	cout << "|                                                                  |" << "\n";
	cout << "|  minimum | maximum | even | odd | prime | swapping |             |" << "\n";
	cout << "|                                                                  |" << "\n";
	cout << "|  area of cicle | rectangle | right angle triangle | square |     |" << "\n";
	cout << "|                                                                  |" << "\n";
	cout << "|  can create matrix |                                             |" << "\n";
	cout << "|__________________________________________________________________|" << "\n";       
	
	cout << "_________________________________________________________________" << "\n";
	cout << "|                                                               |" << "\n";	
	cout << "|  press 1 for addition                                         |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 2 for substraction                                     |" << "\n"; 
	cout << "|                                                               |" << "\n";
	cout << "|  press 3 for multiplication                                   |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 4 for division                                         |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 5 to find minimum number                               |" << "\n"; 
	cout << "|                                                               |" << "\n";
	cout << "|  press 6 to find maximum number                               |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 7 to find entered number is even or odd                |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 8 to check number is prime or not                      |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 9 to swap numbers                                      |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 10 to find area of circle                              |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 11 to find area of rectangle                           |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 12 to find area right angled triangle                  |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 13 to find area of square                              |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 14 to find square of number                            |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 15 to find cube of number                              |" << "\n";
	cout << "|                                                               |" << "\n";
	cout << "|  press 16 to find factorial of number                         |" << "\n"; 
	cout << "|                                                               |" << "\n";
	cout << "|  press 17 to create matrix                                    |" << "\n";
	cout << "|_______________________________________________________________|" << "\n";
	
	int search;
	cin >> 	search;
	if(search == 1){
		double x,y;
		cout << "enter two number to find sum of them : ";
		cin >> x ;
		cout << "enter 2nd number : ";
		cin >> y ;
		cout << "additon of two number is : " << addition(x, y);
		goto reverse;
		cout << "\n";
	}
	else if(search == 2){
		double x,y;
		cout << "enter two number to find difference of them : ";
		cin >> x ;
		cout << "enter 2nd number : ";
		cin >> y;
		cout << "substracton of two number is : " <<  substraction(x, y);
		goto reverse;
		cout << "\n";
	} 
	else if(search == 3){
		double x,y;
		cout << "enter two number to find product of them : ";
		cin >> x ;
		cout << "enter 2nd number : ";
		cin >> y;
		cout << "multiplication of two number is : " << multiplication(x, y);
		goto reverse;
		cout << "\n";
   }
	else if(search == 4){
		double x,y;
		cout << "enter two number to find quotient of them : ";
		cin >> x ;
		cout << "enter 2nd number : ";
		cin >> y;
		cout << "division of two number is : " << division(x, y);
		goto reverse;
		cout << "\n";
   }
   	else if(search == 5){
		double m,n;
		cout << "enter two number to find minimum number : ";
		cin >> m ;
		cout << "enter 2nd number : ";
		cin >> n;
		cout << "the minimum number is : " << minimum(m, n);
		goto reverse;
		cout << "\n";
   }
   else if(search == 6){
   	    double m,n;
		cout << "enter two number to find maximum number : ";
		cin >> m ;
		cout << "enter 2nd number : ";
		cin >> n;
		cout << "the maximum number is : " << maximum(m, n);
		goto reverse;
		cout << "\n";    
   }
   else if((search == 7) && (search == 7)){
   		double ev;
		cout << "enter a number to find the number is even or odd : ";
		cin >> ev;
		evenOrOdd(ev);
		goto reverse;
		cout << "\n";
	}
	else if(search == 8){
		double X;
		cout << "enter a number to find tne given number is prime or not : ";
		cin >> X;
		prime(X);
		goto reverse;
		cout << "\n";
	} 
	else if(search == 9){
		double a,b;
		cout << "enter two number to swap thier value : ";
		cin >> a ;
		cout << "enter 2nd number : ";
		cin >> b ;
		swapp(a, b);
		goto reverse;
		cout << "\n";
	}
	else if(search == 10){
		double r;
		cout << "enter the radius of circle : ";
		cin >> r;
		cout << "area of circle is : " << areaOfCircle(r);
		cout << "\n";
	} 
	else if(search == 11){
		double len, brd;
		cout << "enter length  : ";
		cin >> len ;
		cout << "enter breadth : ";
		cin >> brd;
		cout << "area of rectangle is : " << areaOfRectangle(len, brd);
		goto reverse;
		cout << "\n";
	}
	else if(search == 12){
		double bs,hgt;
		cout << "enter base : ";
		cin >> bs ;
		cout << "enter height : ";
		cin >> hgt ;
		cout << "area of rectangle is :" << areaOfRightangleTriangle(bs, hgt);
		goto reverse;
		cout << "\n";
	}
	else if(search == 13){
		double sd;
		cout << "enter side of square : ";
		cin >> sd;
		cout << "area of square is : " << areaOfSquare(sd);
		goto reverse;
		cout << "\n";
	}
	else if(search == 14){
		double sq;
		cout << "enter a number to find the squae of number : ";
		cin >> sq;
		cout << "square of a numberm is : " << square(sq);
		goto reverse;
		cout << "\n" ; 
	}
	else if(search == 15){
		double cb;
		cout << "enter a number to find the cube of the number : " ;
		cin >> cb;
		cout << "cube of given number is : " << cube(cb);
		goto reverse;
		cout<< "\n";
	}
	else if(search == 16){
		double fcc;
		cout << "enter a number to find the factorial of the number : ";
		cin >> fcc;
		cout << "factorial of number is : " << factorial(fcc);
		goto reverse;
		cout << "\n";
	}
	else if(search == 17){
		cout << "your three by three matrix is given below : ";
		matrix();
		goto reverse;
		cout << "\n";
	}
	else {
		cout << "please, enter correct input ! thank you.." << "\n";
		goto cont;                                                                                
	}         
	
		reverse:
		cout << "\n" << "\n";
		cout << "do you want to contiue ? " << "\n";
		cout << "press 1 to continue... " << "\n";
		cout << "press 2 to exit ! " <<"\n";
		int y;
		cin >> y ;
		if(y == 1){
			goto cont;
		} else {
			goto exi;
		}
		
	exi:
	return 0;
}
