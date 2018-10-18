#include <iostream> // that is the preprocessor directive that is charging the following library "iostream"
 // all c++ programs const of two parts: preprocessor directive and the main function


  int main() 
 {
      std::cout << "Hello world, I am ready for C++";
      return 0;
  }

//Use the namespace keyword to simplify typing

 #include <iostream>

 using namespace std;
 int main()
 {
     cout << "Hey, writing std:: is pain, ";
     cout << "change the program so I don't have to write it.";
     return 0;
 }


 /*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"int size = "<<sizeof(int)<<endl;
    cout<<"short size = "<<sizeof(short)<<endl;
    cout<<"long size = "<<sizeof(long)<<endl;
    cout<<"char size = "<<sizeof(char)<<endl;
    cout<<"float size = "<<sizeof(float)<<endl;
    cout<<"double size = "<<sizeof(double)<<endl;
    cout<<"bool size = "<<sizeof(bool)<<endl;
    return 0;
}

 #include <iomanip>

std::cout<<"\n\nThe text without any formating\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
std::cout<<"\nThe text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";


int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    cout<<"a\t"<<"b\t"<<"c\t"<<endl;
    cout<<"aa\t"<<"bb\t"<<"cc\t"<<endl;
    cout<<"aaa\t"<<"bbb\t"<<"ccc\t"<<endl;
    
    return 0;
}

/*HEADER FILES; to put every thing that is related to 
"how to do a task".*/

#include <iostream>
#include <string>

using namespace std;




// Reading and writing .txt files

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}


#include<iostream>
#include<string>

int main()
{
    std::string name1, address1, phoneNo1;
    std::string name2, address2, phoneNo2;

    //get user1 information
    std::cout<<"User1 what is your name?\n";
    std::getline(std::cin, name1);
    std::cout<<"User1 what is your address?\n";
    std::getline(std::cin, address1);
    std::cout<<"User1 what is your phone number?\n";
    std::getline(std::cin, phoneNo1);

    //get user2 information
    std::cout<<"User2 what is your name?\n";
    std::getline(std::cin, name2);
    std::cout<<"User2 what is your address?\n";
    std::getline(std::cin, address2);
    std::cout<<"User2 what is your phone number?\n";
    std::getline(std::cin, phoneNo2);

    //print information
    std::cout<<"\n\n"<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phoneNo1<<"\n";

    std::cout<<"\n\n"<<name2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phoneNo2<<"\n";    
    return 0;
}

#include <iostream>
#include <string>
#include <sstream> // To change string type to numeric

 int main ()
 {
   std::string stringLength;
   float inches = 0;
   float yardage = 0;

   std::cout << "Enter number of inches: ";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> inches;
   std::cout<<"You entered "<<inches<<"\n";
   yardage = inches/36;
   std::cout << "Yardage is " << yardage;
   return 0;
 }


 

#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where 
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};
    
    int a = 100;
    int b = 33;
    int c = 33;
    
    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];
    std::cout<<"\na > b is "<<TorF[a>b];
    std::cout<<"\na != b is "<<TorF[a!=b];
    std::cout<<"\nc >= b is "<<TorF[c>=b];
    std::cout<<"\nc <= b is "<<TorF[c<=b];    
    return 0;
}

// SWITCH STATEMENTS

switch(expression)
{
     case constant-expression : statements;
                               break; (this is optional);
     case constant-expression : statements;
                               break; (this is optional);
     ...

     default : //optional
        statements;
}

switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break; 
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }

#include <cstddef> //don't forget to include the library
.
.
.
for(size_t i =0; i<5; i++)


#include <iostream>
#include<sstream>
#include <time.h> //added for the random number generator seed
#include <cstdlib>//added to use the rand function

int main()
{
    int target;
    std::string userString;
    int guess = -1;

    srand(time(NULL));  //set the seed for the random number generator
    target = rand() %100 + 1; //generate the 'random' number

    while(guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::getline (std::cin,userString);
        //convert to an int
        std::stringstream(userString) >> guess;
        std::cout<<userString<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(userString == "q")
        {
            std::cout<<"good bye!";
            std::cout<<"The number was "<<target<<"\n";
            break;
        }
    }
    return 0;

// To create an infinite loop using a for loop:

for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}

