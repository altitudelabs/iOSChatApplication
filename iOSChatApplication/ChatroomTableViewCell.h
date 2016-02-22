//
//  ChatroomTableViewCell.h
//

#import <UIKit/UIKit.h>


@interface ChatroomTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView *viewMessage;
@property (weak, nonatomic) IBOutlet UILabel *labelMessage;



- (void)setMessage:(NSString *)message;

@end
