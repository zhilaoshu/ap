#include"D:\calc\calc.h"
#include<iostream>
int main(){
calc<int> c;
int i1,i2;
char ch;
std::cin>>i1>>ch>>i2;
try{
c.set(ch)
}catch(operator_error o){
std::cout<<o.what;
};
std::cout<<c(i1,i2);
}