// To create an infinite loop using a while loop:
while(1)
{
     std::cout<<"This while loop will run forever\n";
}


int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 0;
    float average = 0;
    int sumTotal = 0;
    
    for (int i=0;i<15;i++){
        cout<<"Introduce a number: "<<endl;
        cin>>userInput;
        
        if (userInput > maxNumber){
            maxNumber = userInput;
        }
        if(userInput < minNumber){
            minNumber = userInput;
        }
       
    
        sumTotal = sumTotal + userInput;
    }
    average = sumTotal/15;
    cout<<"The average of the numbers is: "<<average<<endl;
    cout<<"The max number is : "<<maxNumber<<endl;
    cout<<"The minimun number is : "<<minNumber<<endl;
}



/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int userInput[40];
    //Pushing the nums into the array
    
    for(int i = 0; i <40; i++)
    {
        scanf("%d", &userInput[i]);
    }
    // Printing the array in the order the numbers entered
    cout<<"\n\nThe array\n";
    for(int i=0;i<40;i++){
        cout<<" "<<userInput[i];
    }
    
    // Printing the array in reverse order
    
    cout<<"\n\nThe array in reversed order\n";
    for(int i=39;i>=0;i--){
        cout<<" "<<userInput[i];
    }
    
    // Sorting the array in ascending order
    
   
    for(int i = 0; i < 40; i++)
     {
         for(int j = 0; j < 39 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }
    cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 40; i++)
    {
        cout << userInput[i] <<" ";
    }
    
    return 0;
}



/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey = 0;
    int location = 0;
    
    while(1)
    {
        cout<<"Enter an integer ('-1' to quit): ";
        scanf("%d", &searchKey);
        cout<< searchKey<<"\n";
        if(searchKey == -1)
        {
            break;
        }
    
    
    //TODO: write code to determine if integers entered by 
    //the user are in searchArray
    
        for(int i=0; i<sizeof(searchArray);i++){
            if (searchKey == searchArray[i] ){
                location = i;
                break;
            }
            location = -1;
        }
    
        //Use these commands to give feedback to the user
        if(location != -1)
        {
            cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            cout<<searchKey<<" is not in the array.\n";
        }
    }
        
    return 0;
}


/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
using namespace std;

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    int const row = 4;
    int const col = 4;
    
    int arr[row][col];
    int vector [row], product[row];

    int sum;

    // getting the values of the array and the vector

    for (int i=0; i<row; i++){
      for(int j=0; j<row; j++){
        cout<<"Push a number into the array: "<<endl;
        cin>>arr[i][j];
      }
    }
    
    for(int i=0; i<row; i++){
      cout<<"Push a number into the vector: "<<endl;
      cin>>vector[i];
    }
    
    // Multiply the array by the vector
    int sum = 0;

    for(i=0;i<row;i++){
      for(j=0; j<row; j++){
        sum = arr[i][j]*[vector[i] + sum;
      }
      product[i] = sum;
      sum = 0;
    }

    // Print the product

    for(int i=0; i<row; i++){
      cout<<" "<<product[i];
    }


    return 0;
}

// Functions

#include "main.hpp"
using namespace std;
int main()
{
    char operation = '+';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;
    
    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}

#include<iostream>
using namespace std;

void calculate(float n1, float n2, char operation, float &total);
void printEquation(float n1, float n2, char operation, float total);

void calculate(float n1, float n2, char operation, float &total){
    if (operation == '+'){
        total = n1 + n2;
    }
    if(operation == '-'){
        total = n1 - n2;
    }
    if(operation == '*'){
        total = n1 * n2;
    }
    else {
        total = n1 / n2;
    }
    
}

void printEquation(float n1, float n2, char operation, float total){
    std::cout<<"The result of "<<n1<<" "<<operation<<" "<<n2<<" = "<<total;   
}

