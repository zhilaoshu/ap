cland = int(input("请设定您的密码"))
name = (input("请输入你的用户名"))
cland2 = int(input("请确认您的密码"))
if cland2 == cland:
    print('你好',name)
else:
    print("用户密码不匹配！")
room = (input("请选择房间：（C）（C++）（PYTHON）（JAVA）"))
if room == "C":
    print("请进入房间)(网址暂时保密）")
elif room == "C++":
    print("请进入房间(网址暂时保密）")
elif room == "PYTHON":
    print("请进入房间(网址暂时保密）")
elif room == "JAVA":
    print("请进入房间(网址暂时保密）")
elif cland2 != cland:
    print("密码不正确！验证失败！")

