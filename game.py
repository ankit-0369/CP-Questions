import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Set up the game window
width, height = 600, 400
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game")

# Set up colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)

# Set up the snake
snake_size = 20
snake_speed = 15
snake = [(width // 2, height // 2)]
snake_direction = (1, 0)  # Initial direction: right

# Set up the food
food_size = 20
food = (random.randint(0, (width - food_size) // food_size) * food_size,
        random.randint(0, (height - food_size) // food_size) * food_size)

# Set up the score
score = 0

# Set up the game loop
clock = pygame.time.Clock()

# Flag to determine if the game is paused
paused = False

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        # Check for arrow key presses to change snake direction
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP and snake_direction != (0, 1):
                snake_direction = (0, -1)
            elif event.key == pygame.K_DOWN and snake_direction != (0, -1):
                snake_direction = (0, 1)
            elif event.key == pygame.K_LEFT and snake_direction != (1, 0):
                snake_direction = (-1, 0)
            elif event.key == pygame.K_RIGHT and snake_direction != (-1, 0):
                snake_direction = (1, 0)

            # Pause and resume the game
            elif event.key == pygame.K_p:
                paused = not paused

    if not paused:
        # Move the snake
        x, y = snake[0]
        x += snake_direction[0] * snake_size
        y += snake_direction[1] * snake_size

        # Check for collisions with walls or itself
        if x < 0 or x >= width or y < 0 or y >= height or (x, y) in snake[1:]:
            pygame.quit()
            sys.exit()

        # Check for collision with food
        if x == food[0] and y == food[1]:
            score += 1
            food = (random.randint(0, (width - food_size) // food_size) * food_size,
                    random.randint(0, (height - food_size) // food_size) * food_size)
        else:
            # Remove the last segment of the snake if not eating food
            snake.pop()

        # Add the new head to the snake
        snake.insert(0, (x, y))

    # Draw everything
    screen.fill(black)

    # Draw the snake
    for segment in snake:
        pygame.draw.rect(screen, white, (segment[0], segment[1], snake_size, snake_size))

    # Draw the food
    pygame.draw.rect(screen, red, (food[0], food[1], food_size, food_size))

    # Draw the score
    font = pygame.font.SysFont(None, 30)
    score_text = font.render("Score: " + str(score), True, white)
    screen.blit(score_text, (10, 10))

    # Draw the pause text
    if paused:
        pause_text = font.render("Paused", True, white)
        screen.blit(pause_text, (width // 2 - 50, height // 2))

    # Update the display
    pygame.display.flip()

    # Set the frame rate
    clock.tick(snake_speed)
