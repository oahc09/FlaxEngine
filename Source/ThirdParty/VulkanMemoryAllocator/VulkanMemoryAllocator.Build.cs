// Copyright (c) 2012-2021 Wojciech Figat. All rights reserved.

using Flax.Build;

/// <summary>
/// https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator
/// </summary>
public class VulkanMemoryAllocator : HeaderOnlyModule
{
    /// <inheritdoc />
    public override void Init()
    {
        base.Init();

        LicenseType = LicenseTypes.MIT;
        LicenseFilePath = "LICENSE.txt";
    }
}
