#include <stdio.h>

struct student_info
{
    int Roll_Number : 4;
    int Age : 8;
    int Marks : 3;
    char *Address;
    char *Name;
};

void print(struct student_info student);
int main()
{
    struct student_info Student = {16 , 11 , 4 , "cairo" , "Kareema"};
    print(Student);

    /* First: The processor will try to store 16 in only 4 bits. 
       Since 16 requires at least 5 bits (10000), it will only store 
       the first 4 bits which are (0000), resulting in a value of 0.
       Then, it will store 11 in 8 bits normally because 11 fits 
       within the range. For the Marks, when we store 4 in 3 bits, 
       it is stored as (100). In a signed int, the first bit (1) 
       is the sign bit, so the value may appear as -4. */

    printf("\nThe size of the struct student_info is : %d\n", sizeof(Student));

    /* When we use bit-fields, the compiler allocates a storage unit 
       based on the data type (int), which is 4 bytes.
       The total bits used (4 + 8 + 3 = 15 bits) do not exceed the 
       limit of one int (32 bits), so they are all packed into only 4 bytes.
       Then, we have two pointers, each taking 4 bytes (on a 32-bit system).
       Therefore, the total size is 4 (for bit-fields) + 4 (Address) + 4 (Name) = 12 bytes. */
}

void print(struct student_info student)
{
    printf("Student's Roll number : %d\n" ,student.Roll_Number);
    printf("Student's Age : %d\n" ,student.Age);
    printf("Student's Marks : %d\n" ,student.Marks);
    printf("Student's Address : %s\n" ,student.Address);
    printf("Student's Name : %s\n" ,student.Name);
}