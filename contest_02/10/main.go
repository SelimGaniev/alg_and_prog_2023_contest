func shift(arr []int, step int) {
	var array []int
	if step < 0 {
		step = 10 - (step * (-1) % 10)
	}
	step = step % 10
	for i := 0; i < step; i++ {
		array = append(array, arr[10-step+i])
	}
	for i := step; i < 10; i++ {
		array = append(array, arr[i-step])
	}
	copy(arr,array)

}