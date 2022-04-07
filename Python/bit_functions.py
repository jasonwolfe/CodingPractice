def set_bit(value, bit):
    return value | (1<<bit)

def clear_bit(value, bit):
    return value & ~(1<<bit)

if __name__ == "__main__":
    print(set_bit(0,1)) 