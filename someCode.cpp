unsigned int greatest_common_divisor(unsigned int a, unsigned int b) {
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;

  if (a > b)
    return greatest_common_divisor(a%b, b);
  return greatest_common_divisor(a, b%a);
}
