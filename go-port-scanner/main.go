package main

import (
	"fmt"

	"./port"
)

func main() {
	fmt.Println("")

	open := port.ScanPort("tcp", "localhost", 1313)

	fmt.Printf("Port Open: %t\n", open)

	results := port.InitialScan("localhost")

	fmt.Println(results)
}
