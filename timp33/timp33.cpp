/** 
 \file: timp33.cpp
 */
#include <iostream>
using namespace std;

//! Structur Stack: soderjit int-chislo i ukazatel na predyduschiy element
struct strStack
 {
 int Int;
 strStack* pPrev;
 };

/*! \brief void main() - tochka vhoda v programmu
*
* sozdaet stek
*
* obespechivaet rabotu s nim
*
* vyvodit stek
*
* ochischaet pamyat */

void main()
{
 int N;

 strStack* pTop = NULL;
 cout << "vvedite kol-vo operaciy so stekom\n";
 cin >> N;

 strStack* p;
 int x;
 char c;
 for (int i=0; i<N; i++)
 {
 cin >> c;
 if ( c == 'a' )
 { // c == 'a'
 cin >> x;
 p = new strStack;
 p->Int = x;
 p->pPrev = pTop;
 pTop = p;
 }
 else 
 { // c == 'd'
 p = pTop->pPrev;
 delete pTop;
 pTop = p;
 }
 }

 while (pTop)
 {
 cout << pTop->Int << ' ';
p = pTop->pPrev;
 delete pTop;
 pTop = p;
 }
 cout << '\n';
}