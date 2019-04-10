//
//  AppDelegate.h
//  Regeneron-PSP
//
//  Created by Siju Satheesachandran on 10/04/2019.
//  Copyright © 2019 Siju Satheesachandran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

