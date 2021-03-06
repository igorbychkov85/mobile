//
//  FriendCollectionCell.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/30/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@class NotificationView;
@interface FriendCollectionCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet AvatarView *avatarView;
@property (weak, nonatomic) IBOutlet PeggLabel *friendUserName;
@property (weak, nonatomic) IBOutlet NotificationView *notificationView;

@property (nonatomic, strong) Friend *friend;

@end
