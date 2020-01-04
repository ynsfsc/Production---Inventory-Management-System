//
//  simplex_method.cpp
//  Final Project
//

#include<iostream>
#include<cmath>

using namespace std;

#define M 10000

float table[11][31];  // create a table
int m = 0, n = 0, t = 0;//m: #of variables
                        //n: #of constraints
//t:type of objective (min = -1 ，max = 1 )

void input(){
    cout << "Please enter the following parameters as prompted:" << endl << endl;
    cout << "Number of variables m: ";
    cin >> m;
    cout << endl << "Number of constraints n: ";
    cin >> n;
    int i, j;
    for (i = 0; i <= n + 1; i++)   //Initialize the table
    for (j = 0; j <= m + n + n; j++)
        table[i][j] = 0;
    
    cout << endl << "The coefficients of the constraints and the direction of the constraints （1 means <= , -1 means >=）:" << endl << endl << "            ";    //Input the coefficients of the constraints
    for (i = 1; i <= m; i++){
        cout << " X" << i;
    }
    cout << "  Direction " << " Right Hand Side" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << "Inequality" << i << "  ";
        for (j = 1; j <= m + 2; j++){
            cin >> table[i][j];
        }
    }
 
    for (i = 1; i <= n; i++)
    {
        table[i][0] = table[i][m + 2];
        table[i][m + 2] = 0;
    }
    
    cout << endl << endl << "Input the coefficients of the objective and the type of the objective （type: min=1; max=-1 ）:" << endl << endl << "              ";
    for(i=1;i<=m;i++){
        cout << "X" << i << "   ";
    }
    cout << "Type" << endl;
    cout << "Objective:   ";
    for (i = 1; i <= m; i++){
        cin >> table[0][i];
    }
    cin >> t;
    
    if (t == -1)
    for (i = 1; i <= m; i++)
        table[0][i] = (-1)*table[0][i];
    for (i = 1; i <= n; i++)
    {
        table[i][m + i] = table[i][m + 1];
        if (i != 1)
            table[i][m + 1] = 0;
    }
}
 

void compute()
{
    int i, j, flag, temp1, temp2, h, k = 0, temp3[10];
    float a, b[11], temp, temp4[11], temp5[11], f = 0, aa, d, c;
    //Initialize the table
    for (i = 1; i <= n; i++)
        temp3[i] = 0;
    for (i = 0; i < 11; i++)
    {
        temp4[i] = 0;
        temp5[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        if (table[i][m + i] == -1)
        {
            table[i][m + n + i] = 1;
            table[0][m + n + i] = M;
            temp3[i] = m + n + i;
        }
        else
            temp3[i] = m + i;
    }
    for (i = 1; i <= n; i++)
        temp4[i] = table[0][temp3[i]];
 
    do{
        for (i = 1; i <= m + n + n; i++)
        {
            a = 0;
            for (j = 1; j <= n; j++){
                a += table[j][i] * temp4[j];
            }
            table[n + 1][i] = table[0][i] - a;
        }
        for (i = 1; i <= m + n + n; i++){
            if (table[n + 1][i] >= 0)
                flag = 1;
            else
            {
                flag = -1;
                break;
            }
        }
        if (flag == 1)
        {
            for (i = 1; i <= n; i++)
            {
                if (temp3[i] <= m + n)
                    temp1 = 1;
                else
                {
                    temp1 = -1;
                    break;
                }
            }
            
            //output
            cout << endl << endl;
            cout << "－－－－－－－－－－Output－－－－－－－－－－－" << endl << endl;
            if (temp1 == 1)
            {
                cout << "There exists an optimal solution!" << endl << endl << "The optimal solution is:" << endl << endl << "     ";
                for (i = 1; i <= n; i++)
                    temp5[temp3[i]] = table[i][0];
                for (i = 1; i <= m; i++)
                    f += t*table[0][i] * temp5[i];
 
                for (i = 1; i <= m; i++)
                {
                    cout << "X" << i << " = " << temp5[i];
                    if (i != m)
                        cout << ", ";
                }
                cout << " ;" << endl << endl << "The optimal objective value is " << f << endl << endl;
                return;
            }
            else
            {
                cout << "There is NO solution!" << endl << endl;
                return;
            }
        }
        if (flag == -1)
        {
            temp = 100000;
            for (i = 1; i <= m + n + n; i++)
            if (table[n + 1][i] < temp)
            {
                temp = table[n + 1][i];
                h = i;
            }
 
            for (i = 1; i <= n; i++)
            {
                if (table[i][h] <= 0)
                    temp2 = 1;
                else {
                    temp2 = -1;
                    break;
 
                }
            }
        }
        if (temp2 == 1)
        {
            cout << "The optimal solution is unbounded.";
            return;
        }
        if (temp2 == -1)
        {
            c = 100000;
            for (i = 1; i <= n; i++)
            {
                if (table[i][h] != 0)
                    b[i] = table[i][0] / table[i][h];
                if (table[i][h] == 0)
                    b[i] = 100000;
                if (b[i] < 0)
                    b[i] = 100000;
                if (b[i] < c)
                {
                    c = b[i];
                    k = i;
                }
            }
            temp3[k] = h;
            temp4[k] = table[0][h];
            d = table[k][h];
            for (i = 0; i <= m + n + n; i++)
                table[k][i] = (table[k][i] / d);
            for (i = 1; i <= n; i++)
            {
                if (i == k)
                    continue;
                aa = table[i][h];
                for (j = 0; j <= m + n + n; j++)
                    table[i][j] = table[i][j] - aa*table[k][j];
            }
        }
    } while (1);
    return;
}
 


int main(){
    input();
    compute();
    return 0;
}




//example
//
//constraints:
//             X1  X2  X3  Direction  RHS
//Inequality1  1   1   3      1        30
//Inequality2  2   2   5      1        24
//Inequality3  4   1   2      1        36
//
//objective:
//            X1   X2   X3   Type
//objective:  3    1    2     -1
