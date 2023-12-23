import math
import time

short_delay = 0.00618
fast_delay 	= 0.15

def typeout(message: str, textdelay: float):
	i = 0
	while i < len(message):
		time.sleep(textdelay)
		print(message[i], end="", flush=True)
		i += 1
	print("\n",end="")

def draw_triangle(h: int):
	i = 0;
	s = 1
	b = ( 2 * h - 1 )
	p = ( math.ceil(b / 2) ) - 1
	while i < h:
		typeout(p*" "+"#"*s, short_delay)
		i += 1
		s += 2
		p -= 1

def print_padd(h: int, txt: str):
	b = ( 2 * h - 1 )
	p = ( math.ceil(b / 2) ) - 1
	typeout(p * " " + txt, short_delay)

print("\n\n");
print_padd(8, "*")
draw_triangle(8)
draw_triangle(8)
print_padd(7, "[ ]")
print_padd(7, "[ ]")
typeout("\n\n", 			fast_delay);
typeout("Merry Christmas!", fast_delay);
typeout("\n\n", 			fast_delay);