case class Circle(val radius: Int) {

  val pi = 3.14

  def area(): Double = {
    return radius * radius * pi
  }
}

object Main {
  def main(args: Array[String]) {
    val c = Circle(5)
    println(c.area())
  }
}
