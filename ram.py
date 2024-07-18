import time

def consume_memory():
    # メモリを消費するための空リストを作成
    memory_hog = []

    try:
        while True:
            # 大量のデータをリストに追加
            memory_hog.append("a" * 10**6)  # 1MBの文字列を追加
            print(f"Memory consumed: {len(memory_hog)} MB")
            #time.sleep(0.1)  # 少し待機してから次の追加を行う
    except MemoryError:
        print("MemoryError: Out of memory!")
    except KeyboardInterrupt:
        print("Process interrupted by user.")

if __name__ == "__main__":
    consume_memory()
