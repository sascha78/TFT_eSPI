
// This is the command sequence that rotates the ILI9342 driver coordinate frame

  rotation = m % 8; // Limit the range of values to 0-7

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1:
      writedata(TFT_MAD_MV | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2:
      writedata(TFT_MAD_MY | TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 3:
      writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 4:
      writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 5:
      writedata(TFT_MAD_MV | TFT_MAD_MX | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 6:
      writedata(TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 7:
      writedata(TFT_MAD_MY | TFT_MAD_MV | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;
  }
