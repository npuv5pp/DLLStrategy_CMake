// DLLStrategy.cpp : 定义 DLL 应用程序的导出函数。
//

#include <cstring>
#include "platform.h"

using namespace Simuro;

extern "C" {

#ifndef __GNUG__
_declspec(dllexport)
#endif
void OnEvent(EventType type, void* argument) {
	switch (type) {
	case EventType::FirstHalfStart: {
		break;
	}
	case EventType::SecondHalfStart: {
		break;
	}
	case EventType::OvertimeStart: {
		break;
	}
	case EventType::PenaltyShootoutStart: {
		break;
	}
	case EventType::JudgeResult: {
		JudgeResultEvent* judgeResult = static_cast<JudgeResultEvent*>(argument);
		switch (judgeResult->type) {
		case JudgeType::PlaceKick:
			break;
		case JudgeType::PenaltyKick:
			break;
		case JudgeType::GoalKick:
			break;
		case JudgeType::FreeKickLeftBot:
		case JudgeType::FreeKickLeftTop:
		case JudgeType::FreeKickRightBot:
		case JudgeType::FreeKickRightTop:
			break;
		}
		break;
	}
	default:
		break;
	}
}

#ifndef __GNUG__
_declspec(dllexport)
#endif
void GetTeamInfo(TeamInfo* teamInfo) {
	static const wchar_t teamName[] = L"公诚勇毅，永矢毋忘";
	static constexpr size_t len = sizeof(teamName);
	memcpy(teamInfo->teamName, teamName, len);
}

#ifndef __GNUG__
_declspec(dllexport)
#endif
void GetInstruction(Field* field) {
	for (auto& r : field->selfRobots) {
		r.wheel = { 125,-125 };
	}
}

#ifndef __GNUG__
_declspec(dllexport)
#endif
void GetPlacement(Field* field) {
	for (auto& r : field->selfRobots) {
		r.position = { 42,42 };
		r.rotation = 180;
	}
}

}
