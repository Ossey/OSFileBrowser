//
//  FilesViewController.h
//  FileBrowser
//
//  Created by Ossey on 2017/6/30.
//  Copyright © 2017年 Ossey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuickLook/QuickLook.h>

@interface FilesViewController : UITableViewController <QLPreviewControllerDataSource>

- (instancetype)initWithPath:(NSString *)path;

@property (nonatomic, copy) NSString *path;
@property (nonatomic, strong) NSArray<NSString *> *files;
@property (nonatomic, assign) BOOL displayHiddenFiles;

@end
