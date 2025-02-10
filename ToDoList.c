#include<stdio.h>
#include<string.h>
struct task{
    char name[30];
    int daysLeft;
    char priority[10];
}a[50];
int count=0;
void addTask()
{
    char name[30],priority[10];
    int time;
    printf("Enter your task name:");
    scanf(" %[^\n]s", name);
    for(int i=0;i<count;i++)
    {
        if(strcmp(a[i].name,name)==0)
        {
            printf("Task is already present");
            return;
        }
    }
    printf("Enter the days left to complete:");
    scanf("%d",&time);
    printf("Enter its priority(low/medium/high):");
    scanf("%s",priority);
    strcpy(a[count].name,name);
    a[count].daysLeft=time;
    strcpy(a[count].priority,priority);
    count++;
    printf("\n\n\n");
}
void removeTask()
{
    char name[20];
    printf("Enter task to be deleted:");
    scanf(" %[^\n]s", name);
    for(int i=0;i<count;i++)
    {
        if(strcmp(a[i].name,name)==0)
        {
            for(int j=i;j<count-1;j++)
                a[j]=a[j+1];
            printf("Task removed successfully");  
            count--;  
            printf("\n\n\n");
            return;
        }
    }
    printf("Task does not exist");
    printf("\n\n\n");
    
}
void displayTasks()
{
    printf("\n\nList of works:\n\n");
    printf("%-15s%-15s%-15s\n\n", "Task Name", "Due Time", "Priority");
    for(int i=0;i<count;i++)
    {
        printf("%-15s%-15d%-15s\n",a[i].name,a[i].daysLeft,a[i].priority);
    }
    printf("\n\n");
}
int main()
{
    while(1)
    {
        printf("******  To Do List   *****\n\n");
        printf("\n1.Add Task");
        printf("\n2.Remove Task");
        printf("\n3.Display Tasks");
        //printf("\n4.Sort by Priority");
        printf("\n4.Exit\n\n");
        int choice;
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:addTask();
                   break;
            case 2:removeTask();
                   break;
            case 3:displayTasks();
                   break;
            //case 4:sortByPriority();
                   //break; 
            case 4:return 0;   
            default:printf("\nInvalid choice");
        }
    }    
}
