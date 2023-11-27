// Identify the errors 
/*
 Find errors, if any, in the following C++ statements.
(a) long float x;
(b) char *cp = vp; // vp is a void pointer
(c) int code = three; // three is an enumerator
(d) int sp = new; // allocate memory with new
(e) enum (green, yellow, red);
(f) int const sp = total;
(g) const int array_size;
(h) for (i=1; int i<10; i++) cout << i << "/n"; (i) int & number = 100; (j) float *p = new int 1101; 
(k) int public = 1000; (l) char name[33] = "USA";
*/

/*
Ans:
No. Error                                           Correction
(a) too many types                                  float x; or double x;
(b) type must be matched                            char *cp = (char*) vp;
(c) No error
(d) syntax error                                    int*p = new int [10];
(e) tag name missing                                enum colour (green, yellow, red)
(f) address have to assign instead of content       int const * p = &total;                                         
(g) C++ requires a const to be initialized          const int array-size = 5;
(h) Undefined symbol i                              for (int I = 1; i <10; i++) cout << i << “/n”;
(i) invalid variable name                           int number = 100;
(j) wrong data type                                 float *p = new float [10];
(k) keyword can not be used as a variable name      int public1 = 1000;
(l) array size of char must be larger than          char name [4] = “USA”
    the number of characters in the string
*/