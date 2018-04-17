#include<iostream>
#include<vector>
double multi(std::vector<int> &a,std::vector<int> &b,std::vector<int>&c,int n, int x);
double relle(std::vector<int> &a, int s, int b, int d);
double relleno(std::vector<int> &a, int x, int d, int s);

int m;
int n;
int j;
int l;
std::vector<int> c(m*l);
int main ()
{
  std::cout<<"Elige el tamaño de la matrix"<<std::endl;
  std::cin>>m>>n;
  std::cout<<"Elige el tamaño de la matrix a la que multiplicaras"<<std::endl;
  std::cin>>j>>l;
  if(n==j)
    {
      std::vector<int> a(m*n);
      std::vector<int> b(j*l);
      relle(a,n,0,m);
      relle(b,l,0,j);
      std::vector<int> c(m*l);
      multi(a,b,c,0,0);
    }
  else
    {
      std::cout<<"Las matrices no se pueden multiplicar"<<std::endl;
      return 0;
    }
}

double multi(std::vector<int> &a,std::vector<int> &b,std::vector<int>&c, int y, int x)
    {
       
    while(y<m)
      {
    while(x<l)
      {c[y*m+x]=0;
    for(int ii=0; ii<j;++ii)
      {
	   c[y*m+x]+=a[y*m+ii]*b[j*ii+x];
	  
      }
    return multi(a,b,c,y,x+1);
      }
    x=0;
    return multi(a,b,c,y+1,x);
  }
    std::cout<<" "<<std::endl;
    return relleno(c,0,m,l);
  }

  
  double relle(std::vector<int> &a, int s, int b,int d)
  {
    
while(b<d)
    {
  for(int ii=0;ii<s;++ii)
    {
      int x;
      std::cout<<"escribe el "<<b<<" "<<ii<<" termino de la matrix"<<std::endl;
      std::cin>>a[b*d+ii];
    }
  return relle(a,s,b+1,d);
    }
 relleno(a,0,d,s);

    
  }

double relleno(std::vector<int> &a, int x, int d,int s)
{
  while(x<d)
    {
  for(int ii=0; ii<s;++ii)
    {
      std::cout<<a[x*d+ii]<<" ";
    }
  std::cout<<"\n";
  return relleno(a,x+1,d,s);
    }
}
  
  
    
  

  
