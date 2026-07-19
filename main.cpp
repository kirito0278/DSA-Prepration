// FIRST PROGRAM [Boiler Plate Code] -- COMMENT
#include <iostream>  //PREPROCESSOR DIRECTIVE // COUT LOGIC WRITTEN IN IT
using namespace std;

//FUNCTION DEFINTION
int printHello(){
    cout<<"hello\n";
    return 3; //IT IS CALLED FINAL STATEMENT OF FUNCTION AFTER THIS NOTHING WILL WORK
}

int sum(int a,int b){   // a,b ARE PARAMETERS WHERE VALUES ARE GIVEN AS INPUT
    return a+b;
}

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

    // SWITCH CASE [LEARN IT ONLINE]

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
    //NESTED LOOPS--> LOOP INSIDE LOOP


    //FUNCTION CALL/INVOKE
    cout << printHello()<<endl; //WE CAN DIRECTLY PRINT FUNCTION LIKE THIS OR SAVE IT IN ANY VARIABLE
    int x=3,g=4;
    cout<<sum(x,g)<<endl; //ARGUMENTS
    //THERE R TWO WAYS OF PASSING ARGUMENTS
    //--PASS BY VALUE [COPY OF ARGUMENT IS PASS TO FUNCTION] E.G. SUM FUNCTION CREATED ABOVE
    //PASS BY REFERENCE [SHARE ADDRESS DIRECTLY]

    //BINARY NO.S -- TO STORE -VE DEC NO. IN BIN WE FIND  ITS 2'S COMPLIMENT
    //TO CONVERT -VE BIN TO DEC WE DO 2'S COMPLIIMENT


    //BITWISE OPERATORS
    //BITWISE & [0&0 ,0&1,1&0-->0; 1&1-->1]
    int f=4,d=8;
    cout<<(f&d)<<endl;
    //BITWISE | [0&0-->0; 0&1,1&0,1&1-->1]
    cout<<(f|d)<<endl;
    //BITWISE ^ (XOR-exclusive or) [same bits-->0;diff bits-->1]
    cout<<(f^d)<<endl;


    //BITWISE << (LEFT SHIFT) [n(num that should be shifted)<<1(how many steps shoulld be shifted)]
    cout<<(f<<1)<<endl;
    //NOTE--> WHEN WE R USING A<<B (INTERNALLY IT IS ANS=A*pow(2,B))


    //BITWISE >> (RIGHT SHIFT) [n(num that should be shifted)>>1(how many steps shoulld be shifted)]
    cout<<(d>>1)<<endl;
    //NOTE--> WHEN WE R USING A>>B (INTERNALLY IT IS ANS=A/pow(2,B))


    //OPERATOR PRECEDENCE
    // !,+,-(UNARY)     FIRST R TO L
    // *,/,%            SECOND L TO R
    // +,-              THIRD L TO R
    // <,>,<=,>=        FOURTH L TO R
    // ==,!=            FIFTH L TO R
    // &&               SIXTH L TO R
    // ||               SEVENTH L TO R
    // =                EIGTH  R TO L  [BITWISE COME SOMEWHERE BETWEEN 3RD AND 4TH]


    //SCOPE OF VARIABLES-- LOCAL & GLOBAL

    //DATA TYPE MODIFIERS [CHANGE MEANING OF DATA TYPES]
    //-- long, short, long long, signed, unsigned
    return 0;
}