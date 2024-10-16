CC = dcc

TARGET1 = line_length
TARGET2 = simpleStr
TARGET3 = threeErrors
TARGET4 = strip_comments
TARGET5 = filter_empty_lines
TARGET6 = strlength
TARGET7 = reverse

SRCS1 = line_length.c
SRCS2 = simpleStr.c
SRCS3 = threeErrors.c
SRCS4 = strip_comments.c
SRCS5 = filter_empty_lines.c
SRCS6 = strlength.c
SRCS7 = reverse.c

all: $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6) $(TARGET7)

$(TARGET1): $(SRCS1)
	$(CC) -o $(TARGET1) $(SRCS1)

$(TARGET2): $(SRCS2)
	$(CC) -o $(TARGET2) $(SRCS2)

$(TARGET3): $(SRCS3)
	$(CC) -o $(TARGET3) $(SRCS3)

$(TARGET5): $(SRCS5)
	$(CC) -o $(TARGET5) $(SRCS5)

$(TARGET6): $(SRCS6)
	$(CC) -o $(TARGET6) $(SRCS6)

$(TARGET7): $(SRCS7)
	$(CC) -o $(TARGET7) $(SRCS7)

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5) $(TARGET6) $(TARGET7)