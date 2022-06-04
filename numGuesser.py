import random
import time

print("Welcome to Number Guesser.\nThe Number will be in between 1 and 100.")
time.sleep(2)
print("I am Choosing the number...")
num = random.randint(1,100)
time.sleep(1)
print("um")
time.sleep(1)
guess=int(input("Ok... What's Your Guess? - "))
low=num-10
high=num+10
turns=1
while guess!=num:
	turns+=1
	time.sleep(1)
	if guess>low and guess<high:
		if guess>num:
			print ("You are too close.")
			time.sleep(.7)
			print("Just guess a little lower...")
		else:
			print ("You are too close.")
			time.sleep(.7)
			print("Just guess a little higher...")		
	else:
			if guess>num:
				print ("Guess Lower.")
			else:
				print ("Guess Higher.")
	guess=int(input("What's Your Guess? - "))
	print("\n")

if turns ==1:
	score = "Conquerer"
elif turns <=3:
	score = "Ace"
elif turns <=5:
	score = "Diamond"
elif turns <=7:
	score = "Gold"
elif turns <=10:
	score = "Silver"
else:
	print ("Bronze")
print("Calculating Results...")
time.sleep(1)
print(f"You are right the number was {num}. You Got {score} status...")
print('\n\nCoded By T C R D E V')
