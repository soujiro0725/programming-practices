object Watch {
  def main(args: Array[String]) {
    output(46979)
  }

  def output(seconds: Int): Unit = {
    val hours = seconds / 3600
    val minutes = (seconds - hours * 3600) / 60
    val secondso = seconds % 60

    printf("%d:%d:%d", hours, minutes, secondso)
  }
}
