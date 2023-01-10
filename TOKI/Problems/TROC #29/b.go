package main

import (
	"fmt"
)

func main() {
	var n, x, y, i int64
	odd := 0
	even := 0

	fmt.Scanf("%d\n", &n)

	for i = 0; i < n; i++ {
		fmt.Scanf("%d %d\n", &x, &y)

		if (x+y)%2 == 1 {
			odd++
		} else {
			even++
		}
	}

	if odd >= 1 && even >= 1 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
