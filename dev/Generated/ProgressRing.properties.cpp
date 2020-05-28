// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ProgressRing.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(ProgressRing)
}

#include "ProgressRing.g.cpp"

GlobalDependencyProperty ProgressRingProperties::s_IsActiveProperty{ nullptr };
GlobalDependencyProperty ProgressRingProperties::s_IsIndeterminateProperty{ nullptr };
GlobalDependencyProperty ProgressRingProperties::s_TemplateSettingsProperty{ nullptr };

ProgressRingProperties::ProgressRingProperties()
{
    EnsureProperties();
}

void ProgressRingProperties::EnsureProperties()
{
    if (!s_IsActiveProperty)
    {
        s_IsActiveProperty =
            InitializeDependencyProperty(
                L"IsActive",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ProgressRing>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsActivePropertyChanged));
    }
    if (!s_IsIndeterminateProperty)
    {
        s_IsIndeterminateProperty =
            InitializeDependencyProperty(
                L"IsIndeterminate",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ProgressRing>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsIndeterminatePropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::ProgressRingTemplateSettings>(),
                winrt::name_of<winrt::ProgressRing>(),
                false /* isAttached */,
                ValueHelper<winrt::ProgressRingTemplateSettings>::BoxedDefaultValue(),
                nullptr);
    }
}

void ProgressRingProperties::ClearProperties()
{
    s_IsActiveProperty = nullptr;
    s_IsIndeterminateProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
}

void ProgressRingProperties::OnIsActivePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ProgressRing>();
    winrt::get_self<ProgressRing>(owner)->OnIsActivePropertyChanged(args);
}

void ProgressRingProperties::OnIsIndeterminatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ProgressRing>();
    winrt::get_self<ProgressRing>(owner)->OnIsIndeterminatePropertyChanged(args);
}

void ProgressRingProperties::IsActive(bool value)
{
    static_cast<ProgressRing*>(this)->SetValue(s_IsActiveProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ProgressRingProperties::IsActive()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ProgressRing*>(this)->GetValue(s_IsActiveProperty));
}

void ProgressRingProperties::IsIndeterminate(bool value)
{
    static_cast<ProgressRing*>(this)->SetValue(s_IsIndeterminateProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ProgressRingProperties::IsIndeterminate()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ProgressRing*>(this)->GetValue(s_IsIndeterminateProperty));
}

void ProgressRingProperties::TemplateSettings(winrt::ProgressRingTemplateSettings const& value)
{
    static_cast<ProgressRing*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::ProgressRingTemplateSettings>::BoxValueIfNecessary(value));
}

winrt::ProgressRingTemplateSettings ProgressRingProperties::TemplateSettings()
{
    return ValueHelper<winrt::ProgressRingTemplateSettings>::CastOrUnbox(static_cast<ProgressRing*>(this)->GetValue(s_TemplateSettingsProperty));
}
