import struct
def float_to_hex(f):
    return hex(struct.unpack('<I', struct.pack('<f', f))[0])

print(float_to_hex(64.0))