/*C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed. 


There are three methods for passing an array by reference to a function:

void functionName(variableType *arrayName)
void functionName(variableType arrayName[length of array])
void functionName(variableType arrayName[])*/

// EXAMPLE OF A CLASS

class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

void Student::print()
{
     cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}

// CLASSES AND ARRAYS

/*main.hpp*/
/*main.hpp*/
/*header file for main.cpp*/
#include<iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;
public:
    Student();
    void setId(int idin);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    int getAvg();
    void printInfo();
};

Student::Student()
{
    for(int i=0;i<3;i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Student::setId(int idin)
{
    id = idin;
}
void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}
int  Student::getId()
{
    return id;
}
int  Student::getGrade(int index)
{
    return grade[index];
}
int  Student::getAvg()
{
    int sum = 0;
    for(int i=0; i<3;i++)
        sum = sum + grade[i];
    return sum/3.0;
}
void Student::printInfo()
{
    cout<<id<<"\n";
    for(int i=0; i<3;i++)
        cout<<grade[i]<<" ";
}


// Overloading

#include "main.hpp"


int main()
{
    Compare c;
    int a = 5; 
    int b = 4;
    int d = 6;
    float f1 = 5.43;
    float f2 = 6.32;
    float f3 = 99.43;
    char c1 = 'c';
    char c2 = 'z';
    char c3 = 'm';
    int arrayInt[5] = {65,43,2,898,678};
    float arrayInF[4] = {4.5,4.9,4.3,6.5};
    char arrayInC[6] = {'c','z','t','h','e','r'};
    std::cout<<c.findSmaller(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    std::cout<<c.findSmaller(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    std::cout<<c.findSmaller(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n\n";

    std::cout<<c.findSmaller(a,b,d)<<" is the smallest of "<<a<<", "<<b<<", "<<d<<"\n";
    std::cout<<c.findSmaller(f1,f2,f3)<<" is the smallest of "<<f1<<", "<<f2<<", "<<f3<<"\n";
    std::cout<<c.findSmaller(c1,c2,c3)<<" is the smallest of "<<c1<<", "<<c2<<", "<<c3<<"\n\n";

    std::cout<<c.findSmaller(arrayInt, 5)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInF, 4)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInC, 6)<<" is the smallest of the input array\n";


    return 0;
}


#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);

    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);

    int findSmaller(int arrayIn[], int size);
    float findSmaller(float arrayIn[], int size);
    char findSmaller(char arrayIn[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

int Compare::findSmaller(int arrayIn[], int size)
{
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (arrayIn[j] > arrayIn[j + 1])
        {
          int temp = arrayIn[j];
          arrayIn[j] = arrayIn[j + 1];
          arrayIn[j + 1] = temp;
        }
  }        
    return arrayIn[0];
}

float Compare::findSmaller(float arrayIn[], int size)
{
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (arrayIn[j] > arrayIn[j + 1])
        {
          float temp = arrayIn[j];
          arrayIn[j] = arrayIn[j + 1];
          arrayIn[j + 1] = temp;
        }
  }        
    return arrayIn[0];
}

char Compare::findSmaller(char arrayIn[], int size)
{
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (arrayIn[j] > arrayIn[j + 1])
        {
          int temp = arrayIn[j];
          arrayIn[j] = arrayIn[j + 1];
          arrayIn[j + 1] = temp;
        }
  }        
    return arrayIn[0];
}


// TEMPLATE


// Multiple Inheritance

#include "main.hpp"


int main()
{
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");
    
    cout<<p1.getName()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}

//header file for main.cpp
/*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>
using namespace std;

class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}

class Pet : public Dog, public Patient
{
    private:
        string name;
        
    public:
        Pet();
        string getName();
        void setName(string nameIn);
        
};

Pet::Pet()
{
    name = "Chanel";
}

string Pet::getName()
{
    return name;
}
        
void Pet::setName(string nameIn)
{
    name = nameIn;
}


//CHECKPOINT

int Factorial(int n)
{
    int sum = 0;
    int result;
    result = n *(n-1);
    n--;
    while(n>1)
    {
      result = result * (n-1); 
      n--;
       
    }
    return result;
}