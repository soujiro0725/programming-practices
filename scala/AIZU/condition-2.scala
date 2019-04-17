object Compare2 {
  def main(args: Array[String]) {
    output("1 3 8 4 2")
  }

  def output(str: String): Unit = {
    val strs = str.split(" ")
    val nums = strs.map(_.toInt).toList


    nums.sorted.foreach { println }
  }
}
