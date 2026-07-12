// FIRST PROGRAM [Boiler Plate Code] -- COMMENT
#include <iostream>  //PREPROCESSOR DIRECTIVE // COUT LOGIC WRITTEN IN IT
using namespace std;

int main(){
    // OUTPUT IN C++
    cout<<"hello world"<<endl;
    cout<<"hi";


    // VARIABLE , DATA TYPE ,IDENTIFIER

    int age = 25; // VARIABLE (CONTAINER) OF INTEGER DATA TYPE STORE VALUE IN MEMORY 
    // IT ONLY START WITH A-Z ,A-Z OR UNDERSCORE AND WITHOUT SPACE // AGE IS A IDENTIFER (NAME GIVEN TO VARIABLE)

    char grade = 'A'; //ONLY SINGLE QUOTE TO STORE CHAR TYPE VALUE
    //IN CHAR DATA TYPE INSTEAD TO STORING CAHR DIRECTLY WE STORE THE ASCII VALUE OF CHAR E.G.[ASCII OF A=65]

    float PI =3.14f; //NEED TO USE f IN THE END TO DELCARE IT IT FLOAT DATA TYPE 
    //VAR NAME IS IN CAPITAL BCZ IT IS GOOD PRACTICE TO USE CAPTIAL LETTERS FOR CONSTANT VAR

    bool isTrue = true; // true -> 1 & false -> 0 [DURING OUTPUT]
    cout<<endl<<isTrue;

    double price=4050.3;

    cout<<endl<<sizeof(price); // RETURN TO SIZE OF DATA TYPE IN BYTES

    //TYPE CONVERSION [IMPLICIT]  DONE BYDEFAULT BY COMPILER[SMALL -> BIG DATATYPE 
    int value = grade;
    cout<<endl<<value;
    // AND CASTING [EXPLICIT] DONE BY PROGRAMMER [BIG -> SMALL DATA TYPE]
    int newPrice = (int)price;
    cout<<endl<<newPrice<<endl;

    //INPUT IN C++
    int age1; //[LOCAL VARIABLE] IT IS DECLARED BUT NOT INITIALIZED THAT'S WHY IF WE TRY TO PRINT AGE1 ,IT WILL GIVE GARBAGE VALUE
    // [EXCEPTION]GLOBALLY DECLARED VARIABLE GIVE OUTPUT 0
    
    cout<<"ENTER YOUR AGE: ";
    cin>>age1;


    //OPERATORS
    //ARITHMETIC [ +,-,*,/,% ]
    int a=10 ,b=3;
    cout<<"sum: "<<a+b<<endl<<"difference: "<<a-b<<endl<<"multiplication: "<<a*b<<endl<<"division: "<<a/b<<endl<<"modulo: "<<a%b<<endl; // OUTPUT -> INTEGER
    cout<<5/(double)2<<endl;// TO GET COMPLETE OUTPUT

    //RELATIONAL [<,>,<=,>=,==,!=] OUTPUT-> true or false

    //LOGICAL [||(OR) && (AND) !(NOT)] OUTPUT-> true or false

    //UNARY OPERATORS
    // INCREMENT[++] DECREMENT[--]
    //E.G. a++ =a+1 POST INCREMENT
    return 0;
}