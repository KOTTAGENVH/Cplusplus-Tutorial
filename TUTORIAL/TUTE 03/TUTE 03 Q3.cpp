#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function

struct box1
{
  int Height;
  int Width;
  int Lenght;

}box1,box2;

int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Lenght;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Lenght;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.Height,box1.Width,box1.Lenght )
             + volume(box2.Height,box2.Width,box2.Lenght );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
    
}

// Implement the functions here
int volume(int height,int width,int lenght)
{
  return height*width*lenght;
}