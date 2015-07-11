#pragma once

#include "stdafx.h"

#include "IMessageManager.h"
#include "INotificationListener.h"

class MessageManager
{
private:
	static IMessageManager* _messageManager;
	static list<INotificationListener*> _notificationListeners;

public:
	static void RegisterMessageManager(IMessageManager* messageManager);
	static void DisplayMessage(string title, string message = "");
	static void DisplayToast(string title, string message, uint8_t* iconData, uint32_t iconSize);

	static void RegisterNotificationListener(INotificationListener* notificationListener);
	static void UnregisterNotificationListener(INotificationListener* notificationListener);
	static void SendNotification(ConsoleNotificationType type);
};