import sqlite3
conn = sqlite3.connect('apples.db')

cursor = conn.cursor()

cursor.execute('create table user(name varchar(20),pw varchar(15)) ')

cursor.execute('insert into user(name,pw) values("祉老鼠","2008.12.28")')
cursor.execute('insert into user(name,pw) values("陌年微凉","541rz")')
cursor.execute('insert into user(name,pw) values("ricky","jr20110909")')
cursor.execute('insert into user(name,pw) values("李子奥Leo","LZALeo")')
cursor.execute('insert into user(name,pw) values("user5","num)"')


cursor.close()

conn.commit()

conn.close()
