for i in range(256):
    b = "{:08b}".format(i)
    
    message = "#define assign_" + str(i) + "(R) assign(&R"

    for l in b:
        message += ", " + l

    message += ")"

    print(message)