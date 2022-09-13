
#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath>

using namespace std; 

int boom(int x1, int y1, int x2, int y2, vector<int> CoordX, vector<int> CoordY, int NumMissiles);

int main() {

  int x1;
  int y1;
  int x2;
  int y2;
  int NumMissiles; 
  int temp;
  vector<int> CoordX;
  vector<int> CoordY;

  cin >> x1 >> y1 >> x2 >> y2;
  cin >> NumMissiles;

  for (int i = 0; i < NumMissiles; i++)
  {
    cin >> temp;
    CoordX.push_back(temp);
    cin >> temp;
    CoordY.push_back(temp);
  }

  cout << boom(x1, y1, x2, y2, CoordX, CoordY,NumMissiles) << endl;

  return 0;

}

int boom(int x1, int y1, int x2, int y2, vector<int> CoordX, vector<int> CoordY, int NumMissiles)
{
  int hold1;
  int hold2;
  int hold3;
  int hold4;
  int temp1; 
  int temp2;
  int max = 0;
  int max2 = 0;
  int sum = 0;
  int sum2 = 0;
  int sum3 = 0;

  for (int i = 0; i < NumMissiles; i++)
  {
    temp1 = sqrt(pow((CoordX[i] - x1), 2) + pow((CoordY[i] - y1), 2));
    if (temp1 >= max)
    {
      max = temp1;
      hold1 = CoordX[i];
      hold2 = CoordY[i];
    }
  }

  for (int j = 0; j < NumMissiles; j++)
  {
    temp2 = sqrt(pow((CoordX[j] - x2), 2) + pow((CoordY[j] - y2), 2));
    if (temp2 >= max2)
    {
      max2 = temp2;
      hold3 = CoordX[j];
      hold4 = CoordY[j];
    }
  }

  temp1 = pow((hold1 - x2),2) + pow((hold2 - y2),2);

  temp2 = pow((hold3 - x1),2) + pow((hold4 - y2),2);

  sum = temp1 + temp2;

  sum2 = pow((hold1 - x1),2) + pow((hold2 - y1),2);

  sum3 = pow((hold3 - x2),2) + pow((hold4 - y2),2);

  return min(sum , min(sum2, sum3));

}

