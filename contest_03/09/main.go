package main
import (
"fmt"
"sort"
)

func findPair(nums []int, target int) (int, int) {
seen := make(map[int]bool)
for _, num := range nums {
diff := target - num
if _, ok := seen[diff]; ok {
return diff, num
}
seen[num] = true
}
return 0, 0
}
func main() {
var n, x int
fmt.Scan(&n, &x)
nums := make([]int, n)
for i := 0; i < n; i++ {
fmt.Scan(&nums[i])
}
sort.Ints(nums)
a, b := findPair(nums, x)
fmt.Println(a, b)
}