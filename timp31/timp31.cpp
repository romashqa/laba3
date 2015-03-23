 
/** 
 \file: timp31.cpp
 */
#include <iostream>
using namespace std;

struct strOchered
 {
 int Int;
 strOchered* pNext;
 };

/*! \brief void main() - tochka vhoda v programmu
*
* sozdaet ochered
*
* obespechivaet rabotu s ney
*
* vyvodit ochered
*
* ochischaet pamyat */

void main()
{
 int N;

 strOchered* pHead = NULL;
 strOchered* pTail = NULL;
 cout << "vvedite kol-vo operaciy s ocheredu\n";
 cin >> N;

 strOchered* p;
 strOchered* p1;
 int x, y;
 char c;
 for (int i=0; i<N; i++)
 {
 cin >> c;
 if ( c == 'a' )
 { // c == 'a'
 cin >> x;
 if (pHead)
 {
 p = pTail;
 pTail = new strOchered;
 pTail->Int = x;
 p->pNext = pTail;
 pTail->pNext = NULL;

 }
 else
 {
 pHead = new strOchered;
 pTail = pHead;
 pTail->Int = x;
 pTail->pNext = NULL;
 }
 }
 else 
 { // c == 'd'
 p = pHead->pNext;
 delete pHead;
 pHead = p;
 if ( !pHead) pTail = NULL;
 }
 }

 while (pHead)
 {
 cout << pHead->Int << ' ';
pHead = pHead->pNext;
 }
 cout << '\n';

 system("pause");
} 