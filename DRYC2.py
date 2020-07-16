def repeat(func, args):
    def do(times):
        for _ in range(times):
            func(*args)
    return do

#example, print Hello world 10 times
repeat(print, ('Hello,', 'World'))(10)