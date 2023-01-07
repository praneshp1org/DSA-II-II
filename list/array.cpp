#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
class staticList{
  private:
int list1[MAX_SIZE];
int size;
public:
void insert(int item, int pos) {
  if (size == MAX_SIZE) {
    cout << "Error: list is full" << endl;
    return;
  }
  if (pos < 0 || pos > size) {
    cout << "Error: invalid position" << endl;
    return;
  }
  for (int i = size-1; i >= pos; i--) {
    list1[i+1] = list1[i];
  }
  list1[pos] = item;
  size++;
}

void deleteElement(int pos) {
  if (size == 0) {//
    cout << "Error: list is empty" << endl;
    return;
  }
  if (pos < 0 || pos >= size) {
    cout << "Error: invalid position" << endl;
    return;
  }
  for (int i = pos; i < size-1; i++) {
    list1[i] = list1[i+1];
  }
  size--;
}
};

int main() {
  staticList s;
  s.insert(10, 0);
  s.insert(20, 1);
  s.insert(30, 1);
  s.insert(40, 3);
  s.deleteElement(2);

  cout << endl;
  return 0;
}
