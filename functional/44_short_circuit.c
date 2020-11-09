int g = 0;

int func(int n) {
  g = g + n;
  putint(g);
  return g;
}

int main() {
  int i;
  i = getint();
  i = i > 10 && func(i);
  i = getint();
  i = i > 11 && func(i);
  i = getint();
  i = i <= 99 || func(i);
  i = getint();
  i = i <= 100 || func(i);
  i = !func(99) && func(100);
  return 0;
}
