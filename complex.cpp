#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
double get_values(double&,double&,double&); 
bool check_root(double,double,double);
void solution();  
double complex_solution(double,double,double); 
double normal_solution(double,double,double);
int main()
{
    solution(); 
  return 0;    
} 
void solution()
{
    double  a,b,c; 
    get_values(a,b,c);
    if(check_root(a,b,c)){complex_solution(a,b,c);}
    else{normal_solution(a,b,c);} 
}
double get_values(double& a,double& b,double& c)
{

    cin>>a>>b>>c;
    return 0;
} 
double complex_solution(double a,double b,double c)
{
     using complex_number= complex<float>;
     auto root1=complex_number{(-1*b)/(2*a),((double)(0.5*(1/a)))*sqrt(abs(pow(b,2)-4*a*c))};
     auto root2=complex_number{(-1*b)/(2*a),((double)(-0.5*(1/a)))*sqrt(abs(pow(b,2)-4*a*c))};
     cout<<"root1 "<<root1.real()<<"+"<<root1.imag()<<"j"<<endl;
     cout<<"root2 "<<root2.real()<<"+"<<root2.imag()<<"j"<<endl;
    return 0;

}
double normal_solution(double a ,double b,double c)
{
    cout<<"root1 "<<((-1*b)/(2*a))+0.5*(1/a)*(sqrt(abs(pow(b,2)-4*a*c)))<<endl; 
    cout<<"root2 "<<((-1*b)/(2*a))-0.5*(1/a)*(sqrt(abs(pow(b,2)-4*a*c)))<<endl;
    return 0;
}
bool check_root(double a,double b,double c)
{
    if((pow(b,2)-4*a*c)>=0){return false;}
    else{return true;}
}