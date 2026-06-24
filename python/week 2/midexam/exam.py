

# class Star_Cinema:
#     __hall_list = []
#     def __init__(self): 
#         pass

#     def entry_hall(self, hall):
#         self.__hall_list.append(hall)



# class Hall(Star_Cinema):
#     def __init__(self, rows, cols, hall_no):
#         self.__seats = {}
#         self.__show_list = [] 
#         self.__rows = rows
#         self.__cols = cols
#         self.__hall_no = hall_no

#         super().entry_hall(self)

#     def entry_show(self, id, movie_name, time):

#         if id in self.__seats: 
#             print("show already exists")

#         else: 
#             show = (id, movie_name, time) 
#             self.__seats[id] = [[0 for i in range(self.__cols)] for j in range(self.__rows)]
#             self.__show_list.append(show)

    
#     def view_show_list(self):
#         return self.__show_list
    
#     def book_seats(self, show_id, seats):

#         if show_id in self.__seats:
#             for row, col in seats: 
#                 if row < 0 or col < 0 or row >= self.__rows or col >= self.__cols:
#                     print("invalid seat")
#                     return False
#                 else: 
#                     if(self.__seats[show_id][row][col] == 0):
#                         self.__seats[show_id][row][col] = 1
#                         print(f"Seat row: {row}, col: {col} is booked successfully")
#                         # return True
#                     else:
#                         print(f"Seat {row}, {col} is already booked")
#                         return False
                
#         else:
#             print("invalid show id")
#             return False
    
#     def view_available_seats(self, show_id):
#         if show_id in self.__seats:
#             # print(self.__seats[show_id])
#             for row in self.__seats[show_id]:
#                 print(*row)
#         else:
#             print("invalid show id")


#     def view_booked_seats(self, show_id):
#         if show_id not in self.__seats:
#             print("Invalid show id")
#             return

#         booked = []

#         for r in range(self.__rows):
#             for c in range(self.__cols):
#                 if self.__seats[show_id][r][c] == 1:
#                     booked.append((r, c))

#         print("Booked Seats:", booked)


#     def replica(self, num):
#         print("1. Show List\n2. Seats\n3. Booked Seats")
#         while True:
#             if(num == 1):
#                 return self.__show_list
#             elif(num == 2):
#                 return self.__seats
#             elif(num == 3):
#                 # show all booked sits
#                 return self.__seats
#             else: 
#                 print("invalid option")
#                 break



# bongo = Hall(5, 5, 1)

# bongo.entry_show(101, "Avengers: Endgame", "10:00 AM")
# bongo.entry_show(102, "The Dark Knight", "01:00 PM")
# bongo.entry_show(103, "Interstellar", "04:00 PM")

# print(bongo.view_available_seats(101))






class Star_Cinema:
    # Private class attribute
    __hall_list = []

    @classmethod
    def entry_hall(cls, hall):
        cls.__hall_list.append(hall)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no

        # Inserting the object to the parent class's hall_list using inheritance
        super().entry_hall(self)

    def entry_show(self, show_id, movie_name, time):
        if show_id in self.__seats:
            print(f"Error: Show with ID {show_id} already exists.")
        else:
            show = (show_id, movie_name, time)
            self.__show_list.append(show)
            # Allocating a 2D list for seats, initially all 0 (free)
            self.__seats[show_id] = [[0 for _ in range(self.__cols)] for _ in range(self.__rows)]

    def view_show_list(self):
        print("\n--- Currently Running Shows ---")
        if not self.__show_list:
            print("No shows are currently running.")
            return
            
        for show in self.__show_list:
            print(f"Movie Name: {show[1]} | Show ID: {show[0]} | Time: {show[2]}")
        print("-------------------------------")

    def view_available_seats(self, show_id):
        if show_id not in self.__seats:
            print("\nError: Invalid show ID.")
            return

        print(f"\n--- Available Seats for Show ID: {show_id} ---")
        print("Legend: '0' = Free, '1' = Booked")
        for row in self.__seats[show_id]:
            print(row)
        print("------------------------------------------")

    def book_seats(self, show_id, seats_to_book):
        if show_id not in self.__seats:
            print("\nError: Invalid show ID. Booking failed.")
            return False

        for row, col in seats_to_book:
            # Check for invalid seat boundaries
            if row < 0 or row >= self.__rows or col < 0 or col >= self.__cols:
                print(f"Error: Seat ({row}, {col}) is an invalid seat. Booking failed.")
                continue
            
            # Check if already booked
            if self.__seats[show_id][row][col] == 1:
                print(f"Error: Seat ({row}, {col}) is already booked.")
            else:
                # Book the seat
                self.__seats[show_id][row][col] = 1
                print(f"Success: Seat ({row}, {col}) has been booked successfully!")


# --- Replica System (Counter Interface) ---
def replica_system(hall_obj):
    while True:
        print("\n=== Star Cinema Counter ===")
        print("1. View All Shows")
        print("2. View Available Seats")
        print("3. Book Tickets")
        print("4. Exit")
        
        choice = input("Enter Option: ")

        if choice == '1':
            hall_obj.view_show_list()
            
        elif choice == '2':
            show_id = input("Enter Show ID: ")
            # Ensure the input is treated as an integer if IDs are integers
            try:
                hall_obj.view_available_seats(int(show_id))
            except ValueError:
                print("Invalid input. Please enter a numerical ID.")
                
        elif choice == '3':
            show_id = input("Enter Show ID: ")
            try:
                show_id = int(show_id)
                num_tickets = int(input("How many tickets do you want to book? "))
                
                seats_to_book = []
                for _ in range(num_tickets):
                    row = int(input("Enter Seat Row: "))
                    col = int(input("Enter Seat Col: "))
                    seats_to_book.append((row, col))
                
                hall_obj.book_seats(show_id, seats_to_book)
            except ValueError:
                print("Invalid input. Please enter numbers only.")
                
        elif choice == '4':
            print("Exiting system. Have a great day!")
            break
            
        else:
            print("Invalid option. Please try again.")

# --- System Initialization ---
if __name__ == "__main__":
    # Create a Hall object
    bongo = Hall(5, 3, 1)

    # Insert some default shows
    bongo.entry_show(101, "Avengers: Endgame", "10:00 AM")
    bongo.entry_show(102, "The Dark Knight", "01:00 PM")
    bongo.entry_show(103, "Interstellar", "04:00 PM")

    # Run the interactive console
    replica_system(bongo)




'''
            Col 0  Col 1 Col 2
              ↓     ↓     ↓
Row 0 ───>   [0,    0,    0]
Row 1 ───>   [0,    0,    0]
Row 2 ───>   [0,    0,    0]
Row 3 ───>   [0,    0,    0]
Row 4 ───>   [0,    0,    0]
'''