while True:
    try:
        s = input()
        if 'How' in s:
            print(s.find('How')+1)
        else:
            print(-1)
    except EOFError:
        break