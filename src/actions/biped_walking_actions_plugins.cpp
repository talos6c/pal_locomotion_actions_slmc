#include <pal_locomotion_actions_slmc/balance_ds_action.h>
#include <pal_locomotion_actions_slmc/balancing_action.h>
#include <pal_locomotion_actions_slmc/static_walk.h>
#include <pal_locomotion_actions_slmc/wbc_action.h>
#include <pal_locomotion_actions_slmc/sstand_one_leg_action.h>
#include <pal_locomotion_actions_slmc/stand_down_leg_action.h>
#include <pal_locomotion_actions_slmc/move_icp_ds_action.h>
#include <pal_locomotion_actions_slmc/com_action.h>
#include <pal_locomotion_actions_slmc/csv_com_action.h>
#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(pal_locomotion::BalanceDsAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::WBCAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::BalancingAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::StaticWalkAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::SStandOneLegAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::StandDownLegAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::MoveICPDSAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::COMAction, pal_locomotion::WalkingActionBase);
PLUGINLIB_EXPORT_CLASS(pal_locomotion::CSVCOMAction, pal_locomotion::WalkingActionBase);