// &&&&&&&&&  switch case syntax  &&&&&&&&&&

//this is used for select one of many code blocks o be executed .
//we can use int and char 
//canot use float ,double,string ,bool ,array,struct or objects.



// //  problem -1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a ='1'; //here we passing a value as input and ...joh bhi case usse match hoga 
//     //woh print hoo jayega as output ...joh bhi joh case se match hoga 
//     //
//     cout<<endl;
//     switch (a){
//          case '1':
//          cout<<"first"<<endl;
//          break;
//          case 2:
//          cout<<"second"<<endl;
//          break;
//          default:
//          cout<<"you entered wrong option"<<endl;
//          break;
//     }
//     cout<<endl;
//     return 0;
// }




//problem -2
// //CALCULATOR
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout << "Enter a value of a :"<<endl;
//     cin>>a;

//     cout << "Enter b value of b :"<<endl;
//     cin>>b;
//     char op;
//      cout<<"enter a operator you want to perform "<<endl;
//      cin>>op;

//      switch (op)
//      {
//      case '+':
//      cout<<(a+b)<<endl;
//      break;
//      case '-':
//      cout<<(a-b)<<endl;
//      break;
//      case '*':
//      cout<<(a*b)<<endl;
//      break;
//     case '/':
//     cout<<(a/b)<<endl;
        
//         break;
     
//      default:
//      cout<<"you entered wrong option"<<endl;
        
//      }
//      return 0;
// }



//problem -3
//how many 100,50,20,10 rs notes are needed for given amount .

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int amount ,choice; //declared variable for storing user input and switch choices
//      cout<<" Enter amount you what to make : "<<endl;
//      cin>>amount;
// //variable to store count of each store
// int notes100 =0,  notes50 =0, notes20=0, notes10 =0;
// choice =1; //initial switch choice
// while (choice<=4){
//      switch (choice){
//      case 1:
//      notes100 = amount/100;// divide amount by 100 to get note count 
//     amount %= 100; //remaining amount after division by 100
//     break;
//      case 2:
//      notes50= amount/50;
//     amount %= 50;
//     break;
//      case 3:
//      notes20 = amount/20;
//     amount %= 20;
//     break;
//      case 4:
//      notes10 = amount/10;
//     amount %= 10;
//     break;
//     default:
//     break;
//      }
//      choice++;
// }
// cout<<"You need :"<<endl;
// cout<<"you need notes of 100: "<<notes100<<endl;
// cout<<"you need notes of 50:"<<notes50<<endl;
// cout<<"you need notes of 20:"<<notes20<<endl;
// cout<<"you need notes of 10 :"<<notes10<<endl;

// if (amount>0){   //agar koi remaining amount baccha hai after all this distribution of notes 
// //basically chillar
// cout<<"This is the  remainning amount"<<amount<<endl;
// }
//     return 0;
// }

/*&&&&&&&&&&  function   &&&&&&&&&
we use function to make code reusable and bug free and specially readable 
*/


// // problem - 1 -> calculate the power of given input using faunction 
// #include<iostream>
// using namespace std;
// int power(){ //functon  to calculate power
//     int a, b;
//     cin>>a>>b; //taking input inside function
//     int ans =1;
//     for(int i=1;i<=b;i++){
//         ans=ans *a;
    
//     }
//     return ans; //return computed power
// }
//  int main(){
//  int ans= power(); //here i called function 
//  //and function should be called by this only function name()
//  cout<<"answer is : " <<ans<<endl; 
//  return 0;
 
//  }



// //problem 2 -> print counting till the user input value

// #include<iostream>
// using namespace std;
// void printCounting(int n){ //function define kar liya ...
// //function body
//     for(int i=1;i<=n;i++){
//         cout <<i<<endl;
//     }
// }
// int main()
// {
//     int n;    
//     cin>>n;
//     printCounting(n); //here we called function

//     return 0;


// }




//problem -3 ->  table by user input
// #include<iostream>
// using namespace std;
// int main(){
//     int num;

//     cout<<"Enter a number : "<<endl;
//     cin>>num;
//     cout<<"Multiplication of number : "<<num<<":/n";



// for (int i=1;i<=10;i++){
//         cout<<num<<"x"<<i<<"="<<num*i<<endl;
//     }


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number you want the table of :"<<endl;
//     cin>>num;
//     cout<<"table of number : "<<num<<":\n";
//      for(int i=1;i<=10;i++){
//         cout<<num<<"x"<<i<<"="<<num*i<<endl;
//      }
//      return 0;

// }

