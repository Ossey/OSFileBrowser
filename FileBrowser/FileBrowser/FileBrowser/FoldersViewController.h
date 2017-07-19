//
//  FoldersViewController.h
//  FileBrowser
//
//  Created by Ossey on 2017/6/30.
//  Copyright © 2017年 Ossey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuickLook/QuickLook.h>

@interface FoldersViewController : UIViewController <QLPreviewControllerDataSource, UITableViewDelegate, UITableViewDataSource>

- (instancetype)initWithPath:(NSString *)path;

@property (nonatomic, strong) NSString *path;
@property (nonatomic, strong) NSArray<NSString *> *files;
@property (nonatomic, strong) NSMutableArray<NSString *> *selectorFiles;
@property (nonatomic, assign) BOOL displayHiddenFiles;
@property (nonatomic, assign) BOOL selectorMode;
@property (nonatomic, copy) void (^selectorFilsCompetionHandler)(NSArray<NSString *> *paths);

@end

