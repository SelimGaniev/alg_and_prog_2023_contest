package main

import (
"fmt"
)

func findn(nums []int) int {
result := 0
for _, num := range nums {
result ^= num
}
return result
}

func main() {
var n int
fmt.Scan(&n)

nums := make([]int, n)
for i := 0; i < n; i++ {
fmt.Scan(&nums[i])
}

result := findn(nums)
fmt.Println(result)
}