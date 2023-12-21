import time

textdelay = 0.005

def write(message: str):
	print(message, end="", flush=True)

def type(message: str):
	global textdelay
	i = 0
	while i < len(message):
		time.sleep(textdelay)
		write(message[i])
		i += 1
	print("\n",end="")


# a little demo
def menu():
	type("Main Menu\n\n")
	type("Welcome to the game!\nPlease pick an option!\n")
	type(" [ 1 ] - Play Game")
	type(" [ 2 ] - Options Menu")
	type(" [ 3 ] - Quit Game\n")

	player_input = input("Player > ")

	match player_input:
		case '1':
			type("Playing Game...")
		case '2':
			type("Viewing Options")
		case '3':
			type("exiting...")
			exit(69)
		case _:
			type("Invalid Entry")
menu()