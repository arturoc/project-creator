#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"
#include "ofAppNoWindow.h"


//========================================================================
int main(  int argc, char *argv[] ){
	if(argc==0){
		ofAppGlutWindow window;
		ofSetupOpenGL(&window, 1024,768, OF_WINDOW);
		ofRunApp( new testApp());
	}else{
		ofAppNoWindow window;
		ofSetupOpenGL(&window, 1024,768, OF_WINDOW);
		testApp * app = new testApp;
		app->projectPath = argv[argc-1];
		ofRunApp( app );
	}

}
