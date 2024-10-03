#include<stdio.h>
int main() {
    int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
    printf("Enter bookID");
    scanf("%d",&bookID);
    printf("Enter dueDate");
    scanf("%d",&dueDate);
    printf("Enter returnDate");
    scanf("%d",returnDate);
    daysOverdue=returnDate-dueDate;
    if ("daysoverdue is <=7"){
    fineAmount=daysOverdue*20;
    }
    else if ("daysoverdue  >7  but<=14"){
fineAmount=<
    }
    {
        
    }
    return 0;
}