# Pointers

consider :
    ------------------------------------
    |         int i = 3                |
    |                                  |
    |              i  - *location name*|
    |          --------                |
    |          |  3   |- *value*       |
    |          --------                |
    |            23242 -**address**    |
    ------------------------------------

The memory location 23242 has been choosen randomly by the computer , it changes at any other time
***i's*** memory address is a number 

/*program 1*/:
        main()
        {
            int i = 3
ls

            printf("Address of i = %u", &i);
            printf("value of i = %u", i);
        }

Output:
        Address of i =  23242
        value of i = 3 

## Note
&  - 'address of operator'
\* - dereferencing operator (value at operator)

    ie: *(&i) == printing value of i