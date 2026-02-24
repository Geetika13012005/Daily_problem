#include <iostream>
#include<conio.h>
#include<string.h>
#define SIZE 100
struct stack  {
int top;
int list[SIZE];  };
void push(stack *p,int elem) {
if (p->top < SIZE)  {
(p->top)++;
p->list[p->top] = elem;  }  }
int pop(stack *p) {
if (p->top > -1) {
return p->list[p->top--]; }
else
return -1; }
void print(stack *p) {
cout<<endl;
for (int i = (p->top); i >= 0; i--)
cout << p->list[i] << " "; }
int l[3][5];
void install(int i,int j,stack *p1,stack *p2) {
if(l[i][j]==0) {
l[i][j]=1;
push(p1,i);
push(p2,j); } }
void main()
 {
stack s1,s2;
s1.top=-1;
s2.top=-1;
char rules[6][7]={"E->E+T","E->T","T->T*F","T->F","F->(E)","F->d"};
char nonterm[3]={'E','T','F'};
char terminal[5]={"+*()d"};
int q[6];
clrscr();
cout<<"\nThe grammer is"<<endl;
for(int i=0;i<6;i++){
for(int j=0;j<7;j++)
cout<<rules[i][j];
cout<<endl;  }
for(i=0;i<3;i++)
for(int j=0;j<5;j++)
l[i][j]=0;
for(i=0;i<3;i++){
char temp=nonterm[i];
for(int j=0;j<6;j++){
if(temp==rules[j][0]){
for(int l=0;l<6;l++){
if(rules[j][(strlen(rules[j]))-1]==terminal[l]){
install(i,l,&s1,&s2); }
if(rules[j][(strlen(rules[j]))-2]==terminal[l])
install(i,l,&s1,&s2); }}}}
while(s1.top>-1) {
int q1=pop(&s1);
int q2=pop(&s2);
for(int z=0;z<6;z++){
if(nonterm[q1]==rules[z][3]) {
char nt=rules[z][0];
for(int y=0;y<3;y++) {
if(nt==nonterm[y]) {
if(nt==nonterm[y]) {
install(y,q2,&s1,&s2);
break; } }}}};
cout<<endl<<endl;
for(i=0;i<3;i++) {
cout<<"TRAILING("<<nonterm[i]<<") = {";
for(int j=0;j<5;j++) {
if(l[i][j]==1) {
cout<<terminal[j];
for(int k=j+1;k<5;k++)
if(l[i][k]==1) {
cout<<",";
break; } }}
cout<<"}\n"; }
getch();
}}


