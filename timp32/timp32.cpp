/** 
 \file: main.cpp
 */
#include <iostream>
using namespace std;
struct strSpisok
 {
 int Int;
 strSpisok* pNext;
 };

/*! \brief void main() - tochka vhoda v programmu
*
* sozdaet spisok
*
* obespechivaet rabotu s nim
*
* vyvodit spisok
*
* ochischaet pamyat */

void main()
{
 int N;

 strSpisok* pFirst = NULL;
 cout << "vvedite kol-vo operaciy so spiskom\n";
 cin >> N;

 strSpisok* p;
 strSpisok* p1;
 int x, y;
 char c;
 for (int i=0; i<N; i++)
 {
 cin >> c;
 if ( c == 'a' )
 { // c == 'a'
 cin >> x >> y;
 p = pFirst;
 if ( x == 0 )
 {
 p1 = pFirst;
 pFirst = new strSpisok;
 pFirst->Int = y;
 pFirst->pNext = p1;
 }
 else
 {
 p = pFirst;
 for (int j=1; j<x; j++)
 p = p->pNext;
 p1 = p->pNext;
 p->pNext = new strSpisok;
 p->pNext->Int = y;
 p->pNext->pNext = p1;
 }
 }
 else 
 { // c == 'd'
 cin >> x;
 if ( x == 0 )
 {
 p1 = pFirst->pNext;
 delete pFirst;
 pFirst = p1;
 }
 else
 {
 p = pFirst;
 for (int j=1; j<x; j++)
 p = p->pNext;
 p1 = p->pNext->pNext;
 delete p->pNext;
 p->pNext = p1;
 }
 }
 p = pFirst;

 }

 while (p)
 {
 cout << p->Int << ' ';
p = p->pNext;
 }
 cout << '\n';

 p = pFirst;
 while (p)
 {
 p1 = p->pNext;
 delete p;
 p = p1;
 }
}