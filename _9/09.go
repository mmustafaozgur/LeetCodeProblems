package main

import (
	"fmt"
	"strconv"
)

func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}

	s := strconv.Itoa(x)
	for l, r := 0, len(s)-1; l <= r; {
		if s[l] != s[r] {
			return false
		}
		l++
		r--
	}
	return true
}

func main() {
	// Test cases
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
	fmt.Println(isPalindrome(10))
	fmt.Println(isPalindrome(-101))
	fmt.Println(isPalindrome(0))
}
