def get_day_of_week(day, month, year):
    # Zeller's Congruence algorithm
    if month < 3:
        month += 12
        year -= 1

    K = year % 100
    J = year // 100

    f = day + ((13 * (month + 1)) // 5) + K + (K // 4) + (J // 4) - (2 * J)
    day_of_week = f % 7

    # Convert Zeller's output to day of the week
    days = ["Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"]
    return days[day_of_week]

# Taking input for the date
day = int(input("Enter day: "))
month = int(input("Enter month: "))
year = int(input("Enter year: "))

# Getting the day of the week
day_of_week = get_day_of_week(day, month, year)

# Printing the result
print("The day of the week is:", day_of_week)
