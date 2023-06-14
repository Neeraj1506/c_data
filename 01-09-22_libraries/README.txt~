1.          ###      CREATE & IMPLEMENT STATIC & DYNAMIC(SHARED) LIBRARY WITH COMMAND IN LINUX         ### 
        
About:

    Libraries are collections of precompiled functions that have been written to be reusable.
    Both types of library named as lib__.a/so . 
    We are creating and adding static and shared library with some commands to our main source file. 
    We create two function file named as first.c & sec.c . 
          
1. Static Libraries:-

    -Static libraries are added to our program during compilation process.
    -First we have to make .o file and then using it below commands makes library.
    -Extension of static lib. is .a 

    # Cammand to create: (libni.a)
        $ ar -crv libni.a first.o sec.o
                            
   Reference: Neil_Matthew,_Richard_Stones_Beginning_Linux_Programming__2008(chapter 1,page no. 42)
   
   
2. Shared Libraries:-

    -shared libraries are used as references to shared code that will be made available at run time. 
    -Extension of dynamiic library is .so .
               
    # Command to create:- (libsh.so)
        1. First create position independed code
            $ gcc -c -Wall -Werror -fPIC first.c sec.c
        
        2. Creating dynamic library 
        $ gcc -shared -o libsh.so first.o sec.o
                           
                      /OR/
                           
        $ gcc -fPIC -shared main.c add.c -o libsh.so
        
        
        Reference: https://www.thegeekstuff.com/2012/06/linux-shared-libraries/
       
Using libraries:-

# Using both library during compilation this way:-   
 
        $ gcc -o test main.c -L. -lni
                  

# Command to Set Path:-
        -pwd : show us the address of current diretory.
             $ export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
                  

