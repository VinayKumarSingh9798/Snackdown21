int main() {
  int n = 10; //n can be anything
  int sum = 0;
  float pie = 3.14;
  int var = 1;

  while (var < n){
    cout << pie << endl;
    for (int j=0; j<var; j++)
      sum+=1;
    var*=2;  
  }
  cout<<sum;
}
