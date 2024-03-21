package main

func mySqrt(x int) int {
	var sqrt int
	var i int

	for i = 0; i <= x; i++ {
		sqrt = i * i

		if sqrt == x {
			break
		} else if sqrt > x {
			i--
			break
		}
	}
	return i
}

func main() {
	// Test cases
	println(mySqrt(4) == 2)
	println(mySqrt(8) == 2)
	println(mySqrt(9) == 3)
	println(mySqrt(10) == 3)
}
