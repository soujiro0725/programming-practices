object Compare {
  def main(args: Array[String]) {
    output(100, 200)
  }

  def output(a: Int, b: Int): Unit = {
    if (a > b) {
      printf("%d > %d\n", a, b)
    } else if (a < b) {
      printf("%d < %d\n", a, b)
    } else {
      printf("%d == %d", a, b)
    }
  }
}
