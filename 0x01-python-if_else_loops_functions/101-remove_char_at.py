def remove_char_at(input_str, n):
    if n < 0 or n >= len(input_str):
        return "Invalid index"

    return input_str[:n] + input_str[n+1:]
