import os

IN = input("Please enter sth: ")
func = IN.split('(')[0]
pos1 = IN.find('(')
pos2 = IN.find(',')
pos3 = IN.find(')')
name = IN[pos1 + 1 :pos2]
adress = IN[pos2 + 1 :pos3]

if str(func) == 'create_dir':
    os.chdir(adress)
    l = os.listdir()

    for item in l:
        flag = True
        if item == name:
            print('Directory Already Exists!')
            flag = False
            break
        
    if flag == True:
        os.mkdir(os.path.join(adress, name))

elif str(func) == 'create_file':
    os.chdir(adress)
    l = os.listdir()

    for item in l:
        flag = True
        if item == name:
            print('File Already Exists!')
            flag = False
            break
        
    if flag == True:
        os.mknod(os.path.join(adress, name))
    
elif str(func) == 'delete':
    os.chdir(adress)
    l = os.listdir()

    for item in l:
        flag = True
        if item == name:
            os.remove(os.path.join(adress, name))
            flag = False
            break
        
    if flag == True:
        print('There is no such file!')
    

elif str(func) == 'find':
    result = []
    for root, dirs, files in os.walk(adress):
        if name in files:
            result.append(os.path.join(root, name))
    print(result)
    