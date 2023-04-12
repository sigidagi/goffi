// filename: libtest.go
package main

/*
typedef struct MySetup {
	int Version , Passcode;
} MySetup_t;
*/
import "C"

//export GetKey
func GetKey() *C.char {
	theKey := "123-456-789"
	return C.CString(theKey)
}

//export InitSetup
func InitSetup(s *C.MySetup_t) {

	s.Version = 1
	s.Passcode = 202021
}

func main() {}
