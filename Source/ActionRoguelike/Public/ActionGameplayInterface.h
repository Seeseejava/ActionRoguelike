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
	/*如果定义函数UFUNCATION时使用BlueprintNativeEvent标识，表示期望该函数在蓝图被重写(override)（这里的重写指的是定义一个自定义事件Custom Event）
		，同时又拥有C++的实现方法，那么定义函数时，除了自身的方法名以外，还需要加一个后缀_Implementation，并在C++实现这个函数“函数名_Implementation*/
	//这样定以后，会优先调用蓝图中的Event，如果蓝图中该Event没有方法体，则调用C++的方法_Implementation。
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(APawn* InstigatorPawn);
};
