//
//  AppDelegate.h
//  ApplicasaTestbed
//
//  Created by Randall Nickerson on 9/8/13.
//  Copyright Threadbare Games 2013. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LiCore/LiCore.h>
#import "cocos2d.h"
#import "LiPromo.h"

// Added only for iOS 6 support
@interface MyNavigationController : UINavigationController <CCDirectorDelegate>
@end

@interface AppController : NSObject <UIApplicationDelegate, LiCoreInitializeDelegate>
{
	UIWindow *window_;
	MyNavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) MyNavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
