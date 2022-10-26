// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActionGameplayInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UActionGameplayInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTIONROGUELIKE_API IActionGameplayInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/*������庯��UFUNCATIONʱʹ��BlueprintNativeEvent��ʶ����ʾ�����ú�������ͼ����д(override)���������дָ���Ƕ���һ���Զ����¼�Custom Event��
		��ͬʱ��ӵ��C++��ʵ�ַ�������ô���庯��ʱ����������ķ��������⣬����Ҫ��һ����׺_Implementation������C++ʵ�����������������_Implementation*/
	//�������Ժ󣬻����ȵ�����ͼ�е�Event�������ͼ�и�Eventû�з����壬�����C++�ķ���_Implementation��
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
