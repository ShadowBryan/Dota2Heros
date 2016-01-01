//
//  HeroTableViewCell.h
//  Dota2Heros
//
//  Created by Mac on 15/11/18.
//  Copyright © 2015年 Hanuman Tech Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeroTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *iconIamgeView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *typeLabel;


@end
