//
//  EQMacAppDelegate.h
//  EQmac launcher
//
//  Created by Scott Davis on 6/8/14.
//  Copyright (c) 2014 Scott Davis. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Login.h"

@interface EQMacAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) IBOutlet NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain, strong) IBOutlet NSButton *playButton;
@property (nonatomic, retain, strong) IBOutlet NSTableView *tableView;
@property (nonatomic, retain, strong) IBOutlet NSArrayController *arrayController;

- (IBAction)saveAction:(id)sender;
- (IBAction)removeSelected:(id)sender;
- (IBAction)playGame:(id)sender;

@end
