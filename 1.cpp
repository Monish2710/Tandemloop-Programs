# include <iostream>
using namespace std;

int main()
{
    char calc;
    float a, b;

    cout << "Enter operator either Add or Sub or Multiply or Divide : ";
    cin >> calc;

    cout << "Enter two operands: ";
    cin >> a >> b;

    switch(calc)
    {
        case 'Add':
            cout << a+b;
            break;

        case 'Sub':
            cout << a-b;
            break;

        case 'Multiply':
            cout << a*b;
            break;

        case 'Divide':
            cout << a/b;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}



Output
Enter operator either Add or Sub or Multiply or Divide : Sub
Enter two operands: 
3.4
8.4
3.4 - 8.4 = -5.0
