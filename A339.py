
def merge(lst1, lst2):

    new_list = []
    while lst1 and lst2:
        if lst2[0] < lst1[0]:
            new_list.append(lst2[0])
            lst2 = lst2[1:]
        else:
            new_list.append(lst1[0])
            lst1 = lst1[1:]

    if len(lst1) == 0:
        new_list.extend(lst2)
        return new_list
    elif len(lst2) == 0:
        new_list.extend(lst1)
        return new_list

    return new_list

def merge_sort(lst):
    if lst == []:
        return lst
    if len(lst) == 1:
        return lst
    
    mid = len(lst)//2
    lst1 = merge_sort(lst[:mid])
    lst2 = merge_sort(lst[mid:])

    return merge(lst1, lst2)


s = input()
arr_s = s.split('+')
sort_arr_s = merge_sort(arr_s)
new_s = "+".join(sort_arr_s)
print(new_s)
