import turtle, random, copy

# Setting up the global variable

wn = turtle.Screen()
wn.title("TicTacToe")

# Makes the program more dynamic for different screen sizes
BOARD_DIMENSION = turtle.window_height() * 0.85
BUTTON_POS = -BOARD_DIMENSION // 2
BUTTON_OFFSET = (-BUTTON_POS) / 1.2

BUTTONS = []

GAME_BOARD = [["W", "W", "W"],
              ["W", "W", "W"],
              ["W", "W", "W"]]

BOX_LOCATIONS = [[[0,0],[0,0],[0,0]],
                [[0,0],[0,0],[0,0]],
                [[0,0],[0,0],[0,0]]]

PLAYER_TEXT_TO_WRITE = "X"
AI_TEXT_TO_WRITE = "O"


# Stores the object of BoardDraw after the main function is executed
#drawScreens = False


class screenGraphics(object):

    def __int__(self):
        pass

    def welcomeScreen(self):
        """
        Draws the welcome screen with welcome screen buttons
        :return:None
        """

        global BOARD_DIMENSION, BUTTONS

        reset()
        wn.onclick(button_event)

        welcomeTurtle = turtle.Turtle()
        welcomeTurtle.ht()
        welcomeTurtle._tracer(False)
        welcomeTurtle.setpos(0,BOARD_DIMENSION/3)
        welcomeTurtle.write("Welcome to my", move=False, align="center", font=("Arial", int(BOARD_DIMENSION//10), "normal"))
        welcomeTurtle.setpos(0,BOARD_DIMENSION/3 - (BOARD_DIMENSION/9))
        welcomeTurtle.write("TicTacToe Game", move=False, align="center", font=("Arial", int(BOARD_DIMENSION//10), "normal"))

        newGameButton = createButton(-BOARD_DIMENSION//9.8, -BOARD_DIMENSION//2,"New Game", "drawScreens.newGame()",20)
        BUTTONS.append(newGameButton)

    def boardScreen(self):
        """
        Draws the board screen with board screen buttons
        :return:None
        """

        global BOX_LOCATIONS, BOARD_DIMENSION, BUTTONS

        reset()
        wn.onclick(button_event)

        boardTurtle = turtle.Turtle()
        boardTurtle.ht()

        # Initially moves the turtle to the coordinates(6,6), so the board looks more centered
        boardTurtle._tracer(False)
        boardTurtle.color("#C4C4C4")

        boardTurtle.up()
        boardTurtle.goto(-(BOARD_DIMENSION / 2) - 10, -BOARD_DIMENSION / 2.35)
        boardTurtle.down()

        #Drawing the main board(big square)
        for i in range(4):
            boardTurtle.forward(BOARD_DIMENSION)
            boardTurtle.left(90)

            # Saves the coordinates of the main_turtle, so the main_turtle goes to the top left corner before drawing the rest of ther board
            if i == 2:
                gotoX = boardTurtle.xcor()
                gotoY = boardTurtle.ycor()

        # Goes to the saved coordinates before starting to draw the little square, so it is easier to work with game_board
        boardTurtle.up()
        boardTurtle.goto(gotoX, gotoY)
        boardTurtle.down()

        #Drawing the 9x9 grid inside the main square
        for row in range (3):
            for col in range(3):

                BOX_LOCATIONS[row][col][0] = boardTurtle.xcor()
                BOX_LOCATIONS[row][col][1] = boardTurtle.ycor()

                if row % 2 == 0:
                    if col % 2 == 0:
                    # Will get out of the else/if block if the second statment is invalid, thus making a blank square
                        boardTurtle.begin_fill()
                        for i in range(4):
                            boardTurtle.forward(BOARD_DIMENSION / 3)
                            boardTurtle.right(90)
                        boardTurtle.end_fill()
                else:
                    if col % 2 != 0:
                        boardTurtle.begin_fill()
                        for i in range(4):
                            boardTurtle.forward(BOARD_DIMENSION / 3)
                            boardTurtle.right(90)
                        boardTurtle.end_fill()

                # Works as an offset(moves the mainTurtle down the x-axis)
                boardTurtle.setx(boardTurtle.xcor() + (BOARD_DIMENSION / 3))

            # Moves the mainTurtle down the y-axis
            boardTurtle.up()
            boardTurtle.setpos((boardTurtle.xcor() - (BOARD_DIMENSION / 3) * 3), (boardTurtle.ycor() - (BOARD_DIMENSION / 3)))
            boardTurtle.down()

        newGameButton = createButton(-BOARD_DIMENSION//9.8+(-BOARD_DIMENSION//5), -BOARD_DIMENSION//2,"New Game", "drawScreens.newGame()",20)
        BUTTONS.append(newGameButton)

        toWelcomeScreenButton = createButton(-BOARD_DIMENSION//9.8-(-BOARD_DIMENSION//5),-BOARD_DIMENSION//2,"Main Menu","drawScreens.welcomeScreen()",20)
        BUTTONS.append(toWelcomeScreenButton)

    def endScreen(self, text_to_write):
        """
        Draws the end screen with welcome end buttons
        :param text_to_write: Name of the Player that won
        :return: None
        """

        global BOARD_DIMENSION, BUTTONS

        reset()
        wn.onclick(button_event)

        endTurtle = turtle.Turtle()
        endTurtle.ht()
        endTurtle._tracer(False)

        endTurtle.setpos(0,BOARD_DIMENSION/3 - (BOARD_DIMENSION/4))
        if text_to_write == "It's a tie":
            endTurtle.write(text_to_write, move=False, align="center", font=("Arial", int(BOARD_DIMENSION//10), "normal"))
        else:
            endTurtle.write(text_to_write +" Won", move=False, align="center", font=("Arial", int(BOARD_DIMENSION//10), "normal"))

        newGameButton = createButton(-BOARD_DIMENSION//9.8+(-BOARD_DIMENSION//5), -BOARD_DIMENSION//2,"New Game", "drawScreens.newGame()",20)
        BUTTONS.append(newGameButton)

        toWelcomeScreenButton = createButton(-BOARD_DIMENSION//9.8-(-BOARD_DIMENSION//5),-BOARD_DIMENSION//2,"Main Menu","drawScreens.welcomeScreen()",20)
        BUTTONS.append(toWelcomeScreenButton)

    def newGame(self):
        """
        Calls the board screen function
        :return:None
        """

        global GAME_BOARD

        reset()

        self.boardScreen()
        wn.onclick(click)

class createButton(object):


    def __init__(self, x_cor, y_cor, text_to_write, code_to_exec, font_size, width = 0):
        """

        :param x_cor:
        :param y_cor:
        :param text_to_write: Text inside the button
        :param code_to_exec: Code to be executed when the button is clicked
        :param font_size: Size of the text inside the button
        :param width:
        :return:
        """

        self.helpTurtle = turtle.Turtle()
        self.helpTurtle.ht()
        self.helpTurtle._tracer(False)
        self.helpTurtle.color("black")
        self.helpTurtle.fillcolor("yellow")

        self.x_cor = x_cor
        self.y_cor = y_cor
        self.text_to_write = text_to_write
        self.code_to_exec = code_to_exec
        self.font_size = font_size

        if width == 0:
            self.width = self.text_width()

        self.height = self.width//3

        self.drawButton()

    def text_width(self):
        """
        Calculates the needed width for the button based on the text
        :return: width
        """

        self.helpTurtle._tracer(False)

        # Writing text out to measure how big our button should be
        init_x = self.helpTurtle.xcor()

        # Increase the font variable so the button look nicer
        self.helpTurtle.write(self.text_to_write, move=True, align="left", font=("Ariel", self.font_size+3))
        self.helpTurtle.clear()

        self.width = self.helpTurtle.xcor() - init_x

        return self.width

    def drawButton(self):
        """
        Draws button on the screen
        :return: None
        """

        self.helpTurtle._tracer(False)

        self.helpTurtle.up()
        self.helpTurtle.setpos(self.x_cor, self.y_cor)
        self.helpTurtle.down()

        self.helpTurtle.begin_fill()
        for i in range(4):
            if i % 2 == 0:
                self.helpTurtle.forward(self.width)
            else:
                self.helpTurtle.forward(self.height)
            self.helpTurtle.right(90)
        self.helpTurtle.end_fill()

        # Write text inside the button
        self.helpTurtle.color("black")
        self.helpTurtle.up()
        self.helpTurtle.setpos(self.helpTurtle.xcor()+(self.width)/2, self.helpTurtle.ycor() - (self.height)*0.85)
        self.helpTurtle.down()
        self.helpTurtle.write(self.text_to_write, move=True, align="center", font=("Ariel", self.font_size))

    def checkClicked(self, x,y):
        """
        Checks if the user has clicked inside any of the buttons
        :param x: x-coordinate
        :param y: y-coordinate
        :return: None
        """

        if (int(self.x_cor) < x < int(self.x_cor + self.width)) and (int(self.y_cor) > y > int(self.y_cor - self.height)):
            return True
        else:
            return False

    def executeFunction(self):
        """
        Executes the desired function or method
        :return: None
        """

        exec(self.code_to_exec)

def reset():
    """
    Resets the game board, clears the buttons, and clears the screen
    :return: None
    """

    global GAME_BOARD

    wn.clear()
    del BUTTONS[:]
    GAME_BOARD = [["W", "W", "W"],
                  ["W", "W", "W"],
                  ["W", "W", "W"]]

def button_event(x, y):
    """
    Checks if the user has clicked on a button
    :param x: x-coordiante
    :param y: y-coordiante
    :return: None
    """

    for button in BUTTONS:
        if button.checkClicked(x,y):
            button.executeFunction()

def isvalidMove(row, col):
    """
    This function checks if the desired square is taken or free for the desired move
    :param row: desired row coordinate
    :param col: desired col coordinate
    """
    global GAME_BOARD

    if GAME_BOARD[row][col] == "W":
        return True
    return False

def isBoardFull():
    """
    Checks if the board still has free squares available
    :return:False - if has open squares
    :return:True - if doesn not have open squares
    """

    global GAME_BOARD

    for row in range (len(GAME_BOARD)):
        for col in range(len(GAME_BOARD[row])):
            if GAME_BOARD[row][col] == "W":
                return False
    return True

def executeMove(row, col, selectedTurtle, text_to_write):
    """
    This function executes the move and gets called when ever the ai or the player makes a move and appends the piece character
    to the game_board at that location
    :param row: where to go
    :param col: where to go
    :param selectedTurtle: either aiTurtle or playerTurtle
    :param text_to_write:  either ai_text_to_write or player_text_to_write
    :return: None
    """

    global GAME_BOARD, BOX_LOCATIONS

    # Moves the selectTurtle to the middle of the desired square
    selectedTurtle.up()
    selectedTurtle.goto((BOX_LOCATIONS[row][col][0]) + BOARD_DIMENSION/6, BOX_LOCATIONS[row][col][1] - BOARD_DIMENSION/3)
    selectedTurtle.down()

    # Writes out the piece character
    selectedTurtle.write(text_to_write, move=False, align="center", font=("Arial", int(BOARD_DIMENSION/4), "normal"))

    # Update the game_board by appending the piece character
    GAME_BOARD[row][col] = text_to_write

def combinations():
    """
    Scans through the game board and seeks for all possible combinations
    :return: 1 - if the AI has won
    :return: 2 - if the Player has won
    :return: 3 - if the no combinations has been made by either players
    """

    global GAME_BOARD, PLAYER_TEXT_TO_WRITE, AI_TEXT_TO_WRITE

    # possibleMoves has all the possible combinations possible in the tictactoe game
    possibleMoves = [[[0,0],[1,1],[2,2]],# diagonal
                     [[0,2],[1,1],[2,0]],
                     [[0,0],[0,1],[0,2]],# vertical
                     [[1,0],[1,1],[1,2]],
                     [[2,0],[2,1],[2,2]],
                     [[0,0],[1,0],[2,0]],# horizontal
                     [[0,1],[1,1],[2,1]],
                     [[0,2],[1,2],[2,2]]]

    def checkForMove():
        for possible_val in possibleMoves:
            cur_own_ai = 0
            for current_move in possible_val:
                if GAME_BOARD[current_move[0]][current_move[1]] == AI_TEXT_TO_WRITE:
                    cur_own_ai += 1
            if cur_own_ai == 3:
                return 1

        for possible_val in possibleMoves:
            cur_own_p = 0
            for current_move in possible_val:
                if GAME_BOARD[current_move[0]][current_move[1]] == PLAYER_TEXT_TO_WRITE:
                    cur_own_p += 1
            if cur_own_p == 3:
                return 2
        return 3
    return checkForMove()

def click(x,y):
    """
    This function checks if the user has clicked on a specific button by calling the checkClicked method for every button in the BUTTONS list
    :param x: x-coordinate
    :param y: y-coordinate
    :return: None
    """
    global BOX_LOCATIONS, GAME_BOARD, PLAYER_TEXT_TO_WRITE

    # Setting up the turtle
    playerTurtle = turtle.Turtle()
    playerTurtle.color("#ff471a")
    playerTurtle.ht()
    playerTurtle._tracer(False)

    # Evaluates if the player has clicked inside the game)board dimension
    if((BOX_LOCATIONS[0][0][0] < x < (BOX_LOCATIONS[2][2][0]) + BOARD_DIMENSION/3)) and ((BOX_LOCATIONS[0][0][1] > y > (BOX_LOCATIONS[2][2][1]) - BOARD_DIMENSION/3)):

        # Evaluates if the player has clicked inside one of the squares
        for row in range(3):
            for col in range(3):
                if(BOX_LOCATIONS[row][col][0] < x < BOX_LOCATIONS[row][col][0]+BOARD_DIMENSION/3) and (BOX_LOCATIONS[row][col][1]-BOARD_DIMENSION/3 < y < BOX_LOCATIONS[row][col][1]):

                    if isvalidMove(row, col):
                        executeMove(row, col, playerTurtle, PLAYER_TEXT_TO_WRITE)
                        aiMove()

                    if combinations() == 2:
                        drawScreens.endScreen("Player")
                    elif combinations() == 1:
                        drawScreens.endScreen("AI")
                    elif isBoardFull():
                        drawScreens.endScreen("It's a tie")

    else:
        for button in BUTTONS:
            if button.checkClicked(x,y):
                button.executeFunction()

def aiMove():
    """
    Generates a random AI move to an open/available square on the game board
    :return:
    """

    aiTurtle = turtle.Turtle()
    aiTurtle.color("#0066cc")
    aiTurtle.ht()
    aiTurtle._tracer(False)

    # Picks a random row and col between 0 and 2
    randomRow = random.randrange(3)
    randomCol = random.randrange(3)

    if isBoardFull() == False:
        # Checks to see if random has chose a valid move
        if isvalidMove(randomRow, randomCol):
            executeMove(randomRow, randomCol, aiTurtle, AI_TEXT_TO_WRITE)
        # If the chosen move is not valid, then execute the aiMove function again
        else:
            aiMove()

def main():

    global drawScreens

    drawScreens = screenGraphics()
    drawScreens.welcomeScreen()

main()
turtle.done()
