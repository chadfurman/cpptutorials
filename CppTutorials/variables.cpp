#include <iostream>

using namespace std;

void variables()
{
  cout<<"Variables"<<std::endl<<"----"<<std::endl;
  int thisisanumber, doubled, halved, less2, equivalentToThree;
  cout << "Please enter a number: ";
  cin >> thisisanumber;
  cin.ignore();
  less2 = thisisanumber - 2;
  doubled = thisisanumber * 2;
  halved = thisisanumber / 2;
  equivalentToThree = thisisanumber == 3;

  cout << "You entered: " << thisisanumber << std::endl;
  cout << "doubled: " << doubled << std::endl;
  cout << "halved: " << halved << std::endl;
  cout << "less 2: " << less2 << std::endl;
  cout << "Equivalent to three?: " << equivalentToThree << std::endl;

  if (thisisanumber > 10) {
    cout << "That's a big number!" << std::endl;
    exit(0);
  } else if (thisisanumber < 10) {
    cout << "not even 10?" << std::endl;
  } else {
    cout << "Ahh, good old 10!" << std::endl;
  }

  for ( int x = 0; x < thisisanumber; x++ ) {
    cout << x << " ";
  }

  cout << std::endl;
}
