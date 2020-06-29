//
//  AppDelegate.h
//  DY_CommentPupot
//
//  Created by 张闯闯 on 2020/6/29.
//  Copyright © 2020 张闯闯. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

