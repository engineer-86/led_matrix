
# LED Matrix Project

This project is designed to control a Unicorn HAT (LED matrix) attached to a Raspberry Pi. The project allows you to display different patterns and animations on the LED matrix using the `rpi_ws281x` library.

## Project Structure

```
├── external
│   └── rpi_ws281x
├── led_matrix
├── lib
├── makefile
└── src
    ├── led_matrix.c
    ├── led_matrix.h
    ├── main.c
    ├── picture_modes.c
    ├── picture_modes.h
```

## Requirements

- Raspberry Pi with a Unicorn HAT or compatible LED matrix.
- `gcc` compiler to build the project.
- `rpi_ws281x` library as a submodule to control the LED matrix.

## Cloning the Repository

To clone the repository including the necessary submodule, use the following command:

```sh
git clone --recursive <repository-url>
```

If you have already cloned the repository without the `--recursive` flag, you can initialize the submodule using:

```sh
git submodule update --init --recursive
```

## Building the Project

Use the provided `makefile` to build the project. The makefile handles the compilation of the source code and linking against the `rpi_ws281x` library.

### Build Commands

- **Build the project**:

  ```sh
  make
  ```

- **Clean the build files**:

  ```sh
  make clean
  ```

- **Initialize the submodule**:

  ```sh
  make submodule
  ```

- **Update the submodule**:

  ```sh
  make update_submodule
  ```

- **Build and run the project**:

  ```sh
  make fire
  ```

## Running the Project

To run the project after building, use the following command:

```sh
sudo ./led_matrix
```

This will execute the `led_matrix` binary, which will display patterns and animations on the Unicorn HAT.

## Notes

- Running the project requires `sudo` because the `rpi_ws281x` library interacts directly with the Raspberry Pi's hardware.
- Ensure that your Raspberry Pi is configured correctly to run the Unicorn HAT.

## License

This project uses the `rpi_ws281x` library under its respective license. Refer to the `LICENSE` file in the `external/rpi_ws281x` directory for more information.
