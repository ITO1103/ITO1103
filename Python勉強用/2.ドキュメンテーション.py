def my_func():
    """docstring-test
    line1
    line2
    line3
    """

print(my_func.__doc__) #  docstringは__doc__属性に文字列として格納されている。print()で出力できる。
#  docstring-test
#  line1
#  line2
#  line3
#

print(type(my_func.__doc__))
#<class 'str'>

help(my_func) #  Jupyter Notebookやターミナルでの対話環境（pythonまたはpython3コマンドで起動するPythonインタプリタ）で組み込み関数help()に対象のオブジェクトを渡して実行するとそのdocstringが対話的ヘルプシステムで出力される。
# Help on function my_func in module __main__:
# 
# my_func()
#     docstring-test
#     line1
#     line2
#     line3
# 

