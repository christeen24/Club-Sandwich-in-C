#include <stdio.h>
int main()
{
    int exit,discount,order,gross,net=0,amount,next,bread,filling,filling_charge,size,topping,topping_charge,qty,filling1,filling2,filling3,filling4,filling5,paying;
    char bread_name,filling_name;
    printf("\n\n-----------------------------------Welcome-----------------------------------\n\n");
    printf("Available Breads are :\n 1-Baguette\n 2-Foccacia\n 3-Ciabatta\n 4-Cornbread\n 5-Cottage Loaf\n 6-Coppia Ferrarese\n\n");
    printf("Available Fillings are :\n 1-Chicken\n 2-Sea Food\n 3-Vegetarian\n 4-Beef\n 5-Pork\n\n");
    printf("Available Sizes are :\n 1-Small\n 2-Medium\n 3-Large\n\n");
    printf("Available Toppings are :\n 1-Cheese\n 2-Mayonnaise\n 3-Special Sauce\n 4-Cheese and Mayonnaise\n 5-Cheese and Special Sauce\n 6-Special Sauce and Mayonnaise\n 7-Cheese , Special Sauce and Mayonnaise\n\n");
    printf("Payment Method :\n Cash Payment : 0\n Visa Card : 1\n\n\n");
    printf("------------------------------------------------------------------------------\n\n");
    while (order!=0)
    {
        {
        printf("What is the type of bread : ");
        scanf("%d",&bread);
        printf("\nWhat is the type of filling : ");
        scanf("%d",&filling);
        printf("\nWhat is the size : ");
        scanf("%d",&size);
        printf("\nWhat are the topping : ");
        scanf("%d",&topping);
        printf("\nHow many sandwiches : ");
        scanf("%d",&qty);
        printf("\nWhat is the type of paying : ");
        scanf("%d",&paying);
        if (qty<=5)
        {
            if (bread<=6)
            {
                if (filling<=5)
                {
                    if (bread==1)
                    {
                    {
                    printf("Bread Type : Baguette\n");
                    {
                        if (filling==1)
                        {
                        printf("Filling Type : Chicken\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=200;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(200+(200*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(200+(200*10/100));
                            }
                            filling1--;
                        }
                    }
                        {
                        if (filling==2)
                        {
                        printf("Filling Type : Sea Food\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=300;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(300+(300*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(300+(300*20/100));
                            }
                            filling2--;
                            }
                            }
                        {
                        if (filling==3)
                        {
                        printf("Filling Type : Vegetarian\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=100;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(100+(100*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(100+(100*20/100));
                            }
                            filling3--;
                        }
                        }
                        {
                        if (filling==4)
                        {
                        printf("Filling Type : Beef\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=250;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(250+(250*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(250+(250*20/100));
                            }
                            filling4--;
                        }
                        }
                        {
                        if (filling==5)
                        {
                        printf("Filling Type : Pork\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=250;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(250+(250*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(250+(250*20/100));
                            }
                            filling5--;
                        }
                        }
                    }
                    }
                    else if (bread==2)
                    {
                    printf("Bread Type : Foccacia\n");
                        if (filling==1)
                        {
                        printf("Filling Type : Chicken\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=250;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(250+(250*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(250+(250*20/100));
                            }
                            filling1--;
                        }
                        if (filling==2)
                        {
                        printf("Filling Type : Sea Food\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=350;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(350+(350*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(350+(350*20/100));
                            }
                            filling2--;
                        }
                        if (filling==3)
                        {
                        printf("Filling Type : Vegetarian\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=150;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(150+(150*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(150+(150*20/100));
                            }
                            filling3--;
                        }
                        if (filling==4)
                        {
                        printf("Filling Type : Beef\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=280;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(280+(280*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(280+(280*20/100));
                            }
                            filling4--;
                        }
                        if (filling==5)
                        {
                        printf("Filling Type : Pork\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=280;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(280+(280*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(280+(280*20/100));
                            }
                            filling5--;
                        }
                        }
                    else if (bread==3)
                    {
                    printf("Bread Type : Ciabatta");
                        if (filling==1)
                        {
                        printf("Filling Type : Chicken\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=225;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(225+(225*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(225+(225*20/100));
                            }
                            filling1--;
                        }
                        if (filling==2)
                        {
                        printf("Filling Type : Sea Food\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=325;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(325+(325*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(325+(325*20/100));
                            }
                            filling2--;
                        }
                        if (filling==3)
                        {
                        printf("Filling Type : Vegetarian\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=125;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(125+(125*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(125+(125*20/100));
                            }
                            filling3--;
                        }
                        if (filling==4)
                        {
                        printf("Filling Type : Beef\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=250;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(250+(250*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(250+(250*20/100));
                            }
                            filling4--;
                        }
                        if (filling==5)
                        {
                        printf("Filling Type : Pork\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=250;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(250+(250*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(250+(250*20/100));
                            }
                            filling5--;
                        }
                        }
                    else if (bread==4)
                    {
                    printf("Bread Type : Cornbread");
                        if (filling==1)
                        {
                        printf("Filling Type : Chicken\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=220;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(220+(220*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(220+(220*20/100));
                            }
                            filling1--;
                        }
                        if (filling==2)
                        {
                        printf("Filling Type : Sea Food\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=320;
                            }
                            else if (size==2)
                            {
                            printf("Size : Medium\n");
                            filling_charge=(320+(320*10/100));
                            }
                            else if (size==3)
                            {
                            printf("Size : Large\n");
                            filling_charge=(320+(320*20/100));
                            }
                            filling2--;
                        }
                        if (filling==3)
                        {
                        printf("Filling Type : Vegetarian\n");
                            if (size==1)
                            {
                            printf("Size : Small\n");
                            filling_charge=120;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(120+(120*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(120+(120*20/100));
                                }
                                filling3--;
                            }
                            if (filling==4)
                            {
                            printf("Filling Type : Beef\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=270;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(270+(270*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(270+(270*20/100));
                                }
                                filling4--;
                            }
                            if (filling==5)
                            {
                            printf("Filling Type : Pork\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=270;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(270+(270*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(270+(270*20/100));
                                }
                                filling5--;
                            }
                            }
                        else if (bread==5)
                        {
                        printf("Bread Type : Cottage Loaf\n");
                            if (filling==1)
                            {
                            printf("Filling Type : Chicken\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=210;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(210+(210*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(210+(210*20/100));
                                }
                                filling1--;
                            }
                            if (filling==2)
                            {
                            printf("Filling Type : Sea Food\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=310;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(310+(310*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(310+(310*20/100));
                                }
                                filling2--;
                            }
                            if (filling==3)
                            {
                            printf("Filling Type : Vegetarian\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=110;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(110+(110*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(110+(280*20/100));
                                }
                                filling3--;
                            }
                            if (filling==4)
                            {
                            printf("Filling Type : Beef\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=260;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(260+(260*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(260+(260*20/100));
                                }
                                filling4--;
                            }
                            if (filling==5)
                            {
                            printf("Filling Type : Pork\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=260;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(260+(260*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(260+(260*20/100));
                                }
                                filling5--;
                            }
                            }
                        else if (bread==6)
                        {
                        printf("Bread Type : Coppia Ferrarese\n");
                            if (filling==1)
                            {
                            printf("Filling Type : Chicken\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=150;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(150+(150*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(150+(150*20/100));
                                }
                                filling1--;
                            }
                            if (filling==2)
                            {
                            printf("Filling Type : Sea Food\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=250;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(250+(250*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(250+(250*20/100));
                                }
                                filling2--;
                            }
                            if (filling==3)
                            {
                            printf("Filling Type : Vegetarian\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=120;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(120+(120*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(120+(120*20/100));
                                }
                                filling3--;
                            }
                            if (filling==4)
                            {
                            printf("Filling Type : Beef\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=180;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(180+(180*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(180+(180*20/100));
                                }
                                filling4--;
                            }
                            if (filling==5)
                            {
                            printf("Filling Type : Pork\n");
                                if (size==1)
                                {
                                printf("Size : Small\n");
                                filling_charge=180;
                                }
                                else if (size==2)
                                {
                                printf("Size : Medium\n");
                                filling_charge=(180+(180*10/100));
                                }
                                else if (size==3)
                                {
                                printf("Size : Large\n");
                                filling_charge=(180+(180*20/100));
                                }
                                filling5--;
                            }
                            }
                    {
                        if (topping==1)
                        {
                        printf("Topping is Cheese\n");
                        topping_charge=50;
                        }
                        else if (topping==2)
                        {
                        printf("Topping is Mayonnaise\n");
                        topping_charge=25;
                        }
                        else if (topping==3)
                        {
                        printf("Topping is Special Sauce\n");
                        topping_charge=100;
                        }
                        else if (topping==4)
                        {
                        printf("Toppings are Cheese and Mayonnaise\n");
                        topping_charge=75;
                        }
                        else if (topping==5)
                        {
                        printf("Toppings are Cheese and Special Sauce\n");
                        topping_charge=150;
                        }
                        else if (topping==6)
                        {
                        printf("Toppings are Special Sauce and Mayonnaise\n");
                        topping_charge=125;
                        }
                        else if (topping==7)
                        {
                        printf("Toppings are Cheese , Special Sauce and Mayonnaise\n");
                        topping_charge=175;
                        }
                    }
                    {
                    printf("Filling Charge : %d\n\n",filling_charge);
                    printf("Topping Charge is : %d\n\n",topping_charge);
                    printf("Quantity : %d\n\n",qty);
                    amount=((filling_charge+topping_charge)*qty);
                    printf("Amount : %d\n\n",amount);
                    }
                }
                    if (amount>1000)
                    {
                    discount=(amount*10/100);
                    printf("Discount : %d\n\n",discount);
                    }
                    else if (paying==1)
                    {
                    printf("Paying method : Visa\n\n");
                    discount=(amount*10/100);
                    printf("Discount : %d\n\n",discount);
                    }
                    else if (paying==0)
                    {
                    discount=0;
                    printf("Discount : 0\n\n");
                    }
                    gross=(amount-discount);
                    net=net+gross;
                    printf("Gross amount : %d\n\n",gross);
            }
        else printf("Bread is not available\n\n");
        }
    else printf("Filling is not available\n\n");
    }
    printf("Do you want to continue the above order ? If 'yes' enter 1 if 'no' enter 0 ");
    scanf("%d",&next);
    if (next==1)
        order++;
    else if (next==0)
        break;
    }
    printf("Net amount : %d\n\n",net);
    printf("-----------------------------------Thank you-----------------------------------");
}
