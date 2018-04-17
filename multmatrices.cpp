#include<iostream>
#include<vector>
int m;
int n;
std::vector<int> a(m*n);
double relleno(std::vector<int> &a, int x);
double mult(std::vector<int> &a,int n, int b);

int main()
{
  std::cout<<"Elige tu tamaño de matrix"<<std::endl;
  std::cin>>m>>n;
  std::vector<int> a(m*n);
  mult(a,n,0);
  return 0;
}
double mult(std::vector<int> &a,int n, int b)
{
  while(b<m)
    {
  for(int ii=0;ii<n;++ii)
    {
      int x;
      std::cout<<"escribe el "<<b<<" "<<ii<<" termino de la matrix"<<std::endl;
      std::cin>>a[b*m+ii];
    }
  return mult(a,n,b+1);  }
  relleno(a,0);
 
}
double relleno(std::vector<int> &a, int x)
{while(x<m)
    {  
  for(int ii=0; ii<n;++ii)
    {
      std::cout<<a[x*m+ii]<<" ";
    }
  std::cout<<"\n";
  return relleno(a,x+1);
}
}


  
 
