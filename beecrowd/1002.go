package main

import (
	"fmt"
	"math"
)

func main() {
	n := 3.14159
	var raio float64
	fmt.Scan(&raio)
	fmt.Printf("A=%.4f\n", n*math.Pow(raio, 2))
}
