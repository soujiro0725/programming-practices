#!/usr/bin/env python
# -*- coding:utf-8 -*-

class Circle:
    def __init__(self, radius):
        self.radius = radius
        self.pi = 3.14

    def get_area(self):
        return self.radius * self.radius * self.pi

    def get_circumference(self):
        return self.radius * 2 * self.pi


if __name__ == '__main__':
    c = Circle(5) #インスタンス化

    print("area is {}".format(c.get_area()))
    print("circumference is {}".format(c.get_circumference()))

    
