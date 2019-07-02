def rr(l, num): 
	output_list = [] 
	for item in range(len(lists) - num, len(l)): 
		output_list.append(l[item]) 
	for item in range(0, len(l) - num): 
		output_list.append(l[item]) 
			return output_list 
rotate_num = 3
list_1 = [1, 2, 3, 4, 5, 6] 
print(rr(list_1, rotate_num)) 
