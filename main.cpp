#include <iostream>

using namespace std;

int main()
{
float perimeter ;
float area ;
char geometry[10];

// square
string n_square = "square";
float square_sides ;

cout << "Please enter the type of geometry " << endl ;
cin >> geometry ;
cout << endl ; 
if (geometry == n_square) {
    cout << "please enter a square sides:" << endl ;
    cin >> square_sides ;
    perimeter = square_sides * 4 ;
    cout << "square perimeter : " << perimeter << endl ;
    area = square_sides * square_sides ;
    cout << "square area : " << area << endl ;
}

return 0 ;

}