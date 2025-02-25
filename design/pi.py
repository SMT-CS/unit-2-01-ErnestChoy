#!/usr/bin/env python3
"""
Created by: Ernest
Created on: February 2025
This is the "area and circumfurance finder" module
"""

import math

C = float(input("What is the width of diameter of the circle"))


def main() -> None:
    """The main() function calculates area and circumference, returns None."""
    print("If the diameter of the circle is:", C)
    print(f"The circumference is {(C*math.pi):.5f} mm")
    print("None.")


if __name__ == "__main__":
    main()
