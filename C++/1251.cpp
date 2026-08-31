#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int code;
  int count;
} Item;

bool compare(Item a, Item b) {
  if (a.count == b.count)
    return a.code > b.code;
  return a.count < b.count;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
  string input_str;
  int flag = 1;

  while (getline(cin, input_str)) {
    if (flag)
      flag = 0;
    else
      cout << '\n';
    
    vector<Item> items(100);
    for (auto item : input_str) {
      int code = item % 128;
      items[code-32] = {code, items[code-32].count + 1};
    }
    
    sort(items.begin(), items.end(), compare);

    for (auto item : items)
      if (item.count != 0)
        cout << item.code << " " << item.count << '\n';
  }
  
  return 0;
}