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

    //UNARY OPERATORS [++,--]
    // POST & PRE INCREMENT DECREMENT
    //E.G. a++ =a+1 POST INCREMENT


    // CONDITIONAL STATEMENTS
    //IF ELSE-IF  ELSE
    int marks;
    cout<<"enter your marks: ";
    cin>>marks;
    if (marks>=90){         // IF CONDITION GET FALSE THEN IF BLOCK WILL NOT EXECUTE AND THERE WILL BE NO OUTPUT IF THERE IS NO ELSE BLOCK // ELSE STATMENT IS OPTIONAL , AND {} ARE ALSO OPTIONAL FOR SINGLE STATEMENT 
        cout<<"A"<<endl; // SINGLE STATEMENT IN IF BLOCK
    }else if(marks<90 && marks>=80){// [90>marks>=80] THIS STATEMENT WILL NOT WORK BCZ C++ (VALID IN PYTHON) EVALUATES EXPRESSIONS FROM LEFT TO RIGHT THEN [90>MARKS -> 90> 85(INPUT)->TRUE->1 THEN 1>=80 -> FALSE-> 0 ELSE IF WILL NOT EXECUTE]
        cout<<"B"<<endl; // SINGLE STATEMENT IN ELSE BLOCK
    }else{
        cout<<"C"<<endl;
    }


    //TERNARY STATEMENT   SYNTAX--> CONDITION?STATEMENT1:STAEMENT2;  IF CONDITION TRUE THEN STAEMENT 1 WILL EXECUTE OTHERWISE STATEMENT 2
    cout<<(marks>=85?"good":"bad")<<endl;


    //LOOPS --> WHILE FOR DO-WHILE
    //WHILE LOOP EXAMPLE
    int count=1;
    while (count<=5)
    {
        cout<<count<<" ";
        count++;
    }
    
    return 0;
}