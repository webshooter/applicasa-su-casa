//
//  HelloWorldLayer.m
//  ApplicasaTestbed
//
//  Created by Randall Nickerson on 9/8/13.
//  Copyright Threadbare Games 2013. All rights reserved.
//
//  REMEMBER: Add -fno-objc-arc to the cocos2d files!!
//


// Import the interfaces
#import "HelloWorldLayer.h"

// Needed to obtain the Navigation Controller
#import "AppDelegate.h"

#pragma mark - HelloWorldLayer

// HelloWorldLayer implementation
@implementation HelloWorldLayer

// Helper class method that creates a Scene with the HelloWorldLayer as the only child.
+(CCScene *) scene
{
	// 'scene' is an autorelease object.
	CCScene *scene = [CCScene node];
	
	// 'layer' is an autorelease object.
	HelloWorldLayer *layer = [HelloWorldLayer node];
	
	// add layer as a child to scene
	[scene addChild: layer];
	
	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
-(id) init
{
	// always call "super" init
	// Apple recommends to re-assign "self" with the "super's" return value
	if( (self=[super init]) ) {

		// ask director for the window size
		CGSize winSize = [[CCDirector sharedDirector] winSize];

		// get the screen center
		CGPoint screenCenter = ccp(winSize.width/2, winSize.height/2);
	

		//##################################################################################
		// create and initialize a Label
		CCLabelTTF *label = [CCLabelTTF labelWithString:@"Hello World" fontName:@"Marker Felt" fontSize:64];

		// position the label on the center of the screen
		label.position =  screenCenter;
		
		// add the label as a child to this Layer
		[self addChild: label];
		//##################################################################################
		

	}
	return self;
}

@end
