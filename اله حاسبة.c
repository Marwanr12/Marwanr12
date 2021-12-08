- 👋 Hi, I’m @Marwanr12
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
Marwanr12/Marwanr12 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
#include<stdio.h>
#include<cs50.h>
int main(){
    int num1 = get_int("ادخل الرقم الأول: ");
    int ope = get_char("أدخل العملية الحسابية: ");
    int num2 = get_int("ادخل الرقم الثاني :");
    if(ope=='+'){
        printf("%d\n",num1+num2);
    }

    else if(ope=='-'){
        printf("%d\n",num1-num2);
    }
     else if(ope=='*'){
        printf("%d\n",num1*num2);
    }
    else if(ope=='/'){
        printf("%d\n",num1/num2);
    }
    else if(ope=='%'){
        printf("%d\n",num1%num2);
    }
    else {
        printf("ERROR!\n");
    }

}
