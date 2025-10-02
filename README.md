# Sokoban Game

A classic Sokoban puzzle game implementation in C, featuring 88 challenging levels.

## About Sokoban

Sokoban is a puzzle game where the player pushes boxes around a warehouse, trying to get them to storage locations. The game is played on a board of squares, where each square is a floor or a wall. Some floor squares contain boxes, and some floor squares are marked as storage locations.

### Game Elements

- `@` - Player character
- `a` - Player in Goal/storage location
- `$` - Box
- `.` - Goal/storage location
- `*` - Box on goal
- `#` - Wall
- ` ` - Empty floor

### Objective

Push all boxes (`$`) onto the goal locations (`.`). When a box is on a goal, it appears as `*`. The level is complete when all boxes are on goals.

## Features

- 88 challenging levels
- Terminal-based interface
- Movement and push counters
- Level progression system
- Cross-platform compatibility (Linux/Unix)

## Project Structure

```
Sokoban/
├── src/                    # Source code files
│   ├── main.c             # Main entry point
│   ├── game_loop.c        # Main game loop
│   ├── affichage.c        # Display functions
│   ├── move.c             # Movement logic
│   ├── move_player.c      # Player movement
│   ├── move_box.c         # Box movement
│   ├── level_end.c        # Level completion check
│   ├── player_position.c  # Player position management
│   ├── io.c               # Terminal I/O handling
│   ├── doit.c             # Utility functions
│   ├── free_memory.c      # Memory management
│   └── *.h                # Header files
├── compil/                # Compilation directory
├── levels.lvl             # Level definitions
├── makefile               # Build configuration
└── README.md              # This file
```

## Building and Running

### Prerequisites

- GCC compiler
- Make utility
- Linux/Unix terminal

### Compilation

```bash
make
```

This will compile all source files and create the `main` executable.

### Running the Game

```bash
make run
```

Or directly:

```bash
./main
```

### Controls

The game uses keyboard input for movement:
- Arrow keys or WASD for movement
- The player can only push boxes, not pull them
- Only one box can be pushed at a time
- Boxes cannot be pushed into walls or other boxes

## Development

### Build System

The project uses a makefile with the following features:
- Modular compilation of source files
- Debug symbols (`-g` flag)
- Address sanitizer for memory debugging (`-fsanitize=address`)
- Warning flags (`-Wall`)

### Code Organization

The codebase is organized into logical modules:

- **Display** ([`affichage.c`](src/affichage.c)): Handles game board rendering
- **Movement** ([`move.c`](src/move.c), [`move_player.c`](src/move_player.c), [`move_box.c`](src/move_box.c)): Movement logic
- **Game Logic** ([`game_loop.c`](src/game_loop.c), [`level_end.c`](src/level_end.c)): Core game mechanics
- **I/O** ([`io.c`](src/io.c)): Terminal input/output handling
- **Memory Management** ([`free_memory.c`](src/free_memory.c)): Dynamic memory cleanup

### Level Format

Levels are stored in [`levels.lvl`](levels.lvl) with the following format:
- Each level starts with `;LEVEL X` comment
- Game board uses ASCII characters
- 88 levels total, ranging from simple to very complex

## Acknowledgments

- Original Sokoban game concept by Hiroyuki Imabayashi
- Level designs from classic Sokoban collections