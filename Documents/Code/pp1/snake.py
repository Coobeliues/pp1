from random import randrange

import pygame
import sys


RES = 800
SIZE = 40
length = 1
fps = 110
x, y = randrange(SIZE, RES - SIZE, SIZE), randrange(SIZE, RES - SIZE, SIZE)
apple = randrange(SIZE, RES - SIZE, SIZE), randrange(SIZE, RES - SIZE, SIZE)
snake = [(x, y)]
dx, dy = 0, 0

surface = pygame.display.set_mode([RES, RES])
pygame.display.set_caption('Snake')
clock = pygame.time.Clock()
dirs = {'W': True, 'S': True, 'A': True, 'D': True}


def mainer():
    pygame.init()

    global RES, SIZE, length, fps, x, y, apple, snake, dx, dy, surface, clock, dirs

    img = pygame.image.load('123.jpg').convert()
    font_score = pygame.font.SysFont('TimesNewRoman', 26, True)
    font_end = pygame.font.SysFont('TimesNewRoman', 66, True)
    score = 0
    speed_count, snake_speed = 0, 10

    done = True
    while done:
        # pos = pygame.mouse.get_pos()
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                done = False
            if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                done = False
            

        surface.blit(img, (0, 0))
        # surface.fill((255, 255, 255))
        # drawing snake, apple
        [pygame.draw.rect(surface, pygame.Color('green'), (i, j, SIZE - 1, SIZE - 1)) for i, j in snake]
        pygame.draw.ellipse(surface, pygame.Color('red'), (apple[0], apple[1], SIZE, SIZE))
        # show score
        render_score = font_score.render(f'SCORE: {score}', True, pygame.Color('orange'))
        surface.blit(render_score, (5, 5))
        # snake movement
        speed_count += 1
        if not speed_count % snake_speed:
            x += dx * SIZE
            y += dy * SIZE
            snake.append((x, y))
            snake = snake[-length:]
        # eating food
        if snake[-1] == apple:
            apple = randrange(SIZE, RES - SIZE, SIZE), randrange(SIZE, RES - SIZE, SIZE)
            length += 1
            score += 1
            snake_speed -= 1
            snake_speed = max(snake_speed, 4)
        # game over
        if x < 0 or x > RES - SIZE or y < 0 or y > RES - SIZE or len(snake) != len(set(snake)):
            render_end = font_end.render('GAME OVER!', True, pygame.Color('orange'))
            surface.blit(render_end, (RES // 2 - 200, RES // 3))
            pygame.display.flip()
            print("Your score: " + str(score))
            break

        pygame.display.flip()
        clock.tick(fps)

        # controls
        key = pygame.key.get_pressed()
        if key[pygame.K_w]:
            if dirs['W']:
                dx, dy = 0, -1
                dirs = {'W': True, 'S': False, 'A': True, 'D': True}
        elif key[pygame.K_s]:
            if dirs['S']:
                dx, dy = 0, 1
                dirs = {'W': False, 'S': True, 'A': True, 'D': True}
        elif key[pygame.K_a]:
            if dirs['A']:
                dx, dy = -1, 0
                dirs = {'W': True, 'S': True, 'A': True, 'D': False}
        elif key[pygame.K_d]:
            if dirs['D']:
                dx, dy = 1, 0
                dirs = {'W': True, 'S': True, 'A': False, 'D': True}

    pygame.quit()


def play_again():
    """Returns True or False"""
    while True:
        # As a convention the capital Y indicates that
        # hitting enter without any input means yes; yes is default.
        answer = input("Do you want to play again? (Y/n): ")
        if not answer or answer.lower() in ('y', 'yes'):
            return True
        else:
            return False


def main():
    while True:
        mainer()
        if not play_again():
            return


if __name__ == '__main__':
    main()
    sys.exit()
