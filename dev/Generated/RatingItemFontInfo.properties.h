// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RatingItemFontInfoProperties
{
public:
    RatingItemFontInfoProperties();

    void DisabledGlyph(winrt::hstring const& value);
    winrt::hstring DisabledGlyph();

    void Glyph(winrt::hstring const& value);
    winrt::hstring Glyph();

    void PlaceholderGlyph(winrt::hstring const& value);
    winrt::hstring PlaceholderGlyph();

    void PointerOverGlyph(winrt::hstring const& value);
    winrt::hstring PointerOverGlyph();

    void PointerOverPlaceholderGlyph(winrt::hstring const& value);
    winrt::hstring PointerOverPlaceholderGlyph();

    void UnsetGlyph(winrt::hstring const& value);
    winrt::hstring UnsetGlyph();

    static winrt::DependencyProperty DisabledGlyphProperty() { return s_DisabledGlyphProperty; }
    static winrt::DependencyProperty GlyphProperty() { return s_GlyphProperty; }
    static winrt::DependencyProperty PlaceholderGlyphProperty() { return s_PlaceholderGlyphProperty; }
    static winrt::DependencyProperty PointerOverGlyphProperty() { return s_PointerOverGlyphProperty; }
    static winrt::DependencyProperty PointerOverPlaceholderGlyphProperty() { return s_PointerOverPlaceholderGlyphProperty; }
    static winrt::DependencyProperty UnsetGlyphProperty() { return s_UnsetGlyphProperty; }

    static GlobalDependencyProperty s_DisabledGlyphProperty;
    static GlobalDependencyProperty s_GlyphProperty;
    static GlobalDependencyProperty s_PlaceholderGlyphProperty;
    static GlobalDependencyProperty s_PointerOverGlyphProperty;
    static GlobalDependencyProperty s_PointerOverPlaceholderGlyphProperty;
    static GlobalDependencyProperty s_UnsetGlyphProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
