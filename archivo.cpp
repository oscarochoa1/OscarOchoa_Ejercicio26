#include <iostream>
#include <fstream>
using namespace std;


void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename);

float dzdt(float t, float y, float z, float omega);
float dydt(float t, float y, float z, float omega);

int main(){
  float omega=1.0;
  solve_equation_euler(0.0, 10000.0, omega/2, omega, "euler.dat");
  solve_equation_rk4(0.0, 10000.0, omega/2, omega, "rk4.dat");
  solve_equation_leapfrog(0.0, 10000.0, omega/2, omega, "leapfrog.dat");
  return 0;
}

void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename){
  float t=t_init;
  float yn= 1.0;
    float z = 1.0;
 
  ofstream outfile;
  outfile.open(filename);

  while(t<10000){
     float ynviejo = yn ;
     float zviejo = z;
    outfile << t << " " << yn << endl;
    yn = ynviejo - omega/2 * omega  * ynviejo;
    z = zviejo - omega/2 * omega  * ynviejo;
    t = t + omega/2;
   cout << yn << z << t << endl;
  }
  outfile.close();
}
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename){

}
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename){
    float v;
    float x;
    float t;
    float V;
    int i;
    for(i=0; i<x; i++){
        float vviejito = v;
        float xviejito = x;
        v = vviejito - omega*omega*x * omega/4 ;
        x = xviejito + v * omega/2 ;
        V = v +- omega*omega*x * omega/4 ; 
        
        cout << v << x << V << endl;

}
}