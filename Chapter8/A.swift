import Foundation

let a = Double(readLine()!)!

func babil(x: Double) -> Double  {
	return (x + a/x) / 2.0
}

var start = 1.0
while start * start < a { start += 1}

if a - (start-1)*(start-1) < start*start - a {
	start -= 1
}

for _  in 0..<10 {
	start = babil(x: start)
}

print(start)
print(sqrt(a))
