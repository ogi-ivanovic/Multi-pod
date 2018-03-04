#include <SimpleSDAudio.h>

void setup() {

  SdPlay.setSDCSPin(2); // sd card cs pin
  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
  {
    while (1);
  }
  if (!SdPlay.setFile("O_Canada.wav")) // music name file
  { while (1);
  }
}

void loop(void)

{

  SdPlay.play(); // play music
  while (!SdPlay.isStopped())
  { ;
  }

}
