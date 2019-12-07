def calculateArea(base, height):
    area = (base*height)/2
    print "Area: ", area
    return area

def getHeight():
    height = input("Enter Height: ")
    return height

def getBase():
    base = input("Enter Base: ")
    return base

if __name__ == "__main__":
    calculateArea(getBase(), getHeight())
