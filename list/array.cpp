#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int list[MAX_SIZE];
int size;

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
    list[i+1] = list[i];
  }
  list[pos] = item;
  size++;
}

void delete(int pos) {
  if (size == 0) {//
    cout << "Error: list is empty" << endl;
    return;
  }
  if (pos < 0 || pos >= size) {
    cout << "Error: invalid position" << endl;
    return;
  }
  for (int i = pos; i < size-1; i++) {
    list[i] = list[i+1];
  }
  size--;
}

int main() {
  insert(10, 0);
  insert(20, 1);
  insert(30, 1);
  insert(40, 3);
  delete(2);
  for (int i = 0; i < size; i++) {
    cout << list[i] << " ";
  }
  cout << endl;
  return 0;
}
