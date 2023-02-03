#include <iostream>

void count_numbers(int array[4][4]){
    int num0=0;
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int num5=0;
    int num6=0;
    int num7=0;
    int num8=0;
    int num9=0;
    for (int r=0;r<4;r++){
        for (int c=0;c<4;c++){
            // The switch statement is to
            switch(array[r][c]){
                case 0:
                    num0++;
                    break;
                case 1:
                    num1++;
                    break;
                case 2:
                    num2++;
                    break;
                case 3:
                    num3++;
                    break;
                case 4:
                    num4++;
                    break;
                case 5:
                    num5++;
                    break;
                case 6:
                    num6++;
                    break;
                case 7:
                    num7++;
                    break;
                case 8:
                    num8++;
                    break;
                case 9:
                    num9++;
                    break;
            }
        }
    }
    std::cout<<"0:"<<num0<<";1:"<<num1<<";2:"<<num2<<";3:"<<num3<<";4:"<<num4<<";5:"<<num5<<";6:"<<num6<<";7:"<<num7<<";8:"<<num8<<";9:"<<num9<<";"<<std::endl;
}


