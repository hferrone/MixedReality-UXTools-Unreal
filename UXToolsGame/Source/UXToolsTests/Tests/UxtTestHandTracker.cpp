// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "UxtTestHandTracker.h"

bool FUxtTestHandTracker::GetJointState(EControllerHand Hand, EUxtHandJoint Joint, FQuat& OutOrientation, FVector& OutPosition, float& OutRadius) const
{
	if (bIsTracked)
	{
		OutOrientation = TestOrientation;
		OutPosition = TestPosition;
		OutRadius = TestRadius;
		return true;
	}

	return false;
}

bool FUxtTestHandTracker::GetPointerPose(EControllerHand Hand, FQuat& OutOrientation, FVector& OutPosition) const
{
	if (bIsTracked)
	{
		OutOrientation = TestOrientation;
		OutPosition = TestPosition;
		return true;
	}

	return false;
}

bool FUxtTestHandTracker::GetIsGrabbing(EControllerHand Hand, bool& OutIsGrabbing) const
{
	if (bIsTracked)
	{
		OutIsGrabbing = bIsGrabbing;
		return true;
	}

	return false;
}

bool FUxtTestHandTracker::GetIsSelectPressed(EControllerHand Hand, bool& OutIsSelectPressed) const
{
	if (bIsTracked)
	{
		OutIsSelectPressed = bIsSelectPressed;
		return true;
	}

	return false;
}
