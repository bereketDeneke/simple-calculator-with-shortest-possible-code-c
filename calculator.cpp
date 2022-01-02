/*
[SolBy: Bereket Siraw]
[Date: 12/23/2021]
[4 more Info:TG->@thunder_is_taken]
*/
#include <iostream> 
int main(char __XO,int x, int y){ //[You can only use - * + / operators]
    std::cin>>x>>__XO>>y;
    std::cout<<((__XO==0x2b)?x+y:(__XO==0x2d)?x-y:(__XO==0x2f)?x/y:(__XO==0x2a)?x*y:0x194);
}
