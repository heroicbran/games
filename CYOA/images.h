//Visual
//Load all potential images into surfaces and places them into a map
using namespace std;

void load_images(map<string, SDL_Surface*> &images)
{
  //Make a loop and used the file names?
  SDL_Surface* g = new SDL_Surface;
  g = IMG_Load("images/g.png");
  images["g"] = g;

  SDL_Surface* img = new SDL_Surface ;
  img = IMG_Load("images/cursor.png");
  images["img"] = img;

  SDL_Surface* door = new SDL_Surface;
  door = IMG_Load("images/door.png");
  images["door"] = door;

  SDL_Surface* door_open = new SDL_Surface;
  door = IMG_Load("images/door_open.png");
  images["door_open"] = door_open;

  SDL_Surface* item_twinkle = new SDL_Surface;
  door = IMG_Load("images/item_twinkle.png");
  images["item_twinkle"] = item_twinkle;
}
