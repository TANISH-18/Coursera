int binary_search(const vector<long long> &a, long long x) {
  long left = 0, right = (long)a.size()-1;
  long mid = 0;
  while(left<=right){
    mid = (left+right)/2;
    if(x < a[mid]){
        right = mid-1;
    }
    else if(x > a[mid]){
        left = mid+1;
    }
    else return mid;
  }
  return -1;
}
int main() {
  long long n;
  std::cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  long long m;
  std::cin >> m;
  vector<long long> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}