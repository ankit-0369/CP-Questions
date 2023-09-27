import random
char=["!", "@", "#","%","$","^","&","*","ā","ś"]
for i in range(1000000):
	c=random.choice(char)
	print(c,c,"-", end="")
	i+=1

