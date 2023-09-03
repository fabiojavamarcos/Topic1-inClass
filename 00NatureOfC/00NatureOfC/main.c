//
//  main.c
//  00NatureOfC
//
//  Created by Fabio Marcos De Abreu Santos on 9/2/23.
//

#include <stdio.h>


void SizeOutOfScope(char* string)
{
    // Outside of the declared scope, the sizof the string is not known
    printf("\n Sizeof string is not known: %zu", sizeof(string));
}

void SizeAndCount()
{
    char string[200];
    int  numbers[200];

    // In scope, the compiler knows the sizeof the data
    printf("\n Sizeof string is: %zu", sizeof(string));
    printf("\n Sizeof numbers is: %zu", sizeof(numbers));
    SizeOutOfScope(string);

    // The compiler does not tell you the length of the array
    // You must divide by the size of the type
    printf("\n Length of string is %zu", sizeof(string) / sizeof(string[0]));
    printf("\n Length of numbers is %zu", sizeof(numbers) / sizeof(numbers[0]));

}

void IsCStronglyTyped()
{
    int number = 10;
    char* bytes;

    printf("\nNumber is %d", number);

    // Cast away type, a void pointer (void *) has no type an be assigned to anything.
    // & and (void *)
    bytes = (void*)&number;
    for (int i = 0; i < sizeof(number); i++)
    {
        printf("\n byte %d is %d %x", i, bytes[i], bytes[i]);
    }

    number = -1;
    for (int i = 0; i < sizeof(number); i++)
    {
        printf("\n byte %d is %d %x", i, bytes[i], bytes[i]);
    }

    for (int i = 0; i < sizeof(number); i++)
    {
        bytes[i] = (char)0x77;
    }
    printf("\nNumber is %d %x", number, number);


}

int AddTwoFastCall(int x, int y)
{
    return x + y;
}

int AddTwoCdecl(int x, int y)
{
    return x + y;
}


int AddTwoStdCall(int x, int y)
{
    return x + y;
}

int main(int argc, char* argv[])
{
    SizeAndCount();
    IsCStronglyTyped();

    AddTwoCdecl(6, 3);

    AddTwoStdCall(6, 3);

    AddTwoFastCall(6, 3);

}
