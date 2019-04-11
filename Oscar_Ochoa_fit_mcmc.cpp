#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 

void potencia(filename, n);
void ladepotencias(filename,n);
void MCMC_polynomial(x,y,n_x,1000000,3);
float *read_file(string filename, int *n_points);
void model(float *y, float*x, int n_points, float *c, int poly_degree);
float loglikelihood(float *x_obs, float *y_obs, int n_points, float *c, int poly_degree);
float logprior(float *c, int poly_degree);
void MCMC_polynomial(float *x_obs, float *y_obs, int n_points, int n_steps, int poly_degree);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
 void MCMC_polynomial(x,y,n_x,1000000,3){
    string datos= ejemplo_lee(filename, filenamenew);
    int m = ladepotencias(datos, 3);
    int y = datos[0];
    cout << m << y << endl;
    return 0;

}
  
  
  return 0;
}

void potencia(filename, n){
int x;
int n;
double p;;
for (i=0; i=x.size, i++){
p[i]= x[i]**n;
return p
}
}

void ladepotencias(x,y,n){
int x = x[0];
int y = y[0];
int n;
int m;
for (i=0; i=x.size; i++){
    m[i]=potencia(x,y, i)
return m
}
}


 
    void ejemplo_lee(string filename);
    void ejemplo_lee(string filenamenew);
    void ejemplo_lee(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }
