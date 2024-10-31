#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char bookName[30];
    char author[30];
    int pages;
    float price;
};

int main()
{
    struct library l[100];
    char arNm[30], bookNm[30];
    int i, j, keepcount;
    i = j = keepcount = 0;

    while (j != 6)
    {
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit");

        printf("\n\nEnter one of the above : ");
        scanf("%d", &j);

        switch (j)
        {
        /* Add book */
        case 1:

            printf("Enter book name = ");
            scanf("%s", l[i].bookName);

            printf("Enter author name = ");
            scanf("%s", l[i].author);

            printf("Enter pages = ");
            scanf("%d", &l[i].pages);

            printf("Enter price = ");
            scanf("%f", &l[i].price);
            keepcount++;

            break;

        //Information about the book

        case 2:
            printf("you have entered the following information\n");
            for (i = 0; i < keepcount; i++)
            {
                printf("book name = %s", l[i].bookName);

                printf("\t author name = %s", l[i].author);

                printf("\t  pages = %d", l[i].pages);

                printf("\t  price = %f", l[i].price);
            }
            break;

        //Author's Name

        case 3:
            printf("Enter author name : ");
            scanf("%s", arNm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(arNm, l[i].author) == 0)
                    printf("%s %s %d %f", l[i].bookName, l[i].author, l[i].pages, l[i].price);
            }
            break;

        // No Books in Library //

        case 4:
            printf("\n No of books in library : %d", keepcount);
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
