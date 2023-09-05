#installed games
games = [
  'Soccer',
  'Tic Tac Toe',
  'Snake',
  'Puzzle',
  'Rally']

#taking player's choice as a number input
choice = int(input())

#output the corresponding game
if choice == 0:
  print(games[0])
elif choice == 1:
  print(games[1])
elif choice == 2:
  print(games[2])
elif choice == 3:
  print(games[3])
elif choice == 4:
  print(games[4])
