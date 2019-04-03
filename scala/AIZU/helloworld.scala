object HelloWorld {
  def main(args: Array[String]) {
    if (args.size == 0) {
      val strs = Array("Hello", "World")
      output(strs)
    } else {
      printf("invalid args")
    }
  }

  def output(strs: Array[String]): Unit = {
    for (str <- strs) {
      printf("%s", str)
    }
  }
}
