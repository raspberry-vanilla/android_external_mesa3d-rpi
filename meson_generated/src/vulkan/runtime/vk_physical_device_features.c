
/* Copyright © 2021 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* This file generated from vk_physical_device_features_gen.py, don't edit directly. */

#include "vk_common_entrypoints.h"
#include "vk_log.h"
#include "vk_physical_device.h"
#include "vk_physical_device_features.h"
#include "vk_util.h"

static VkResult
check_physical_device_features(struct vk_physical_device *physical_device,
                               const VkPhysicalDeviceFeatures *supported,
                               const VkPhysicalDeviceFeatures *enabled,
                               const char *struct_name)
{
   if (enabled->robustBufferAccess && !supported->robustBufferAccess)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "robustBufferAccess");
   if (enabled->fullDrawIndexUint32 && !supported->fullDrawIndexUint32)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "fullDrawIndexUint32");
   if (enabled->imageCubeArray && !supported->imageCubeArray)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "imageCubeArray");
   if (enabled->independentBlend && !supported->independentBlend)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "independentBlend");
   if (enabled->geometryShader && !supported->geometryShader)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "geometryShader");
   if (enabled->tessellationShader && !supported->tessellationShader)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "tessellationShader");
   if (enabled->sampleRateShading && !supported->sampleRateShading)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sampleRateShading");
   if (enabled->dualSrcBlend && !supported->dualSrcBlend)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "dualSrcBlend");
   if (enabled->logicOp && !supported->logicOp)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "logicOp");
   if (enabled->multiDrawIndirect && !supported->multiDrawIndirect)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "multiDrawIndirect");
   if (enabled->drawIndirectFirstInstance && !supported->drawIndirectFirstInstance)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "drawIndirectFirstInstance");
   if (enabled->depthClamp && !supported->depthClamp)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "depthClamp");
   if (enabled->depthBiasClamp && !supported->depthBiasClamp)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "depthBiasClamp");
   if (enabled->fillModeNonSolid && !supported->fillModeNonSolid)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "fillModeNonSolid");
   if (enabled->depthBounds && !supported->depthBounds)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "depthBounds");
   if (enabled->wideLines && !supported->wideLines)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "wideLines");
   if (enabled->largePoints && !supported->largePoints)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "largePoints");
   if (enabled->alphaToOne && !supported->alphaToOne)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "alphaToOne");
   if (enabled->multiViewport && !supported->multiViewport)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "multiViewport");
   if (enabled->samplerAnisotropy && !supported->samplerAnisotropy)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "samplerAnisotropy");
   if (enabled->textureCompressionETC2 && !supported->textureCompressionETC2)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "textureCompressionETC2");
   if (enabled->textureCompressionASTC_LDR && !supported->textureCompressionASTC_LDR)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "textureCompressionASTC_LDR");
   if (enabled->textureCompressionBC && !supported->textureCompressionBC)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "textureCompressionBC");
   if (enabled->occlusionQueryPrecise && !supported->occlusionQueryPrecise)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "occlusionQueryPrecise");
   if (enabled->pipelineStatisticsQuery && !supported->pipelineStatisticsQuery)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "pipelineStatisticsQuery");
   if (enabled->vertexPipelineStoresAndAtomics && !supported->vertexPipelineStoresAndAtomics)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "vertexPipelineStoresAndAtomics");
   if (enabled->fragmentStoresAndAtomics && !supported->fragmentStoresAndAtomics)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "fragmentStoresAndAtomics");
   if (enabled->shaderTessellationAndGeometryPointSize && !supported->shaderTessellationAndGeometryPointSize)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderTessellationAndGeometryPointSize");
   if (enabled->shaderImageGatherExtended && !supported->shaderImageGatherExtended)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderImageGatherExtended");
   if (enabled->shaderStorageImageExtendedFormats && !supported->shaderStorageImageExtendedFormats)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageImageExtendedFormats");
   if (enabled->shaderStorageImageMultisample && !supported->shaderStorageImageMultisample)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageImageMultisample");
   if (enabled->shaderStorageImageReadWithoutFormat && !supported->shaderStorageImageReadWithoutFormat)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageImageReadWithoutFormat");
   if (enabled->shaderStorageImageWriteWithoutFormat && !supported->shaderStorageImageWriteWithoutFormat)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageImageWriteWithoutFormat");
   if (enabled->shaderUniformBufferArrayDynamicIndexing && !supported->shaderUniformBufferArrayDynamicIndexing)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderUniformBufferArrayDynamicIndexing");
   if (enabled->shaderSampledImageArrayDynamicIndexing && !supported->shaderSampledImageArrayDynamicIndexing)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderSampledImageArrayDynamicIndexing");
   if (enabled->shaderStorageBufferArrayDynamicIndexing && !supported->shaderStorageBufferArrayDynamicIndexing)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageBufferArrayDynamicIndexing");
   if (enabled->shaderStorageImageArrayDynamicIndexing && !supported->shaderStorageImageArrayDynamicIndexing)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderStorageImageArrayDynamicIndexing");
   if (enabled->shaderClipDistance && !supported->shaderClipDistance)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderClipDistance");
   if (enabled->shaderCullDistance && !supported->shaderCullDistance)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderCullDistance");
   if (enabled->shaderFloat64 && !supported->shaderFloat64)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderFloat64");
   if (enabled->shaderInt64 && !supported->shaderInt64)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderInt64");
   if (enabled->shaderInt16 && !supported->shaderInt16)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderInt16");
   if (enabled->shaderResourceResidency && !supported->shaderResourceResidency)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderResourceResidency");
   if (enabled->shaderResourceMinLod && !supported->shaderResourceMinLod)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "shaderResourceMinLod");
   if (enabled->sparseBinding && !supported->sparseBinding)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseBinding");
   if (enabled->sparseResidencyBuffer && !supported->sparseResidencyBuffer)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidencyBuffer");
   if (enabled->sparseResidencyImage2D && !supported->sparseResidencyImage2D)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidencyImage2D");
   if (enabled->sparseResidencyImage3D && !supported->sparseResidencyImage3D)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidencyImage3D");
   if (enabled->sparseResidency2Samples && !supported->sparseResidency2Samples)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidency2Samples");
   if (enabled->sparseResidency4Samples && !supported->sparseResidency4Samples)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidency4Samples");
   if (enabled->sparseResidency8Samples && !supported->sparseResidency8Samples)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidency8Samples");
   if (enabled->sparseResidency16Samples && !supported->sparseResidency16Samples)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidency16Samples");
   if (enabled->sparseResidencyAliased && !supported->sparseResidencyAliased)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "sparseResidencyAliased");
   if (enabled->variableMultisampleRate && !supported->variableMultisampleRate)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "variableMultisampleRate");
   if (enabled->inheritedQueries && !supported->inheritedQueries)
      return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                       "%s.%s not supported", struct_name, "inheritedQueries");

   return VK_SUCCESS;
}

VkResult
vk_physical_device_check_device_features(struct vk_physical_device *physical_device,
                                         const VkDeviceCreateInfo *pCreateInfo)
{
   VkPhysicalDevice vk_physical_device =
      vk_physical_device_to_handle(physical_device);

   /* Query the device what kind of features are supported. */
   VkPhysicalDeviceFeatures2 supported_features2 = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,
   };

   VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV = { .pNext = NULL };
   VkPhysicalDevicePushConstantBankFeaturesNV supported_VkPhysicalDevicePushConstantBankFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV = { .pNext = NULL };
   VkPhysicalDevicePrivateDataFeatures supported_VkPhysicalDevicePrivateDataFeatures = { .pNext = NULL };
   VkPhysicalDevicePrivateDataBaseHandleFeaturesNV supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceClusterAccelerationStructureFeaturesNV supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceVariablePointersFeatures supported_VkPhysicalDeviceVariablePointersFeatures = { .pNext = NULL };
   VkPhysicalDeviceMultiviewFeatures supported_VkPhysicalDeviceMultiviewFeatures = { .pNext = NULL };
   VkPhysicalDevicePresentIdFeaturesKHR supported_VkPhysicalDevicePresentIdFeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePresentId2FeaturesKHR supported_VkPhysicalDevicePresentId2FeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePresentWaitFeaturesKHR supported_VkPhysicalDevicePresentWaitFeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePresentWait2FeaturesKHR supported_VkPhysicalDevicePresentWait2FeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePresentTimingFeaturesEXT supported_VkPhysicalDevicePresentTimingFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevice16BitStorageFeatures supported_VkPhysicalDevice16BitStorageFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures = { .pNext = NULL };
   VkPhysicalDeviceSamplerYcbcrConversionFeatures supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures = { .pNext = NULL };
   VkPhysicalDeviceProtectedMemoryFeatures supported_VkPhysicalDeviceProtectedMemoryFeatures = { .pNext = NULL };
   VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceMultiDrawFeaturesEXT supported_VkPhysicalDeviceMultiDrawFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceInlineUniformBlockFeatures supported_VkPhysicalDeviceInlineUniformBlockFeatures = { .pNext = NULL };
   VkPhysicalDeviceMaintenance4Features supported_VkPhysicalDeviceMaintenance4Features = { .pNext = NULL };
   VkPhysicalDeviceMaintenance5Features supported_VkPhysicalDeviceMaintenance5Features = { .pNext = NULL };
   VkPhysicalDeviceMaintenance6Features supported_VkPhysicalDeviceMaintenance6Features = { .pNext = NULL };
   VkPhysicalDeviceMaintenance7FeaturesKHR supported_VkPhysicalDeviceMaintenance7FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceMaintenance8FeaturesKHR supported_VkPhysicalDeviceMaintenance8FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceMaintenance9FeaturesKHR supported_VkPhysicalDeviceMaintenance9FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceMaintenance11FeaturesKHR supported_VkPhysicalDeviceMaintenance11FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceMaintenance10FeaturesKHR supported_VkPhysicalDeviceMaintenance10FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderDrawParametersFeatures supported_VkPhysicalDeviceShaderDrawParametersFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderFloat16Int8Features supported_VkPhysicalDeviceShaderFloat16Int8Features = { .pNext = NULL };
   VkPhysicalDeviceHostQueryResetFeatures supported_VkPhysicalDeviceHostQueryResetFeatures = { .pNext = NULL };
   VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceGlobalPriorityQueryFeatures supported_VkPhysicalDeviceGlobalPriorityQueryFeatures = { .pNext = NULL };
   VkPhysicalDeviceDeviceMemoryReportFeaturesEXT supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDescriptorIndexingFeatures supported_VkPhysicalDeviceDescriptorIndexingFeatures = { .pNext = NULL };
   VkPhysicalDeviceTimelineSemaphoreFeatures supported_VkPhysicalDeviceTimelineSemaphoreFeatures = { .pNext = NULL };
   VkPhysicalDevice8BitStorageFeatures supported_VkPhysicalDevice8BitStorageFeatures = { .pNext = NULL };
   VkPhysicalDeviceConditionalRenderingFeaturesEXT supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceVulkanMemoryModelFeatures supported_VkPhysicalDeviceVulkanMemoryModelFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderAtomicInt64Features supported_VkPhysicalDeviceShaderAtomicInt64Features = { .pNext = NULL };
   VkPhysicalDeviceShaderAtomicFloatFeaturesEXT supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceVertexAttributeDivisorFeatures supported_VkPhysicalDeviceVertexAttributeDivisorFeatures = { .pNext = NULL };
   VkPhysicalDeviceASTCDecodeFeaturesEXT supported_VkPhysicalDeviceASTCDecodeFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceTransformFeedbackFeaturesEXT supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceExclusiveScissorFeaturesNV supported_VkPhysicalDeviceExclusiveScissorFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceCornerSampledImageFeaturesNV supported_VkPhysicalDeviceCornerSampledImageFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderImageFootprintFeaturesNV supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceCopyMemoryIndirectFeaturesNV supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceMemoryDecompressionFeaturesEXT supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShadingRateImageFeaturesNV supported_VkPhysicalDeviceShadingRateImageFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceInvocationMaskFeaturesHUAWEI supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI = { .pNext = NULL };
   VkPhysicalDeviceMeshShaderFeaturesNV supported_VkPhysicalDeviceMeshShaderFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceMeshShaderFeaturesEXT supported_VkPhysicalDeviceMeshShaderFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceAccelerationStructureFeaturesKHR supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRayTracingPipelineFeaturesKHR supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRayQueryFeaturesKHR supported_VkPhysicalDeviceRayQueryFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceFragmentDensityMapFeaturesEXT supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceFragmentDensityMap2FeaturesEXT supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceScalarBlockLayoutFeatures supported_VkPhysicalDeviceScalarBlockLayoutFeatures = { .pNext = NULL };
   VkPhysicalDeviceUniformBufferStandardLayoutFeatures supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures = { .pNext = NULL };
   VkPhysicalDeviceDepthClipEnableFeaturesEXT supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceMemoryPriorityFeaturesEXT supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceBufferDeviceAddressFeatures supported_VkPhysicalDeviceBufferDeviceAddressFeatures = { .pNext = NULL };
   VkPhysicalDeviceBufferDeviceAddressFeaturesEXT supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceImagelessFramebufferFeatures supported_VkPhysicalDeviceImagelessFramebufferFeatures = { .pNext = NULL };
   VkPhysicalDeviceTextureCompressionASTCHDRFeatures supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures = { .pNext = NULL };
   VkPhysicalDeviceCooperativeMatrixFeaturesNV supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceYcbcrImageArraysFeaturesEXT supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePresentBarrierFeaturesNV supported_VkPhysicalDevicePresentBarrierFeaturesNV = { .pNext = NULL };
   VkPhysicalDevicePerformanceQueryFeaturesKHR supported_VkPhysicalDevicePerformanceQueryFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceCoverageReductionModeFeaturesNV supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL = { .pNext = NULL };
   VkPhysicalDeviceShaderClockFeaturesKHR supported_VkPhysicalDeviceShaderClockFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceIndexTypeUint8Features supported_VkPhysicalDeviceIndexTypeUint8Features = { .pNext = NULL };
   VkPhysicalDeviceShaderSMBuiltinsFeaturesNV supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures = { .pNext = NULL };
   VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures = { .pNext = NULL };
   VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceSubgroupSizeControlFeatures supported_VkPhysicalDeviceSubgroupSizeControlFeatures = { .pNext = NULL };
   VkPhysicalDeviceLineRasterizationFeatures supported_VkPhysicalDeviceLineRasterizationFeatures = { .pNext = NULL };
   VkPhysicalDevicePipelineCreationCacheControlFeatures supported_VkPhysicalDevicePipelineCreationCacheControlFeatures = { .pNext = NULL };
   VkPhysicalDeviceVulkan11Features supported_VkPhysicalDeviceVulkan11Features = { .pNext = NULL };
   VkPhysicalDeviceVulkan12Features supported_VkPhysicalDeviceVulkan12Features = { .pNext = NULL };
   VkPhysicalDeviceVulkan13Features supported_VkPhysicalDeviceVulkan13Features = { .pNext = NULL };
   VkPhysicalDeviceVulkan14Features supported_VkPhysicalDeviceVulkan14Features = { .pNext = NULL };
   VkPhysicalDeviceCoherentMemoryFeaturesAMD supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD = { .pNext = NULL };
   VkPhysicalDeviceGpaFeaturesAMD supported_VkPhysicalDeviceGpaFeaturesAMD = { .pNext = NULL };
   VkPhysicalDeviceCustomBorderColorFeaturesEXT supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceBorderColorSwizzleFeaturesEXT supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceExtendedDynamicStateFeaturesEXT supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceExtendedDynamicState2FeaturesEXT supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceExtendedDynamicState3FeaturesEXT supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceExtendedFlagsFeaturesKHR supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceDiagnosticsConfigFeaturesNV supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRobustness2FeaturesKHR supported_VkPhysicalDeviceRobustness2FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceImageRobustnessFeatures supported_VkPhysicalDeviceImageRobustnessFeatures = { .pNext = NULL };
   VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR = { .pNext = NULL };
   VkPhysicalDevice4444FormatsFeaturesEXT supported_VkPhysicalDevice4444FormatsFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceSubpassShadingFeaturesHUAWEI supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI = { .pNext = NULL };
   VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI = { .pNext = NULL };
   VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceFragmentShadingRateFeaturesKHR supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderTerminateInvocationFeatures supported_VkPhysicalDeviceShaderTerminateInvocationFeatures = { .pNext = NULL };
   VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceImage2DViewOf3DFeaturesEXT supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDepthClipControlFeaturesEXT supported_VkPhysicalDeviceDepthClipControlFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceCustomResolveFeaturesEXT supported_VkPhysicalDeviceCustomResolveFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDepthClampControlFeaturesEXT supported_VkPhysicalDeviceDepthClampControlFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceExternalMemoryRDMAFeaturesNV supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceColorWriteEnableFeaturesEXT supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceSynchronization2Features supported_VkPhysicalDeviceSynchronization2Features = { .pNext = NULL };
   VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceHostImageCopyFeatures supported_VkPhysicalDeviceHostImageCopyFeatures = { .pNext = NULL };
   VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceLegacyDitheringFeaturesEXT supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePipelineProtectedAccessFeatures supported_VkPhysicalDevicePipelineProtectedAccessFeatures = { .pNext = NULL };
   VkPhysicalDeviceVideoMaintenance1FeaturesKHR supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoMaintenance2FeaturesKHR supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoDecodeVP9FeaturesKHR supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoEncodeAV1FeaturesKHR supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceInheritedViewportScissorFeaturesNV supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceProvokingVertexFeaturesEXT supported_VkPhysicalDeviceProvokingVertexFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceDescriptorBufferFeaturesEXT supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderIntegerDotProductFeatures supported_VkPhysicalDeviceShaderIntegerDotProductFeatures = { .pNext = NULL };
   VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderFmaFeaturesKHR supported_VkPhysicalDeviceShaderFmaFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRayTracingMotionBlurFeaturesNV supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceRayTracingValidationFeaturesNV supported_VkPhysicalDeviceRayTracingValidationFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDynamicRenderingFeatures supported_VkPhysicalDeviceDynamicRenderingFeatures = { .pNext = NULL };
   VkPhysicalDeviceImageViewMinLodFeaturesEXT supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceLinearColorAttachmentFeaturesNV supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePipelineBinaryFeaturesKHR supported_VkPhysicalDevicePipelineBinaryFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE = { .pNext = NULL };
   VkPhysicalDeviceNestedCommandBufferFeaturesEXT supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceImageCompressionControlFeaturesEXT supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceOpacityMicromapFeaturesKHR supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceOpacityMicromapFeaturesEXT supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePipelinePropertiesFeaturesEXT supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD = { .pNext = NULL };
   VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePipelineRobustnessFeatures supported_VkPhysicalDevicePipelineRobustnessFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceImageProcessingFeaturesQCOM supported_VkPhysicalDeviceImageProcessingFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceTilePropertiesFeaturesQCOM supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceAmigoProfilingFeaturesSEC supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC = { .pNext = NULL };
   VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceAddressBindingReportFeaturesEXT supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceOpticalFlowFeaturesNV supported_VkPhysicalDeviceOpticalFlowFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceFaultFeaturesEXT supported_VkPhysicalDeviceFaultFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceFaultFeaturesKHR supported_VkPhysicalDeviceFaultFeaturesKHR = { .pNext = NULL };
   VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceFrameBoundaryFeaturesEXT supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceDepthBiasControlFeaturesEXT supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceShaderObjectFeaturesEXT supported_VkPhysicalDeviceShaderObjectFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderTileImageFeaturesEXT supported_VkPhysicalDeviceShaderTileImageFeaturesEXT = { .pNext = NULL };
#ifdef VK_USE_PLATFORM_SCREEN_QNX
   VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX = { .pNext = NULL };
#endif
   VkPhysicalDeviceCooperativeMatrixFeaturesKHR supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceAntiLagFeaturesAMD supported_VkPhysicalDeviceAntiLagFeaturesAMD = { .pNext = NULL };
   VkPhysicalDeviceTileMemoryHeapFeaturesQCOM supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceCubicClampFeaturesQCOM supported_VkPhysicalDeviceCubicClampFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceYcbcrDegammaFeaturesQCOM supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceCubicWeightsFeaturesQCOM supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceImageProcessing2FeaturesQCOM supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceImageProcessing3FeaturesQCOM supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV = { .pNext = NULL };
   VkPhysicalDevicePerStageDescriptorSetFeaturesNV supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV = { .pNext = NULL };
#ifdef VK_USE_PLATFORM_ANDROID_KHR
   VkPhysicalDeviceExternalFormatResolveFeaturesANDROID supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID = { .pNext = NULL };
#endif
   VkPhysicalDeviceSchedulingControlsFeaturesARM supported_VkPhysicalDeviceSchedulingControlsFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG = { .pNext = NULL };
   VkPhysicalDeviceRenderPassStripedFeaturesARM supported_VkPhysicalDeviceRenderPassStripedFeaturesARM = { .pNext = NULL };
   VkPhysicalDevicePipelineOpacityMicromapFeaturesARM supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderSubgroupRotateFeatures supported_VkPhysicalDeviceShaderSubgroupRotateFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderExpectAssumeFeatures supported_VkPhysicalDeviceShaderExpectAssumeFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderFloatControls2Features supported_VkPhysicalDeviceShaderFloatControls2Features = { .pNext = NULL };
   VkPhysicalDeviceDynamicRenderingLocalReadFeatures supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures = { .pNext = NULL };
   VkPhysicalDeviceShaderQuadControlFeaturesKHR supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceMapMemoryPlacedFeaturesEXT supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderBfloat16FeaturesKHR supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceRawAccessChainsFeaturesNV supported_VkPhysicalDeviceRawAccessChainsFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceCommandBufferInheritanceFeaturesNV supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceImageAlignmentControlFeaturesMESA supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA = { .pNext = NULL };
   VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT = { .pNext = NULL };
   VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceCooperativeMatrix2FeaturesNV supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceHdrVividFeaturesHUAWEI supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI = { .pNext = NULL };
   VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDepthClampZeroOneFeaturesKHR supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceCooperativeVectorFeaturesNV supported_VkPhysicalDeviceCooperativeVectorFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceTileShadingFeaturesQCOM supported_VkPhysicalDeviceTileShadingFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE = { .pNext = NULL };
   VkPhysicalDevicePresentMeteringFeaturesNV supported_VkPhysicalDevicePresentMeteringFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE = { .pNext = NULL };
   VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceFormatPackFeaturesARM supported_VkPhysicalDeviceFormatPackFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceThrottleHintFeaturesSEC supported_VkPhysicalDeviceThrottleHintFeaturesSEC = { .pNext = NULL };
   VkPhysicalDeviceTensorFeaturesARM supported_VkPhysicalDeviceTensorFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceDescriptorBufferTensorFeaturesARM supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceShaderFloat8FeaturesEXT supported_VkPhysicalDeviceShaderFloat8FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDataGraphFeaturesARM supported_VkPhysicalDeviceDataGraphFeaturesARM = { .pNext = NULL };
   VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC = { .pNext = NULL };
   VkPhysicalDeviceDataGraphModelFeaturesQCOM supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDeviceShaderUntypedPointersFeaturesKHR supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE = { .pNext = NULL };
   VkPhysicalDeviceShader64BitIndexingFeaturesEXT supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceQueuePerfHintFeaturesQCOM supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM = { .pNext = NULL };
   VkPhysicalDevicePerformanceCountersByRegionFeaturesARM supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV = { .pNext = NULL };
   VkPhysicalDeviceShaderLongVectorFeaturesEXT supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderSplitBarrierFeaturesEXT supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceDescriptorHeapFeaturesEXT supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderInstrumentationFeaturesARM supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderConstantDataFeaturesKHR supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceShaderAbortFeaturesKHR supported_VkPhysicalDeviceShaderAbortFeaturesKHR = { .pNext = NULL };
   VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM = { .pNext = NULL };
   VkPhysicalDeviceImageTilingControlFeaturesEXT supported_VkPhysicalDeviceImageTilingControlFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT = { .pNext = NULL };
   VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE = { .pNext = NULL };

   vk_foreach_struct_const(stype, features, pCreateInfo->pNext) {
      void *supported = NULL;
      switch (stype) {
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_device_generated_commands))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_push_constant_bank))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePushConstantBankFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePushConstantBankFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePushConstantBankFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePushConstantBankFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_device_generated_commands_compute))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_private_data))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePrivateDataFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePrivateDataFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePrivateDataFeatures.sType = stype;
         supported = &supported_VkPhysicalDevicePrivateDataFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_BASE_HANDLE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_private_data_base_handle))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_cluster_acceleration_structure))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_variable_pointers))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVariablePointersFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVariablePointersFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVariablePointersFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceVariablePointersFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_multiview))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultiviewFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultiviewFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultiviewFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceMultiviewFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_present_id))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentIdFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentIdFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentIdFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePresentIdFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_present_id2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentId2FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentId2FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentId2FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePresentId2FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_present_wait))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentWaitFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentWaitFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentWaitFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePresentWaitFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_present_wait2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentWait2FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentWait2FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentWait2FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePresentWait2FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_TIMING_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_present_timing))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentTimingFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentTimingFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentTimingFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePresentTimingFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_16bit_storage))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevice16BitStorageFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevice16BitStorageFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevice16BitStorageFeatures.sType = stype;
         supported = &supported_VkPhysicalDevice16BitStorageFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_subgroup_extended_types))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_sampler_ycbcr_conversion))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceProtectedMemoryFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceProtectedMemoryFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceProtectedMemoryFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceProtectedMemoryFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_blend_operation_advanced))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_multi_draw))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultiDrawFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultiDrawFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultiDrawFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMultiDrawFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_inline_uniform_block))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceInlineUniformBlockFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceInlineUniformBlockFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceInlineUniformBlockFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceInlineUniformBlockFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_maintenance4))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance4Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance4Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance4Features.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance4Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_maintenance5))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance5Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance5Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance5Features.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance5Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_maintenance6))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance6Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance6Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance6Features.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance6Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_maintenance7))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance7FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance7FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance7FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance7FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_maintenance8))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance8FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance8FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance8FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance8FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_maintenance9))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance9FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance9FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance9FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance9FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_11_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_maintenance11))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance11FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance11FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance11FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance11FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_maintenance10))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMaintenance10FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMaintenance10FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMaintenance10FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceMaintenance10FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderDrawParametersFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderDrawParametersFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderDrawParametersFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderDrawParametersFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_float16_int8))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderFloat16Int8Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderFloat16Int8Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderFloat16Int8Features.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderFloat16Int8Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_host_query_reset))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceHostQueryResetFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceHostQueryResetFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceHostQueryResetFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceHostQueryResetFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ELAPSED_TIMER_QUERY_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_elapsed_timer_query))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_global_priority || physical_device->supported_extensions.EXT_global_priority_query))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceGlobalPriorityQueryFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceGlobalPriorityQueryFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceGlobalPriorityQueryFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceGlobalPriorityQueryFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_device_memory_report))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_descriptor_indexing))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorIndexingFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorIndexingFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorIndexingFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorIndexingFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_timeline_semaphore))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTimelineSemaphoreFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTimelineSemaphoreFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTimelineSemaphoreFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceTimelineSemaphoreFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_8bit_storage))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevice8BitStorageFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevice8BitStorageFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevice8BitStorageFeatures.sType = stype;
         supported = &supported_VkPhysicalDevice8BitStorageFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_conditional_rendering))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_vulkan_memory_model))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVulkanMemoryModelFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVulkanMemoryModelFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVulkanMemoryModelFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceVulkanMemoryModelFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_atomic_int64))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderAtomicInt64Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderAtomicInt64Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderAtomicInt64Features.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderAtomicInt64Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_atomic_float))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_atomic_float2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_vertex_attribute_divisor || physical_device->supported_extensions.KHR_vertex_attribute_divisor))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVertexAttributeDivisorFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVertexAttributeDivisorFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVertexAttributeDivisorFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceVertexAttributeDivisorFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_astc_decode_mode))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceASTCDecodeFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceASTCDecodeFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceASTCDecodeFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceASTCDecodeFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_transform_feedback))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_representative_fragment_test))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_scissor_exclusive))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExclusiveScissorFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExclusiveScissorFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExclusiveScissorFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceExclusiveScissorFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_corner_sampled_image))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCornerSampledImageFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCornerSampledImageFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCornerSampledImageFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCornerSampledImageFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR:
         if (!(physical_device->supported_extensions.NV_compute_shader_derivatives || physical_device->supported_extensions.KHR_compute_shader_derivatives))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_shader_image_footprint))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_dedicated_allocation_image_aliasing))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_copy_memory_indirect))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_copy_memory_indirect))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT:
         if (!(physical_device->supported_extensions.NV_memory_decompression || physical_device->supported_extensions.EXT_memory_decompression))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_shading_rate_image))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShadingRateImageFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShadingRateImageFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShadingRateImageFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceShadingRateImageFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
         if (!(physical_device->supported_extensions.HUAWEI_invocation_mask))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI.sType = stype;
         supported = &supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_mesh_shader))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMeshShaderFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMeshShaderFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMeshShaderFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceMeshShaderFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_mesh_shader))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMeshShaderFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMeshShaderFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMeshShaderFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMeshShaderFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_acceleration_structure))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_ray_tracing_pipeline))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_ray_query))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayQueryFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayQueryFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayQueryFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceRayQueryFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_ray_tracing_maintenance1))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_fragment_density_map))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_fragment_density_map2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT:
         if (!(physical_device->supported_extensions.QCOM_fragment_density_map_offset || physical_device->supported_extensions.EXT_fragment_density_map_offset))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_scalar_block_layout))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceScalarBlockLayoutFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceScalarBlockLayoutFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceScalarBlockLayoutFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceScalarBlockLayoutFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_uniform_buffer_standard_layout))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_depth_clip_enable))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_memory_priority))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_pageable_device_local_memory))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_buffer_device_address))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceBufferDeviceAddressFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceBufferDeviceAddressFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceBufferDeviceAddressFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceBufferDeviceAddressFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_buffer_device_address))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_imageless_framebuffer))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImagelessFramebufferFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImagelessFramebufferFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImagelessFramebufferFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceImagelessFramebufferFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_texture_compression_astc_hdr))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_cooperative_matrix))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_ycbcr_image_arrays))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_present_barrier))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentBarrierFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentBarrierFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentBarrierFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePresentBarrierFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_performance_query))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePerformanceQueryFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePerformanceQueryFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePerformanceQueryFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePerformanceQueryFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_coverage_reduction_mode))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
         if (!(physical_device->supported_extensions.INTEL_shader_integer_functions2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_clock))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderClockFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderClockFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderClockFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderClockFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_index_type_uint8 || physical_device->supported_extensions.KHR_index_type_uint8))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceIndexTypeUint8Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceIndexTypeUint8Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceIndexTypeUint8Features.sType = stype;
         supported = &supported_VkPhysicalDeviceIndexTypeUint8Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_shader_sm_builtins))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_fragment_shader_interlock))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_separate_depth_stencil_layouts))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_primitive_topology_list_restart))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_pipeline_executable_properties))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_shader_demote_to_helper_invocation))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_texel_buffer_alignment))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_subgroup_size_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSubgroupSizeControlFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSubgroupSizeControlFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSubgroupSizeControlFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceSubgroupSizeControlFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_line_rasterization || physical_device->supported_extensions.KHR_line_rasterization))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceLineRasterizationFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceLineRasterizationFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceLineRasterizationFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceLineRasterizationFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_pipeline_creation_cache_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineCreationCacheControlFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineCreationCacheControlFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineCreationCacheControlFeatures.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineCreationCacheControlFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVulkan11Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVulkan11Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVulkan11Features.sType = stype;
         supported = &supported_VkPhysicalDeviceVulkan11Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVulkan12Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVulkan12Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVulkan12Features.sType = stype;
         supported = &supported_VkPhysicalDeviceVulkan12Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVulkan13Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVulkan13Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVulkan13Features.sType = stype;
         supported = &supported_VkPhysicalDeviceVulkan13Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0)))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVulkan14Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVulkan14Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVulkan14Features.sType = stype;
         supported = &supported_VkPhysicalDeviceVulkan14Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
         if (!(physical_device->supported_extensions.AMD_device_coherent_memory))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD.sType = stype;
         supported = &supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GPA_FEATURES_AMD:
         if (!(physical_device->supported_extensions.AMD_gpa_interface))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceGpaFeaturesAMD.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceGpaFeaturesAMD.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceGpaFeaturesAMD.sType = stype;
         supported = &supported_VkPhysicalDeviceGpaFeaturesAMD;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_custom_border_color))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_border_color_swizzle))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state3))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_FLAGS_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_extended_flags))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_partitioned_acceleration_structure))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_device_diagnostics_config))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_zero_initialize_workgroup_memory))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_subgroup_uniform_control_flow))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
         if (!(physical_device->supported_extensions.EXT_robustness2 || physical_device->supported_extensions.KHR_robustness2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRobustness2FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRobustness2FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRobustness2FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceRobustness2FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_image_robustness))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageRobustnessFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageRobustnessFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageRobustnessFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceImageRobustnessFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_workgroup_memory_explicit_layout))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_4444_formats))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevice4444FormatsFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevice4444FormatsFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevice4444FormatsFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevice4444FormatsFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
         if (!(physical_device->supported_extensions.HUAWEI_subpass_shading))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI.sType = stype;
         supported = &supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
         if (!(physical_device->supported_extensions.HUAWEI_cluster_culling_shader))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI.sType = stype;
         supported = &supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_image_atomic_int64))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_fragment_shading_rate))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_shader_terminate_invocation))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderTerminateInvocationFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderTerminateInvocationFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderTerminateInvocationFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderTerminateInvocationFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_fragment_shading_rate_enums))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_2d_view_of_3d))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_sliced_view_of_3d))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_attachment_feedback_loop_dynamic_state))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_legacy_vertex_attributes))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.VALVE_mutable_descriptor_type || physical_device->supported_extensions.EXT_mutable_descriptor_type))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_depth_clip_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDepthClipControlFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDepthClipControlFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDepthClipControlFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDepthClipControlFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_zero_initialize_device_memory))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_RESOLVE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_custom_resolve))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCustomResolveFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCustomResolveFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCustomResolveFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceCustomResolveFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_device_generated_commands))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_depth_clamp_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDepthClampControlFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDepthClampControlFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDepthClampControlFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDepthClampControlFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_vertex_input_dynamic_state))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_external_memory_rdma))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_relaxed_extended_instruction))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_color_write_enable))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_synchronization2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSynchronization2Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSynchronization2Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSynchronization2Features.sType = stype;
         supported = &supported_VkPhysicalDeviceSynchronization2Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_unified_image_layouts))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_host_image_copy))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceHostImageCopyFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceHostImageCopyFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceHostImageCopyFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceHostImageCopyFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_primitives_generated_query))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_legacy_dithering))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_multisampled_render_to_single_sampled))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SWAPCHAIN_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_multisampled_render_to_swapchain))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_pipeline_protected_access))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineProtectedAccessFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineProtectedAccessFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineProtectedAccessFeatures.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineProtectedAccessFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_maintenance1))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_maintenance2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_decode_vp9))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_encode_quantization_map))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_FEEDBACK_2_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_encode_feedback2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_encode_av1))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_inherited_viewport_scissor))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_ycbcr_2plane_444_formats))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_provoking_vertex))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceProvokingVertexFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceProvokingVertexFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceProvokingVertexFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceProvokingVertexFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_video_encode_intra_refresh))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_descriptor_buffer))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_shader_integer_dot_product))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderIntegerDotProductFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderIntegerDotProductFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderIntegerDotProductFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderIntegerDotProductFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
         if (!(physical_device->supported_extensions.NV_fragment_shader_barycentric || physical_device->supported_extensions.KHR_fragment_shader_barycentric))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_fma))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderFmaFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderFmaFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderFmaFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderFmaFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_ray_tracing_motion_blur))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_ray_tracing_validation))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingValidationFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingValidationFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingValidationFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingValidationFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_ray_tracing_linear_swept_spheres))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_rgba10x6_formats))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_dynamic_rendering))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDynamicRenderingFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDynamicRenderingFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDynamicRenderingFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceDynamicRenderingFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_view_min_lod))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.ARM_rasterization_order_attachment_access || physical_device->supported_extensions.EXT_rasterization_order_attachment_access))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_linear_color_attachment))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_graphics_pipeline_library))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_pipeline_binary))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineBinaryFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineBinaryFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineBinaryFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineBinaryFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_NEURAL_ACCELERATOR_STATISTICS_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_data_graph_neural_accelerator_statistics))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
         if (!(physical_device->supported_extensions.VALVE_descriptor_set_host_mapping))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_nested_command_buffer))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_module_identifier))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_compression_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_compression_control_swapchain))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_subpass_merge_feedback))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_opacity_micromap))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_opacity_micromap))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_pipeline_properties))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
         if (!(physical_device->supported_extensions.AMD_shader_early_and_late_fragment_tests))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_non_seamless_cube_map))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_pipeline_robustness))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineRobustnessFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineRobustnessFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineRobustnessFeatures.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineRobustnessFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MULTIPLE_WAIT_QUEUES_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_shader_multiple_wait_queues))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_image_processing))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageProcessingFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageProcessingFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageProcessingFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceImageProcessingFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_tile_properties))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
         if (!(physical_device->supported_extensions.SEC_amigo_profiling))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC.sType = stype;
         supported = &supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_attachment_feedback_loop_layout))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_device_address_binding_report))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_optical_flow))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceOpticalFlowFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceOpticalFlowFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceOpticalFlowFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceOpticalFlowFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_device_fault))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFaultFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFaultFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFaultFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFaultFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_device_fault))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFaultFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFaultFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFaultFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceFaultFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_KHR:
         if (!(physical_device->supported_extensions.EXT_pipeline_library_group_handles || physical_device->supported_extensions.KHR_pipeline_library_group_handles))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_shader_core_builtins))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_frame_boundary))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_dynamic_rendering_unused_attachments))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INTERNALLY_SYNCHRONIZED_QUEUES_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_internally_synchronized_queues))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR:
         if (!(physical_device->supported_extensions.EXT_swapchain_maintenance1 || physical_device->supported_extensions.KHR_swapchain_maintenance1))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_depth_bias_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_ray_tracing_invocation_reorder))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_ray_tracing_invocation_reorder))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_extended_sparse_address_space))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_multiview_per_view_viewports))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_ray_tracing_position_fetch))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_multiview_per_view_render_areas))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_object))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderObjectFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderObjectFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderObjectFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderObjectFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_tile_image))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderTileImageFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderTileImageFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderTileImageFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderTileImageFeaturesEXT;
         break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
         if (!(physical_device->supported_extensions.QNX_external_memory_screen_buffer))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX.sType = stype;
         supported = &supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;
         break;
#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_cooperative_matrix))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_CONVERSION_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_cooperative_matrix_conversion))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD:
         if (!(physical_device->supported_extensions.AMD_anti_lag))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceAntiLagFeaturesAMD.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceAntiLagFeaturesAMD.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceAntiLagFeaturesAMD.sType = stype;
         supported = &supported_VkPhysicalDeviceAntiLagFeaturesAMD;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_tile_memory_heap))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_filter_cubic_clamp))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCubicClampFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCubicClampFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCubicClampFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceCubicClampFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_ycbcr_degamma))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_filter_cubic_weights))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_image_processing2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_3_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_image_processing3))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_descriptor_pool_overallocation))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_per_stage_descriptor_set))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV;
         break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
         if (!(physical_device->supported_extensions.ANDROID_external_format_resolve))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID.sType = stype;
         supported = &supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID;
         break;
#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_scheduling_controls))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceSchedulingControlsFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceSchedulingControlsFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceSchedulingControlsFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceSchedulingControlsFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
         if (!(physical_device->supported_extensions.IMG_relaxed_line_rasterization))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG.sType = stype;
         supported = &supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_render_pass_striped))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRenderPassStripedFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRenderPassStripedFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRenderPassStripedFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceRenderPassStripedFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_pipeline_opacity_micromap))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_maximal_reconvergence))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_subgroup_rotate))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSubgroupRotateFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSubgroupRotateFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSubgroupRotateFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSubgroupRotateFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_expect_assume))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderExpectAssumeFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderExpectAssumeFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderExpectAssumeFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderExpectAssumeFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_float_controls2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderFloatControls2Features.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderFloatControls2Features.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderFloatControls2Features.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderFloatControls2Features;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_dynamic_rendering_local_read))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures.sType = stype;
         supported = &supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_quad_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_shader_atomic_float16_vector))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_map_memory_placed))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_bfloat16))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_raw_access_chains))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceRawAccessChainsFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceRawAccessChainsFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceRawAccessChainsFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceRawAccessChainsFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_command_buffer_inheritance))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA:
         if (!(physical_device->supported_extensions.MESA_image_alignment_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA.sType = stype;
         supported = &supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_replicated_composites))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR:
         if (!(physical_device->supported_extensions.EXT_present_mode_fifo_latest_ready || physical_device->supported_extensions.KHR_present_mode_fifo_latest_ready))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_cooperative_matrix2))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_DECODE_VECTOR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_cooperative_matrix_decode_vector))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI:
         if (!(physical_device->supported_extensions.HUAWEI_hdr_vivid))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI.sType = stype;
         supported = &supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_vertex_attribute_robustness))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR:
         if (!(physical_device->supported_extensions.EXT_depth_clamp_zero_one || physical_device->supported_extensions.KHR_depth_clamp_zero_one))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_cooperative_vector))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeVectorFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeVectorFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeVectorFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeVectorFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_tile_shading))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTileShadingFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTileShadingFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTileShadingFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceTileShadingFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE:
         if (!(physical_device->supported_extensions.VALVE_fragment_density_map_layered))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE.sType = stype;
         supported = &supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_present_metering))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePresentMeteringFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePresentMeteringFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePresentMeteringFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDevicePresentMeteringFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_uniform_buffer_unsized_array))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MIXED_FLOAT_DOT_PRODUCT_FEATURES_VALVE:
         if (!(physical_device->supported_extensions.VALVE_shader_mixed_float_dot_product))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_RESTART_INDEX_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_primitive_restart_index))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_format_pack))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceFormatPackFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceFormatPackFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceFormatPackFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceFormatPackFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_THROTTLE_HINT_FEATURES_SEC:
         if (!(physical_device->supported_extensions.SEC_throttle_hint))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceThrottleHintFeaturesSEC.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceThrottleHintFeaturesSEC.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceThrottleHintFeaturesSEC.sType = stype;
         supported = &supported_VkPhysicalDeviceThrottleHintFeaturesSEC;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_tensors))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTensorFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTensorFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTensorFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceTensorFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_tensors))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_float8))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderFloat8FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderFloat8FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderFloat8FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderFloat8FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_data_graph))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDataGraphFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDataGraphFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDataGraphFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceDataGraphFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC:
         if (!(physical_device->supported_extensions.SEC_pipeline_cache_incremental_mode))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC.sType = stype;
         supported = &supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_MODEL_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_data_graph_model))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_untyped_pointers))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE:
         if (!(physical_device->supported_extensions.VALVE_video_encode_rgb_conversion))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE.sType = stype;
         supported = &supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_64bit_indexing))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_QUEUE_PERF_HINT_FEATURES_QCOM:
         if (!(physical_device->supported_extensions.QCOM_queue_perf_hint))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM.sType = stype;
         supported = &supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_performance_counters_by_region))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_OCCUPANCY_PRIORITY_FEATURES_NV:
         if (!(physical_device->supported_extensions.NV_compute_occupancy_priority))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV.sType = stype;
         supported = &supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_long_vector))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_3D_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_texture_compression_astc_3d))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_PARTITIONED_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_subgroup_partitioned))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SPLIT_BARRIER_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_split_barrier))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_descriptor_heap))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INSTRUMENTATION_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_shader_instrumentation))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_ADDRESS_COMMANDS_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_device_address_commands))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CONSTANT_DATA_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_constant_data))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ABORT_FEATURES_KHR:
         if (!(physical_device->supported_extensions.KHR_shader_abort))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderAbortFeaturesKHR.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderAbortFeaturesKHR.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderAbortFeaturesKHR.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderAbortFeaturesKHR;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_OPTICAL_FLOW_FEATURES_ARM:
         if (!(physical_device->supported_extensions.ARM_data_graph_optical_flow))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM.sType = stype;
         supported = &supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_TILING_CONTROL_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_image_tiling_control))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceImageTilingControlFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceImageTilingControlFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceImageTilingControlFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceImageTilingControlFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OCP_MICROSCALING_TYPES_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_shader_ocp_microscaling_types))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_MAINTENANCE_1_FEATURES_EXT:
         if (!(physical_device->supported_extensions.EXT_cooperative_matrix_maintenance1))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT.sType = stype;
         supported = &supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT;
         break;
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_ALLOCATION_ALIGNMENT_FEATURES_VALVE:
         if (!(physical_device->supported_extensions.VALVE_buffer_device_address_allocation_alignment))
            break;

         /* Ignore duplicated structs instead of failing to create the device. */
         if (supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE.sType != 0) {
            vk_logw(VK_LOG_OBJS(physical_device),
                    "WARNING: Duplicate sType %s in the device creation chain.\n",
                    vk_StructureType_to_str(stype));
            continue;
         }

         /* Check for cycles in the list */
         if (supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE.pNext != NULL)
            return VK_ERROR_UNKNOWN;

         supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE.sType = stype;
         supported = &supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE;
         break;
      default:
         break;
      }

      /* Not a feature struct. */
      if (!supported)
         continue;

      __vk_append_struct(&supported_features2, supported);
   }

   physical_device->dispatch_table.GetPhysicalDeviceFeatures2(
      vk_physical_device, &supported_features2);

   if (pCreateInfo->pEnabledFeatures) {
      VkResult result =
        check_physical_device_features(physical_device,
                                       &supported_features2.features,
                                       pCreateInfo->pEnabledFeatures,
                                       "VkPhysicalDeviceFeatures");
      if (result != VK_SUCCESS)
         return result;
   }

   /* Iterate through additional feature structs */
   vk_foreach_struct_const(sType, features, pCreateInfo->pNext) {
      /* Check each feature boolean for given structure. */
      switch (sType) {
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
         const VkPhysicalDeviceFeatures2 *features2 = features;
         VkResult result =
            check_physical_device_features(physical_device,
                                           &supported_features2.features,
                                           &features2->features,
                                           "VkPhysicalDeviceFeatures2.features");
         if (result != VK_SUCCESS)
            return result;
        break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_device_generated_commands))
            break;
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *a = &supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *b = features;
         if (b->deviceGeneratedCommands && !a->deviceGeneratedCommands)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV", "deviceGeneratedCommands");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_push_constant_bank))
            break;
         const VkPhysicalDevicePushConstantBankFeaturesNV *a = &supported_VkPhysicalDevicePushConstantBankFeaturesNV;
         const VkPhysicalDevicePushConstantBankFeaturesNV *b = features;
         if (b->pushConstantBank && !a->pushConstantBank)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePushConstantBankFeaturesNV", "pushConstantBank");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_device_generated_commands_compute))
            break;
         const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *a = &supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;
         const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *b = features;
         if (b->deviceGeneratedCompute && !a->deviceGeneratedCompute)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV", "deviceGeneratedCompute");
         if (b->deviceGeneratedComputePipelines && !a->deviceGeneratedComputePipelines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV", "deviceGeneratedComputePipelines");
         if (b->deviceGeneratedComputeCaptureReplay && !a->deviceGeneratedComputeCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV", "deviceGeneratedComputeCaptureReplay");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_private_data))
            break;
         const VkPhysicalDevicePrivateDataFeatures *a = &supported_VkPhysicalDevicePrivateDataFeatures;
         const VkPhysicalDevicePrivateDataFeatures *b = features;
         if (b->privateData && !a->privateData)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrivateDataFeatures", "privateData");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_BASE_HANDLE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_private_data_base_handle))
            break;
         const VkPhysicalDevicePrivateDataBaseHandleFeaturesNV *a = &supported_VkPhysicalDevicePrivateDataBaseHandleFeaturesNV;
         const VkPhysicalDevicePrivateDataBaseHandleFeaturesNV *b = features;
         if (b->privateDataBaseHandle && !a->privateDataBaseHandle)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrivateDataBaseHandleFeaturesNV", "privateDataBaseHandle");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_cluster_acceleration_structure))
            break;
         const VkPhysicalDeviceClusterAccelerationStructureFeaturesNV *a = &supported_VkPhysicalDeviceClusterAccelerationStructureFeaturesNV;
         const VkPhysicalDeviceClusterAccelerationStructureFeaturesNV *b = features;
         if (b->clusterAccelerationStructure && !a->clusterAccelerationStructure)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceClusterAccelerationStructureFeaturesNV", "clusterAccelerationStructure");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_variable_pointers))
            break;
         const VkPhysicalDeviceVariablePointersFeatures *a = &supported_VkPhysicalDeviceVariablePointersFeatures;
         const VkPhysicalDeviceVariablePointersFeatures *b = features;
         if (b->variablePointersStorageBuffer && !a->variablePointersStorageBuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVariablePointersFeatures", "variablePointersStorageBuffer");
         if (b->variablePointers && !a->variablePointers)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVariablePointersFeatures", "variablePointers");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_multiview))
            break;
         const VkPhysicalDeviceMultiviewFeatures *a = &supported_VkPhysicalDeviceMultiviewFeatures;
         const VkPhysicalDeviceMultiviewFeatures *b = features;
         if (b->multiview && !a->multiview)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiviewFeatures", "multiview");
         if (b->multiviewGeometryShader && !a->multiviewGeometryShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiviewFeatures", "multiviewGeometryShader");
         if (b->multiviewTessellationShader && !a->multiviewTessellationShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiviewFeatures", "multiviewTessellationShader");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_present_id))
            break;
         const VkPhysicalDevicePresentIdFeaturesKHR *a = &supported_VkPhysicalDevicePresentIdFeaturesKHR;
         const VkPhysicalDevicePresentIdFeaturesKHR *b = features;
         if (b->presentId && !a->presentId)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentIdFeaturesKHR", "presentId");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_present_id2))
            break;
         const VkPhysicalDevicePresentId2FeaturesKHR *a = &supported_VkPhysicalDevicePresentId2FeaturesKHR;
         const VkPhysicalDevicePresentId2FeaturesKHR *b = features;
         if (b->presentId2 && !a->presentId2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentId2FeaturesKHR", "presentId2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_present_wait))
            break;
         const VkPhysicalDevicePresentWaitFeaturesKHR *a = &supported_VkPhysicalDevicePresentWaitFeaturesKHR;
         const VkPhysicalDevicePresentWaitFeaturesKHR *b = features;
         if (b->presentWait && !a->presentWait)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentWaitFeaturesKHR", "presentWait");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_present_wait2))
            break;
         const VkPhysicalDevicePresentWait2FeaturesKHR *a = &supported_VkPhysicalDevicePresentWait2FeaturesKHR;
         const VkPhysicalDevicePresentWait2FeaturesKHR *b = features;
         if (b->presentWait2 && !a->presentWait2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentWait2FeaturesKHR", "presentWait2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_TIMING_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_present_timing))
            break;
         const VkPhysicalDevicePresentTimingFeaturesEXT *a = &supported_VkPhysicalDevicePresentTimingFeaturesEXT;
         const VkPhysicalDevicePresentTimingFeaturesEXT *b = features;
         if (b->presentTiming && !a->presentTiming)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentTimingFeaturesEXT", "presentTiming");
         if (b->presentAtAbsoluteTime && !a->presentAtAbsoluteTime)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentTimingFeaturesEXT", "presentAtAbsoluteTime");
         if (b->presentAtRelativeTime && !a->presentAtRelativeTime)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentTimingFeaturesEXT", "presentAtRelativeTime");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_16bit_storage))
            break;
         const VkPhysicalDevice16BitStorageFeatures *a = &supported_VkPhysicalDevice16BitStorageFeatures;
         const VkPhysicalDevice16BitStorageFeatures *b = features;
         if (b->storageBuffer16BitAccess && !a->storageBuffer16BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice16BitStorageFeatures", "storageBuffer16BitAccess");
         if (b->uniformAndStorageBuffer16BitAccess && !a->uniformAndStorageBuffer16BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice16BitStorageFeatures", "uniformAndStorageBuffer16BitAccess");
         if (b->storagePushConstant16 && !a->storagePushConstant16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice16BitStorageFeatures", "storagePushConstant16");
         if (b->storageInputOutput16 && !a->storageInputOutput16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice16BitStorageFeatures", "storageInputOutput16");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_subgroup_extended_types))
            break;
         const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *a = &supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;
         const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *b = features;
         if (b->shaderSubgroupExtendedTypes && !a->shaderSubgroupExtendedTypes)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures", "shaderSubgroupExtendedTypes");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0) || physical_device->supported_extensions.KHR_sampler_ycbcr_conversion))
            break;
         const VkPhysicalDeviceSamplerYcbcrConversionFeatures *a = &supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures;
         const VkPhysicalDeviceSamplerYcbcrConversionFeatures *b = features;
         if (b->samplerYcbcrConversion && !a->samplerYcbcrConversion)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSamplerYcbcrConversionFeatures", "samplerYcbcrConversion");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0)))
            break;
         const VkPhysicalDeviceProtectedMemoryFeatures *a = &supported_VkPhysicalDeviceProtectedMemoryFeatures;
         const VkPhysicalDeviceProtectedMemoryFeatures *b = features;
         if (b->protectedMemory && !a->protectedMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceProtectedMemoryFeatures", "protectedMemory");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_blend_operation_advanced))
            break;
         const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *a = &supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;
         const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *b = features;
         if (b->advancedBlendCoherentOperations && !a->advancedBlendCoherentOperations)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT", "advancedBlendCoherentOperations");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_multi_draw))
            break;
         const VkPhysicalDeviceMultiDrawFeaturesEXT *a = &supported_VkPhysicalDeviceMultiDrawFeaturesEXT;
         const VkPhysicalDeviceMultiDrawFeaturesEXT *b = features;
         if (b->multiDraw && !a->multiDraw)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiDrawFeaturesEXT", "multiDraw");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_inline_uniform_block))
            break;
         const VkPhysicalDeviceInlineUniformBlockFeatures *a = &supported_VkPhysicalDeviceInlineUniformBlockFeatures;
         const VkPhysicalDeviceInlineUniformBlockFeatures *b = features;
         if (b->inlineUniformBlock && !a->inlineUniformBlock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceInlineUniformBlockFeatures", "inlineUniformBlock");
         if (b->descriptorBindingInlineUniformBlockUpdateAfterBind && !a->descriptorBindingInlineUniformBlockUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceInlineUniformBlockFeatures", "descriptorBindingInlineUniformBlockUpdateAfterBind");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_maintenance4))
            break;
         const VkPhysicalDeviceMaintenance4Features *a = &supported_VkPhysicalDeviceMaintenance4Features;
         const VkPhysicalDeviceMaintenance4Features *b = features;
         if (b->maintenance4 && !a->maintenance4)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance4Features", "maintenance4");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_maintenance5))
            break;
         const VkPhysicalDeviceMaintenance5Features *a = &supported_VkPhysicalDeviceMaintenance5Features;
         const VkPhysicalDeviceMaintenance5Features *b = features;
         if (b->maintenance5 && !a->maintenance5)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance5Features", "maintenance5");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_maintenance6))
            break;
         const VkPhysicalDeviceMaintenance6Features *a = &supported_VkPhysicalDeviceMaintenance6Features;
         const VkPhysicalDeviceMaintenance6Features *b = features;
         if (b->maintenance6 && !a->maintenance6)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance6Features", "maintenance6");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_maintenance7))
            break;
         const VkPhysicalDeviceMaintenance7FeaturesKHR *a = &supported_VkPhysicalDeviceMaintenance7FeaturesKHR;
         const VkPhysicalDeviceMaintenance7FeaturesKHR *b = features;
         if (b->maintenance7 && !a->maintenance7)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance7FeaturesKHR", "maintenance7");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_maintenance8))
            break;
         const VkPhysicalDeviceMaintenance8FeaturesKHR *a = &supported_VkPhysicalDeviceMaintenance8FeaturesKHR;
         const VkPhysicalDeviceMaintenance8FeaturesKHR *b = features;
         if (b->maintenance8 && !a->maintenance8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance8FeaturesKHR", "maintenance8");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_maintenance9))
            break;
         const VkPhysicalDeviceMaintenance9FeaturesKHR *a = &supported_VkPhysicalDeviceMaintenance9FeaturesKHR;
         const VkPhysicalDeviceMaintenance9FeaturesKHR *b = features;
         if (b->maintenance9 && !a->maintenance9)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance9FeaturesKHR", "maintenance9");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_11_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_maintenance11))
            break;
         const VkPhysicalDeviceMaintenance11FeaturesKHR *a = &supported_VkPhysicalDeviceMaintenance11FeaturesKHR;
         const VkPhysicalDeviceMaintenance11FeaturesKHR *b = features;
         if (b->maintenance11 && !a->maintenance11)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance11FeaturesKHR", "maintenance11");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_maintenance10))
            break;
         const VkPhysicalDeviceMaintenance10FeaturesKHR *a = &supported_VkPhysicalDeviceMaintenance10FeaturesKHR;
         const VkPhysicalDeviceMaintenance10FeaturesKHR *b = features;
         if (b->maintenance10 && !a->maintenance10)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMaintenance10FeaturesKHR", "maintenance10");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 1, 0)))
            break;
         const VkPhysicalDeviceShaderDrawParametersFeatures *a = &supported_VkPhysicalDeviceShaderDrawParametersFeatures;
         const VkPhysicalDeviceShaderDrawParametersFeatures *b = features;
         if (b->shaderDrawParameters && !a->shaderDrawParameters)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderDrawParametersFeatures", "shaderDrawParameters");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_float16_int8))
            break;
         const VkPhysicalDeviceShaderFloat16Int8Features *a = &supported_VkPhysicalDeviceShaderFloat16Int8Features;
         const VkPhysicalDeviceShaderFloat16Int8Features *b = features;
         if (b->shaderFloat16 && !a->shaderFloat16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFloat16Int8Features", "shaderFloat16");
         if (b->shaderInt8 && !a->shaderInt8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFloat16Int8Features", "shaderInt8");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_host_query_reset))
            break;
         const VkPhysicalDeviceHostQueryResetFeatures *a = &supported_VkPhysicalDeviceHostQueryResetFeatures;
         const VkPhysicalDeviceHostQueryResetFeatures *b = features;
         if (b->hostQueryReset && !a->hostQueryReset)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceHostQueryResetFeatures", "hostQueryReset");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ELAPSED_TIMER_QUERY_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_elapsed_timer_query))
            break;
         const VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM *a = &supported_VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM;
         const VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM *b = features;
         if (b->elapsedTimerQuery && !a->elapsedTimerQuery)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM", "elapsedTimerQuery");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_global_priority || physical_device->supported_extensions.EXT_global_priority_query))
            break;
         const VkPhysicalDeviceGlobalPriorityQueryFeatures *a = &supported_VkPhysicalDeviceGlobalPriorityQueryFeatures;
         const VkPhysicalDeviceGlobalPriorityQueryFeatures *b = features;
         if (b->globalPriorityQuery && !a->globalPriorityQuery)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGlobalPriorityQueryFeatures", "globalPriorityQuery");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_device_memory_report))
            break;
         const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *a = &supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;
         const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *b = features;
         if (b->deviceMemoryReport && !a->deviceMemoryReport)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceMemoryReportFeaturesEXT", "deviceMemoryReport");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_descriptor_indexing))
            break;
         const VkPhysicalDeviceDescriptorIndexingFeatures *a = &supported_VkPhysicalDeviceDescriptorIndexingFeatures;
         const VkPhysicalDeviceDescriptorIndexingFeatures *b = features;
         if (b->shaderInputAttachmentArrayDynamicIndexing && !a->shaderInputAttachmentArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderInputAttachmentArrayDynamicIndexing");
         if (b->shaderUniformTexelBufferArrayDynamicIndexing && !a->shaderUniformTexelBufferArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderUniformTexelBufferArrayDynamicIndexing");
         if (b->shaderStorageTexelBufferArrayDynamicIndexing && !a->shaderStorageTexelBufferArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderStorageTexelBufferArrayDynamicIndexing");
         if (b->shaderUniformBufferArrayNonUniformIndexing && !a->shaderUniformBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderUniformBufferArrayNonUniformIndexing");
         if (b->shaderSampledImageArrayNonUniformIndexing && !a->shaderSampledImageArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderSampledImageArrayNonUniformIndexing");
         if (b->shaderStorageBufferArrayNonUniformIndexing && !a->shaderStorageBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderStorageBufferArrayNonUniformIndexing");
         if (b->shaderStorageImageArrayNonUniformIndexing && !a->shaderStorageImageArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderStorageImageArrayNonUniformIndexing");
         if (b->shaderInputAttachmentArrayNonUniformIndexing && !a->shaderInputAttachmentArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderInputAttachmentArrayNonUniformIndexing");
         if (b->shaderUniformTexelBufferArrayNonUniformIndexing && !a->shaderUniformTexelBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderUniformTexelBufferArrayNonUniformIndexing");
         if (b->shaderStorageTexelBufferArrayNonUniformIndexing && !a->shaderStorageTexelBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "shaderStorageTexelBufferArrayNonUniformIndexing");
         if (b->descriptorBindingUniformBufferUpdateAfterBind && !a->descriptorBindingUniformBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingUniformBufferUpdateAfterBind");
         if (b->descriptorBindingSampledImageUpdateAfterBind && !a->descriptorBindingSampledImageUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingSampledImageUpdateAfterBind");
         if (b->descriptorBindingStorageImageUpdateAfterBind && !a->descriptorBindingStorageImageUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingStorageImageUpdateAfterBind");
         if (b->descriptorBindingStorageBufferUpdateAfterBind && !a->descriptorBindingStorageBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingStorageBufferUpdateAfterBind");
         if (b->descriptorBindingUniformTexelBufferUpdateAfterBind && !a->descriptorBindingUniformTexelBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingUniformTexelBufferUpdateAfterBind");
         if (b->descriptorBindingStorageTexelBufferUpdateAfterBind && !a->descriptorBindingStorageTexelBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingStorageTexelBufferUpdateAfterBind");
         if (b->descriptorBindingUpdateUnusedWhilePending && !a->descriptorBindingUpdateUnusedWhilePending)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingUpdateUnusedWhilePending");
         if (b->descriptorBindingPartiallyBound && !a->descriptorBindingPartiallyBound)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingPartiallyBound");
         if (b->descriptorBindingVariableDescriptorCount && !a->descriptorBindingVariableDescriptorCount)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "descriptorBindingVariableDescriptorCount");
         if (b->runtimeDescriptorArray && !a->runtimeDescriptorArray)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorIndexingFeatures", "runtimeDescriptorArray");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_timeline_semaphore))
            break;
         const VkPhysicalDeviceTimelineSemaphoreFeatures *a = &supported_VkPhysicalDeviceTimelineSemaphoreFeatures;
         const VkPhysicalDeviceTimelineSemaphoreFeatures *b = features;
         if (b->timelineSemaphore && !a->timelineSemaphore)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTimelineSemaphoreFeatures", "timelineSemaphore");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_8bit_storage))
            break;
         const VkPhysicalDevice8BitStorageFeatures *a = &supported_VkPhysicalDevice8BitStorageFeatures;
         const VkPhysicalDevice8BitStorageFeatures *b = features;
         if (b->storageBuffer8BitAccess && !a->storageBuffer8BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice8BitStorageFeatures", "storageBuffer8BitAccess");
         if (b->uniformAndStorageBuffer8BitAccess && !a->uniformAndStorageBuffer8BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice8BitStorageFeatures", "uniformAndStorageBuffer8BitAccess");
         if (b->storagePushConstant8 && !a->storagePushConstant8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice8BitStorageFeatures", "storagePushConstant8");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_conditional_rendering))
            break;
         const VkPhysicalDeviceConditionalRenderingFeaturesEXT *a = &supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT;
         const VkPhysicalDeviceConditionalRenderingFeaturesEXT *b = features;
         if (b->conditionalRendering && !a->conditionalRendering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceConditionalRenderingFeaturesEXT", "conditionalRendering");
         if (b->inheritedConditionalRendering && !a->inheritedConditionalRendering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceConditionalRenderingFeaturesEXT", "inheritedConditionalRendering");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_vulkan_memory_model))
            break;
         const VkPhysicalDeviceVulkanMemoryModelFeatures *a = &supported_VkPhysicalDeviceVulkanMemoryModelFeatures;
         const VkPhysicalDeviceVulkanMemoryModelFeatures *b = features;
         if (b->vulkanMemoryModel && !a->vulkanMemoryModel)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkanMemoryModelFeatures", "vulkanMemoryModel");
         if (b->vulkanMemoryModelDeviceScope && !a->vulkanMemoryModelDeviceScope)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkanMemoryModelFeatures", "vulkanMemoryModelDeviceScope");
         if (b->vulkanMemoryModelAvailabilityVisibilityChains && !a->vulkanMemoryModelAvailabilityVisibilityChains)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkanMemoryModelFeatures", "vulkanMemoryModelAvailabilityVisibilityChains");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_shader_atomic_int64))
            break;
         const VkPhysicalDeviceShaderAtomicInt64Features *a = &supported_VkPhysicalDeviceShaderAtomicInt64Features;
         const VkPhysicalDeviceShaderAtomicInt64Features *b = features;
         if (b->shaderBufferInt64Atomics && !a->shaderBufferInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicInt64Features", "shaderBufferInt64Atomics");
         if (b->shaderSharedInt64Atomics && !a->shaderSharedInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicInt64Features", "shaderSharedInt64Atomics");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_atomic_float))
            break;
         const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *a = &supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;
         const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *b = features;
         if (b->shaderBufferFloat32Atomics && !a->shaderBufferFloat32Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderBufferFloat32Atomics");
         if (b->shaderBufferFloat32AtomicAdd && !a->shaderBufferFloat32AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderBufferFloat32AtomicAdd");
         if (b->shaderBufferFloat64Atomics && !a->shaderBufferFloat64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderBufferFloat64Atomics");
         if (b->shaderBufferFloat64AtomicAdd && !a->shaderBufferFloat64AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderBufferFloat64AtomicAdd");
         if (b->shaderSharedFloat32Atomics && !a->shaderSharedFloat32Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderSharedFloat32Atomics");
         if (b->shaderSharedFloat32AtomicAdd && !a->shaderSharedFloat32AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderSharedFloat32AtomicAdd");
         if (b->shaderSharedFloat64Atomics && !a->shaderSharedFloat64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderSharedFloat64Atomics");
         if (b->shaderSharedFloat64AtomicAdd && !a->shaderSharedFloat64AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderSharedFloat64AtomicAdd");
         if (b->shaderImageFloat32Atomics && !a->shaderImageFloat32Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderImageFloat32Atomics");
         if (b->shaderImageFloat32AtomicAdd && !a->shaderImageFloat32AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "shaderImageFloat32AtomicAdd");
         if (b->sparseImageFloat32Atomics && !a->sparseImageFloat32Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "sparseImageFloat32Atomics");
         if (b->sparseImageFloat32AtomicAdd && !a->sparseImageFloat32AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "sparseImageFloat32AtomicAdd");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_atomic_float2))
            break;
         const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *a = &supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;
         const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *b = features;
         if (b->shaderBufferFloat16Atomics && !a->shaderBufferFloat16Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderBufferFloat16Atomics");
         if (b->shaderBufferFloat16AtomicAdd && !a->shaderBufferFloat16AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderBufferFloat16AtomicAdd");
         if (b->shaderBufferFloat16AtomicMinMax && !a->shaderBufferFloat16AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderBufferFloat16AtomicMinMax");
         if (b->shaderBufferFloat32AtomicMinMax && !a->shaderBufferFloat32AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderBufferFloat32AtomicMinMax");
         if (b->shaderBufferFloat64AtomicMinMax && !a->shaderBufferFloat64AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderBufferFloat64AtomicMinMax");
         if (b->shaderSharedFloat16Atomics && !a->shaderSharedFloat16Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderSharedFloat16Atomics");
         if (b->shaderSharedFloat16AtomicAdd && !a->shaderSharedFloat16AtomicAdd)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderSharedFloat16AtomicAdd");
         if (b->shaderSharedFloat16AtomicMinMax && !a->shaderSharedFloat16AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderSharedFloat16AtomicMinMax");
         if (b->shaderSharedFloat32AtomicMinMax && !a->shaderSharedFloat32AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderSharedFloat32AtomicMinMax");
         if (b->shaderSharedFloat64AtomicMinMax && !a->shaderSharedFloat64AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderSharedFloat64AtomicMinMax");
         if (b->shaderImageFloat32AtomicMinMax && !a->shaderImageFloat32AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "shaderImageFloat32AtomicMinMax");
         if (b->sparseImageFloat32AtomicMinMax && !a->sparseImageFloat32AtomicMinMax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "sparseImageFloat32AtomicMinMax");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_vertex_attribute_divisor || physical_device->supported_extensions.KHR_vertex_attribute_divisor))
            break;
         const VkPhysicalDeviceVertexAttributeDivisorFeatures *a = &supported_VkPhysicalDeviceVertexAttributeDivisorFeatures;
         const VkPhysicalDeviceVertexAttributeDivisorFeatures *b = features;
         if (b->vertexAttributeInstanceRateDivisor && !a->vertexAttributeInstanceRateDivisor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVertexAttributeDivisorFeatures", "vertexAttributeInstanceRateDivisor");
         if (b->vertexAttributeInstanceRateZeroDivisor && !a->vertexAttributeInstanceRateZeroDivisor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVertexAttributeDivisorFeatures", "vertexAttributeInstanceRateZeroDivisor");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_astc_decode_mode))
            break;
         const VkPhysicalDeviceASTCDecodeFeaturesEXT *a = &supported_VkPhysicalDeviceASTCDecodeFeaturesEXT;
         const VkPhysicalDeviceASTCDecodeFeaturesEXT *b = features;
         if (b->decodeModeSharedExponent && !a->decodeModeSharedExponent)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceASTCDecodeFeaturesEXT", "decodeModeSharedExponent");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_transform_feedback))
            break;
         const VkPhysicalDeviceTransformFeedbackFeaturesEXT *a = &supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT;
         const VkPhysicalDeviceTransformFeedbackFeaturesEXT *b = features;
         if (b->transformFeedback && !a->transformFeedback)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTransformFeedbackFeaturesEXT", "transformFeedback");
         if (b->geometryStreams && !a->geometryStreams)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTransformFeedbackFeaturesEXT", "geometryStreams");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_representative_fragment_test))
            break;
         const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *a = &supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;
         const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *b = features;
         if (b->representativeFragmentTest && !a->representativeFragmentTest)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV", "representativeFragmentTest");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_scissor_exclusive))
            break;
         const VkPhysicalDeviceExclusiveScissorFeaturesNV *a = &supported_VkPhysicalDeviceExclusiveScissorFeaturesNV;
         const VkPhysicalDeviceExclusiveScissorFeaturesNV *b = features;
         if (b->exclusiveScissor && !a->exclusiveScissor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExclusiveScissorFeaturesNV", "exclusiveScissor");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_corner_sampled_image))
            break;
         const VkPhysicalDeviceCornerSampledImageFeaturesNV *a = &supported_VkPhysicalDeviceCornerSampledImageFeaturesNV;
         const VkPhysicalDeviceCornerSampledImageFeaturesNV *b = features;
         if (b->cornerSampledImage && !a->cornerSampledImage)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCornerSampledImageFeaturesNV", "cornerSampledImage");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.NV_compute_shader_derivatives || physical_device->supported_extensions.KHR_compute_shader_derivatives))
            break;
         const VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR *a = &supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR;
         const VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR *b = features;
         if (b->computeDerivativeGroupQuads && !a->computeDerivativeGroupQuads)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR", "computeDerivativeGroupQuads");
         if (b->computeDerivativeGroupLinear && !a->computeDerivativeGroupLinear)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR", "computeDerivativeGroupLinear");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_shader_image_footprint))
            break;
         const VkPhysicalDeviceShaderImageFootprintFeaturesNV *a = &supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV;
         const VkPhysicalDeviceShaderImageFootprintFeaturesNV *b = features;
         if (b->imageFootprint && !a->imageFootprint)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderImageFootprintFeaturesNV", "imageFootprint");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_dedicated_allocation_image_aliasing))
            break;
         const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *a = &supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;
         const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *b = features;
         if (b->dedicatedAllocationImageAliasing && !a->dedicatedAllocationImageAliasing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV", "dedicatedAllocationImageAliasing");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_copy_memory_indirect))
            break;
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR *a = &supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR;
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR *b = features;
         if (b->indirectMemoryCopy && !a->indirectMemoryCopy)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR", "indirectMemoryCopy");
         if (b->indirectMemoryToImageCopy && !a->indirectMemoryToImageCopy)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR", "indirectMemoryToImageCopy");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_copy_memory_indirect))
            break;
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *a = &supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *b = features;
         if (b->indirectCopy && !a->indirectCopy)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCopyMemoryIndirectFeaturesNV", "indirectCopy");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.NV_memory_decompression || physical_device->supported_extensions.EXT_memory_decompression))
            break;
         const VkPhysicalDeviceMemoryDecompressionFeaturesEXT *a = &supported_VkPhysicalDeviceMemoryDecompressionFeaturesEXT;
         const VkPhysicalDeviceMemoryDecompressionFeaturesEXT *b = features;
         if (b->memoryDecompression && !a->memoryDecompression)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMemoryDecompressionFeaturesEXT", "memoryDecompression");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_shading_rate_image))
            break;
         const VkPhysicalDeviceShadingRateImageFeaturesNV *a = &supported_VkPhysicalDeviceShadingRateImageFeaturesNV;
         const VkPhysicalDeviceShadingRateImageFeaturesNV *b = features;
         if (b->shadingRateImage && !a->shadingRateImage)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShadingRateImageFeaturesNV", "shadingRateImage");
         if (b->shadingRateCoarseSampleOrder && !a->shadingRateCoarseSampleOrder)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShadingRateImageFeaturesNV", "shadingRateCoarseSampleOrder");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: {
         if (!(physical_device->supported_extensions.HUAWEI_invocation_mask))
            break;
         const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *a = &supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;
         const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *b = features;
         if (b->invocationMask && !a->invocationMask)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceInvocationMaskFeaturesHUAWEI", "invocationMask");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_mesh_shader))
            break;
         const VkPhysicalDeviceMeshShaderFeaturesNV *a = &supported_VkPhysicalDeviceMeshShaderFeaturesNV;
         const VkPhysicalDeviceMeshShaderFeaturesNV *b = features;
         if (b->taskShader && !a->taskShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesNV", "taskShader");
         if (b->meshShader && !a->meshShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesNV", "meshShader");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_mesh_shader))
            break;
         const VkPhysicalDeviceMeshShaderFeaturesEXT *a = &supported_VkPhysicalDeviceMeshShaderFeaturesEXT;
         const VkPhysicalDeviceMeshShaderFeaturesEXT *b = features;
         if (b->taskShader && !a->taskShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesEXT", "taskShader");
         if (b->meshShader && !a->meshShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesEXT", "meshShader");
         if (b->multiviewMeshShader && !a->multiviewMeshShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesEXT", "multiviewMeshShader");
         if (b->primitiveFragmentShadingRateMeshShader && !a->primitiveFragmentShadingRateMeshShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesEXT", "primitiveFragmentShadingRateMeshShader");
         if (b->meshShaderQueries && !a->meshShaderQueries)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMeshShaderFeaturesEXT", "meshShaderQueries");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_acceleration_structure))
            break;
         const VkPhysicalDeviceAccelerationStructureFeaturesKHR *a = &supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR;
         const VkPhysicalDeviceAccelerationStructureFeaturesKHR *b = features;
         if (b->accelerationStructure && !a->accelerationStructure)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAccelerationStructureFeaturesKHR", "accelerationStructure");
         if (b->accelerationStructureCaptureReplay && !a->accelerationStructureCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAccelerationStructureFeaturesKHR", "accelerationStructureCaptureReplay");
         if (b->accelerationStructureIndirectBuild && !a->accelerationStructureIndirectBuild)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAccelerationStructureFeaturesKHR", "accelerationStructureIndirectBuild");
         if (b->accelerationStructureHostCommands && !a->accelerationStructureHostCommands)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAccelerationStructureFeaturesKHR", "accelerationStructureHostCommands");
         if (b->descriptorBindingAccelerationStructureUpdateAfterBind && !a->descriptorBindingAccelerationStructureUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAccelerationStructureFeaturesKHR", "descriptorBindingAccelerationStructureUpdateAfterBind");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_ray_tracing_pipeline))
            break;
         const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *a = &supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR;
         const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *b = features;
         if (b->rayTracingPipeline && !a->rayTracingPipeline)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "rayTracingPipeline");
         if (b->rayTracingPipelineShaderGroupHandleCaptureReplay && !a->rayTracingPipelineShaderGroupHandleCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "rayTracingPipelineShaderGroupHandleCaptureReplay");
         if (b->rayTracingPipelineShaderGroupHandleCaptureReplayMixed && !a->rayTracingPipelineShaderGroupHandleCaptureReplayMixed)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "rayTracingPipelineShaderGroupHandleCaptureReplayMixed");
         if (b->rayTracingPipelineTraceRaysIndirect && !a->rayTracingPipelineTraceRaysIndirect)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "rayTracingPipelineTraceRaysIndirect");
         if (b->rayTraversalPrimitiveCulling && !a->rayTraversalPrimitiveCulling)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "rayTraversalPrimitiveCulling");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_ray_query))
            break;
         const VkPhysicalDeviceRayQueryFeaturesKHR *a = &supported_VkPhysicalDeviceRayQueryFeaturesKHR;
         const VkPhysicalDeviceRayQueryFeaturesKHR *b = features;
         if (b->rayQuery && !a->rayQuery)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayQueryFeaturesKHR", "rayQuery");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_ray_tracing_maintenance1))
            break;
         const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *a = &supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;
         const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *b = features;
         if (b->rayTracingMaintenance1 && !a->rayTracingMaintenance1)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR", "rayTracingMaintenance1");
         if (b->rayTracingPipelineTraceRaysIndirect2 && !a->rayTracingPipelineTraceRaysIndirect2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR", "rayTracingPipelineTraceRaysIndirect2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_fragment_density_map))
            break;
         const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *a = &supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT;
         const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *b = features;
         if (b->fragmentDensityMap && !a->fragmentDensityMap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMapFeaturesEXT", "fragmentDensityMap");
         if (b->fragmentDensityMapDynamic && !a->fragmentDensityMapDynamic)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMapFeaturesEXT", "fragmentDensityMapDynamic");
         if (b->fragmentDensityMapNonSubsampledImages && !a->fragmentDensityMapNonSubsampledImages)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMapFeaturesEXT", "fragmentDensityMapNonSubsampledImages");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_fragment_density_map2))
            break;
         const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *a = &supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;
         const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *b = features;
         if (b->fragmentDensityMapDeferred && !a->fragmentDensityMapDeferred)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMap2FeaturesEXT", "fragmentDensityMapDeferred");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.QCOM_fragment_density_map_offset || physical_device->supported_extensions.EXT_fragment_density_map_offset))
            break;
         const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT *a = &supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT;
         const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT *b = features;
         if (b->fragmentDensityMapOffset && !a->fragmentDensityMapOffset)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT", "fragmentDensityMapOffset");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.EXT_scalar_block_layout))
            break;
         const VkPhysicalDeviceScalarBlockLayoutFeatures *a = &supported_VkPhysicalDeviceScalarBlockLayoutFeatures;
         const VkPhysicalDeviceScalarBlockLayoutFeatures *b = features;
         if (b->scalarBlockLayout && !a->scalarBlockLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceScalarBlockLayoutFeatures", "scalarBlockLayout");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_uniform_buffer_standard_layout))
            break;
         const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *a = &supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures;
         const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *b = features;
         if (b->uniformBufferStandardLayout && !a->uniformBufferStandardLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceUniformBufferStandardLayoutFeatures", "uniformBufferStandardLayout");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_depth_clip_enable))
            break;
         const VkPhysicalDeviceDepthClipEnableFeaturesEXT *a = &supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT;
         const VkPhysicalDeviceDepthClipEnableFeaturesEXT *b = features;
         if (b->depthClipEnable && !a->depthClipEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthClipEnableFeaturesEXT", "depthClipEnable");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_memory_priority))
            break;
         const VkPhysicalDeviceMemoryPriorityFeaturesEXT *a = &supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT;
         const VkPhysicalDeviceMemoryPriorityFeaturesEXT *b = features;
         if (b->memoryPriority && !a->memoryPriority)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMemoryPriorityFeaturesEXT", "memoryPriority");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_pageable_device_local_memory))
            break;
         const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *a = &supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;
         const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *b = features;
         if (b->pageableDeviceLocalMemory && !a->pageableDeviceLocalMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT", "pageableDeviceLocalMemory");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_buffer_device_address))
            break;
         const VkPhysicalDeviceBufferDeviceAddressFeatures *a = &supported_VkPhysicalDeviceBufferDeviceAddressFeatures;
         const VkPhysicalDeviceBufferDeviceAddressFeatures *b = features;
         if (b->bufferDeviceAddress && !a->bufferDeviceAddress)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeatures", "bufferDeviceAddress");
         if (b->bufferDeviceAddressCaptureReplay && !a->bufferDeviceAddressCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeatures", "bufferDeviceAddressCaptureReplay");
         if (b->bufferDeviceAddressMultiDevice && !a->bufferDeviceAddressMultiDevice)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeatures", "bufferDeviceAddressMultiDevice");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_buffer_device_address))
            break;
         const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *a = &supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;
         const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *b = features;
         if (b->bufferDeviceAddress && !a->bufferDeviceAddress)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeaturesEXT", "bufferDeviceAddress");
         if (b->bufferDeviceAddressCaptureReplay && !a->bufferDeviceAddressCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeaturesEXT", "bufferDeviceAddressCaptureReplay");
         if (b->bufferDeviceAddressMultiDevice && !a->bufferDeviceAddressMultiDevice)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressFeaturesEXT", "bufferDeviceAddressMultiDevice");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_imageless_framebuffer))
            break;
         const VkPhysicalDeviceImagelessFramebufferFeatures *a = &supported_VkPhysicalDeviceImagelessFramebufferFeatures;
         const VkPhysicalDeviceImagelessFramebufferFeatures *b = features;
         if (b->imagelessFramebuffer && !a->imagelessFramebuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImagelessFramebufferFeatures", "imagelessFramebuffer");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_texture_compression_astc_hdr))
            break;
         const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *a = &supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures;
         const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *b = features;
         if (b->textureCompressionASTC_HDR && !a->textureCompressionASTC_HDR)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTextureCompressionASTCHDRFeatures", "textureCompressionASTC_HDR");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_cooperative_matrix))
            break;
         const VkPhysicalDeviceCooperativeMatrixFeaturesNV *a = &supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV;
         const VkPhysicalDeviceCooperativeMatrixFeaturesNV *b = features;
         if (b->cooperativeMatrix && !a->cooperativeMatrix)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixFeaturesNV", "cooperativeMatrix");
         if (b->cooperativeMatrixRobustBufferAccess && !a->cooperativeMatrixRobustBufferAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixFeaturesNV", "cooperativeMatrixRobustBufferAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_ycbcr_image_arrays))
            break;
         const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *a = &supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;
         const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *b = features;
         if (b->ycbcrImageArrays && !a->ycbcrImageArrays)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceYcbcrImageArraysFeaturesEXT", "ycbcrImageArrays");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_present_barrier))
            break;
         const VkPhysicalDevicePresentBarrierFeaturesNV *a = &supported_VkPhysicalDevicePresentBarrierFeaturesNV;
         const VkPhysicalDevicePresentBarrierFeaturesNV *b = features;
         if (b->presentBarrier && !a->presentBarrier)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentBarrierFeaturesNV", "presentBarrier");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_performance_query))
            break;
         const VkPhysicalDevicePerformanceQueryFeaturesKHR *a = &supported_VkPhysicalDevicePerformanceQueryFeaturesKHR;
         const VkPhysicalDevicePerformanceQueryFeaturesKHR *b = features;
         if (b->performanceCounterQueryPools && !a->performanceCounterQueryPools)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePerformanceQueryFeaturesKHR", "performanceCounterQueryPools");
         if (b->performanceCounterMultipleQueryPools && !a->performanceCounterMultipleQueryPools)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePerformanceQueryFeaturesKHR", "performanceCounterMultipleQueryPools");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_coverage_reduction_mode))
            break;
         const VkPhysicalDeviceCoverageReductionModeFeaturesNV *a = &supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV;
         const VkPhysicalDeviceCoverageReductionModeFeaturesNV *b = features;
         if (b->coverageReductionMode && !a->coverageReductionMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCoverageReductionModeFeaturesNV", "coverageReductionMode");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
         if (!(physical_device->supported_extensions.INTEL_shader_integer_functions2))
            break;
         const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *a = &supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;
         const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *b = features;
         if (b->shaderIntegerFunctions2 && !a->shaderIntegerFunctions2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL", "shaderIntegerFunctions2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_clock))
            break;
         const VkPhysicalDeviceShaderClockFeaturesKHR *a = &supported_VkPhysicalDeviceShaderClockFeaturesKHR;
         const VkPhysicalDeviceShaderClockFeaturesKHR *b = features;
         if (b->shaderSubgroupClock && !a->shaderSubgroupClock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderClockFeaturesKHR", "shaderSubgroupClock");
         if (b->shaderDeviceClock && !a->shaderDeviceClock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderClockFeaturesKHR", "shaderDeviceClock");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_index_type_uint8 || physical_device->supported_extensions.KHR_index_type_uint8))
            break;
         const VkPhysicalDeviceIndexTypeUint8Features *a = &supported_VkPhysicalDeviceIndexTypeUint8Features;
         const VkPhysicalDeviceIndexTypeUint8Features *b = features;
         if (b->indexTypeUint8 && !a->indexTypeUint8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceIndexTypeUint8Features", "indexTypeUint8");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_shader_sm_builtins))
            break;
         const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *a = &supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;
         const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *b = features;
         if (b->shaderSMBuiltins && !a->shaderSMBuiltins)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSMBuiltinsFeaturesNV", "shaderSMBuiltins");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_fragment_shader_interlock))
            break;
         const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *a = &supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;
         const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *b = features;
         if (b->fragmentShaderSampleInterlock && !a->fragmentShaderSampleInterlock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT", "fragmentShaderSampleInterlock");
         if (b->fragmentShaderPixelInterlock && !a->fragmentShaderPixelInterlock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT", "fragmentShaderPixelInterlock");
         if (b->fragmentShaderShadingRateInterlock && !a->fragmentShaderShadingRateInterlock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT", "fragmentShaderShadingRateInterlock");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0) || physical_device->supported_extensions.KHR_separate_depth_stencil_layouts))
            break;
         const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *a = &supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;
         const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *b = features;
         if (b->separateDepthStencilLayouts && !a->separateDepthStencilLayouts)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures", "separateDepthStencilLayouts");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_primitive_topology_list_restart))
            break;
         const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *a = &supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;
         const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *b = features;
         if (b->primitiveTopologyListRestart && !a->primitiveTopologyListRestart)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT", "primitiveTopologyListRestart");
         if (b->primitiveTopologyPatchListRestart && !a->primitiveTopologyPatchListRestart)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT", "primitiveTopologyPatchListRestart");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_pipeline_executable_properties))
            break;
         const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *a = &supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
         const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *b = features;
         if (b->pipelineExecutableInfo && !a->pipelineExecutableInfo)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR", "pipelineExecutableInfo");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_shader_demote_to_helper_invocation))
            break;
         const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *a = &supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;
         const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *b = features;
         if (b->shaderDemoteToHelperInvocation && !a->shaderDemoteToHelperInvocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures", "shaderDemoteToHelperInvocation");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_texel_buffer_alignment))
            break;
         const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *a = &supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;
         const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *b = features;
         if (b->texelBufferAlignment && !a->texelBufferAlignment)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT", "texelBufferAlignment");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_subgroup_size_control))
            break;
         const VkPhysicalDeviceSubgroupSizeControlFeatures *a = &supported_VkPhysicalDeviceSubgroupSizeControlFeatures;
         const VkPhysicalDeviceSubgroupSizeControlFeatures *b = features;
         if (b->subgroupSizeControl && !a->subgroupSizeControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSubgroupSizeControlFeatures", "subgroupSizeControl");
         if (b->computeFullSubgroups && !a->computeFullSubgroups)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSubgroupSizeControlFeatures", "computeFullSubgroups");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_line_rasterization || physical_device->supported_extensions.KHR_line_rasterization))
            break;
         const VkPhysicalDeviceLineRasterizationFeatures *a = &supported_VkPhysicalDeviceLineRasterizationFeatures;
         const VkPhysicalDeviceLineRasterizationFeatures *b = features;
         if (b->rectangularLines && !a->rectangularLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "rectangularLines");
         if (b->bresenhamLines && !a->bresenhamLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "bresenhamLines");
         if (b->smoothLines && !a->smoothLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "smoothLines");
         if (b->stippledRectangularLines && !a->stippledRectangularLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "stippledRectangularLines");
         if (b->stippledBresenhamLines && !a->stippledBresenhamLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "stippledBresenhamLines");
         if (b->stippledSmoothLines && !a->stippledSmoothLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLineRasterizationFeatures", "stippledSmoothLines");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_pipeline_creation_cache_control))
            break;
         const VkPhysicalDevicePipelineCreationCacheControlFeatures *a = &supported_VkPhysicalDevicePipelineCreationCacheControlFeatures;
         const VkPhysicalDevicePipelineCreationCacheControlFeatures *b = features;
         if (b->pipelineCreationCacheControl && !a->pipelineCreationCacheControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineCreationCacheControlFeatures", "pipelineCreationCacheControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0)))
            break;
         const VkPhysicalDeviceVulkan11Features *a = &supported_VkPhysicalDeviceVulkan11Features;
         const VkPhysicalDeviceVulkan11Features *b = features;
         if (b->storageBuffer16BitAccess && !a->storageBuffer16BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "storageBuffer16BitAccess");
         if (b->uniformAndStorageBuffer16BitAccess && !a->uniformAndStorageBuffer16BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "uniformAndStorageBuffer16BitAccess");
         if (b->storagePushConstant16 && !a->storagePushConstant16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "storagePushConstant16");
         if (b->storageInputOutput16 && !a->storageInputOutput16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "storageInputOutput16");
         if (b->multiview && !a->multiview)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "multiview");
         if (b->multiviewGeometryShader && !a->multiviewGeometryShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "multiviewGeometryShader");
         if (b->multiviewTessellationShader && !a->multiviewTessellationShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "multiviewTessellationShader");
         if (b->variablePointersStorageBuffer && !a->variablePointersStorageBuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "variablePointersStorageBuffer");
         if (b->variablePointers && !a->variablePointers)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "variablePointers");
         if (b->protectedMemory && !a->protectedMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "protectedMemory");
         if (b->samplerYcbcrConversion && !a->samplerYcbcrConversion)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "samplerYcbcrConversion");
         if (b->shaderDrawParameters && !a->shaderDrawParameters)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan11Features", "shaderDrawParameters");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 2, 0)))
            break;
         const VkPhysicalDeviceVulkan12Features *a = &supported_VkPhysicalDeviceVulkan12Features;
         const VkPhysicalDeviceVulkan12Features *b = features;
         if (b->samplerMirrorClampToEdge && !a->samplerMirrorClampToEdge)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "samplerMirrorClampToEdge");
         if (b->drawIndirectCount && !a->drawIndirectCount)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "drawIndirectCount");
         if (b->storageBuffer8BitAccess && !a->storageBuffer8BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "storageBuffer8BitAccess");
         if (b->uniformAndStorageBuffer8BitAccess && !a->uniformAndStorageBuffer8BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "uniformAndStorageBuffer8BitAccess");
         if (b->storagePushConstant8 && !a->storagePushConstant8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "storagePushConstant8");
         if (b->shaderBufferInt64Atomics && !a->shaderBufferInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderBufferInt64Atomics");
         if (b->shaderSharedInt64Atomics && !a->shaderSharedInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderSharedInt64Atomics");
         if (b->shaderFloat16 && !a->shaderFloat16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderFloat16");
         if (b->shaderInt8 && !a->shaderInt8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderInt8");
         if (b->descriptorIndexing && !a->descriptorIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorIndexing");
         if (b->shaderInputAttachmentArrayDynamicIndexing && !a->shaderInputAttachmentArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderInputAttachmentArrayDynamicIndexing");
         if (b->shaderUniformTexelBufferArrayDynamicIndexing && !a->shaderUniformTexelBufferArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderUniformTexelBufferArrayDynamicIndexing");
         if (b->shaderStorageTexelBufferArrayDynamicIndexing && !a->shaderStorageTexelBufferArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderStorageTexelBufferArrayDynamicIndexing");
         if (b->shaderUniformBufferArrayNonUniformIndexing && !a->shaderUniformBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderUniformBufferArrayNonUniformIndexing");
         if (b->shaderSampledImageArrayNonUniformIndexing && !a->shaderSampledImageArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderSampledImageArrayNonUniformIndexing");
         if (b->shaderStorageBufferArrayNonUniformIndexing && !a->shaderStorageBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderStorageBufferArrayNonUniformIndexing");
         if (b->shaderStorageImageArrayNonUniformIndexing && !a->shaderStorageImageArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderStorageImageArrayNonUniformIndexing");
         if (b->shaderInputAttachmentArrayNonUniformIndexing && !a->shaderInputAttachmentArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderInputAttachmentArrayNonUniformIndexing");
         if (b->shaderUniformTexelBufferArrayNonUniformIndexing && !a->shaderUniformTexelBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderUniformTexelBufferArrayNonUniformIndexing");
         if (b->shaderStorageTexelBufferArrayNonUniformIndexing && !a->shaderStorageTexelBufferArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderStorageTexelBufferArrayNonUniformIndexing");
         if (b->descriptorBindingUniformBufferUpdateAfterBind && !a->descriptorBindingUniformBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingUniformBufferUpdateAfterBind");
         if (b->descriptorBindingSampledImageUpdateAfterBind && !a->descriptorBindingSampledImageUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingSampledImageUpdateAfterBind");
         if (b->descriptorBindingStorageImageUpdateAfterBind && !a->descriptorBindingStorageImageUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingStorageImageUpdateAfterBind");
         if (b->descriptorBindingStorageBufferUpdateAfterBind && !a->descriptorBindingStorageBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingStorageBufferUpdateAfterBind");
         if (b->descriptorBindingUniformTexelBufferUpdateAfterBind && !a->descriptorBindingUniformTexelBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingUniformTexelBufferUpdateAfterBind");
         if (b->descriptorBindingStorageTexelBufferUpdateAfterBind && !a->descriptorBindingStorageTexelBufferUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingStorageTexelBufferUpdateAfterBind");
         if (b->descriptorBindingUpdateUnusedWhilePending && !a->descriptorBindingUpdateUnusedWhilePending)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingUpdateUnusedWhilePending");
         if (b->descriptorBindingPartiallyBound && !a->descriptorBindingPartiallyBound)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingPartiallyBound");
         if (b->descriptorBindingVariableDescriptorCount && !a->descriptorBindingVariableDescriptorCount)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "descriptorBindingVariableDescriptorCount");
         if (b->runtimeDescriptorArray && !a->runtimeDescriptorArray)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "runtimeDescriptorArray");
         if (b->samplerFilterMinmax && !a->samplerFilterMinmax)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "samplerFilterMinmax");
         if (b->scalarBlockLayout && !a->scalarBlockLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "scalarBlockLayout");
         if (b->imagelessFramebuffer && !a->imagelessFramebuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "imagelessFramebuffer");
         if (b->uniformBufferStandardLayout && !a->uniformBufferStandardLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "uniformBufferStandardLayout");
         if (b->shaderSubgroupExtendedTypes && !a->shaderSubgroupExtendedTypes)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderSubgroupExtendedTypes");
         if (b->separateDepthStencilLayouts && !a->separateDepthStencilLayouts)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "separateDepthStencilLayouts");
         if (b->hostQueryReset && !a->hostQueryReset)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "hostQueryReset");
         if (b->timelineSemaphore && !a->timelineSemaphore)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "timelineSemaphore");
         if (b->bufferDeviceAddress && !a->bufferDeviceAddress)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "bufferDeviceAddress");
         if (b->bufferDeviceAddressCaptureReplay && !a->bufferDeviceAddressCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "bufferDeviceAddressCaptureReplay");
         if (b->bufferDeviceAddressMultiDevice && !a->bufferDeviceAddressMultiDevice)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "bufferDeviceAddressMultiDevice");
         if (b->vulkanMemoryModel && !a->vulkanMemoryModel)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "vulkanMemoryModel");
         if (b->vulkanMemoryModelDeviceScope && !a->vulkanMemoryModelDeviceScope)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "vulkanMemoryModelDeviceScope");
         if (b->vulkanMemoryModelAvailabilityVisibilityChains && !a->vulkanMemoryModelAvailabilityVisibilityChains)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "vulkanMemoryModelAvailabilityVisibilityChains");
         if (b->shaderOutputViewportIndex && !a->shaderOutputViewportIndex)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderOutputViewportIndex");
         if (b->shaderOutputLayer && !a->shaderOutputLayer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "shaderOutputLayer");
         if (b->subgroupBroadcastDynamicId && !a->subgroupBroadcastDynamicId)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan12Features", "subgroupBroadcastDynamicId");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0)))
            break;
         const VkPhysicalDeviceVulkan13Features *a = &supported_VkPhysicalDeviceVulkan13Features;
         const VkPhysicalDeviceVulkan13Features *b = features;
         if (b->robustImageAccess && !a->robustImageAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "robustImageAccess");
         if (b->inlineUniformBlock && !a->inlineUniformBlock)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "inlineUniformBlock");
         if (b->descriptorBindingInlineUniformBlockUpdateAfterBind && !a->descriptorBindingInlineUniformBlockUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "descriptorBindingInlineUniformBlockUpdateAfterBind");
         if (b->pipelineCreationCacheControl && !a->pipelineCreationCacheControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "pipelineCreationCacheControl");
         if (b->privateData && !a->privateData)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "privateData");
         if (b->shaderDemoteToHelperInvocation && !a->shaderDemoteToHelperInvocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "shaderDemoteToHelperInvocation");
         if (b->shaderTerminateInvocation && !a->shaderTerminateInvocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "shaderTerminateInvocation");
         if (b->subgroupSizeControl && !a->subgroupSizeControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "subgroupSizeControl");
         if (b->computeFullSubgroups && !a->computeFullSubgroups)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "computeFullSubgroups");
         if (b->synchronization2 && !a->synchronization2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "synchronization2");
         if (b->textureCompressionASTC_HDR && !a->textureCompressionASTC_HDR)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "textureCompressionASTC_HDR");
         if (b->shaderZeroInitializeWorkgroupMemory && !a->shaderZeroInitializeWorkgroupMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "shaderZeroInitializeWorkgroupMemory");
         if (b->dynamicRendering && !a->dynamicRendering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "dynamicRendering");
         if (b->shaderIntegerDotProduct && !a->shaderIntegerDotProduct)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "shaderIntegerDotProduct");
         if (b->maintenance4 && !a->maintenance4)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan13Features", "maintenance4");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0)))
            break;
         const VkPhysicalDeviceVulkan14Features *a = &supported_VkPhysicalDeviceVulkan14Features;
         const VkPhysicalDeviceVulkan14Features *b = features;
         if (b->globalPriorityQuery && !a->globalPriorityQuery)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "globalPriorityQuery");
         if (b->shaderSubgroupRotate && !a->shaderSubgroupRotate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "shaderSubgroupRotate");
         if (b->shaderSubgroupRotateClustered && !a->shaderSubgroupRotateClustered)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "shaderSubgroupRotateClustered");
         if (b->shaderFloatControls2 && !a->shaderFloatControls2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "shaderFloatControls2");
         if (b->shaderExpectAssume && !a->shaderExpectAssume)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "shaderExpectAssume");
         if (b->rectangularLines && !a->rectangularLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "rectangularLines");
         if (b->bresenhamLines && !a->bresenhamLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "bresenhamLines");
         if (b->smoothLines && !a->smoothLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "smoothLines");
         if (b->stippledRectangularLines && !a->stippledRectangularLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "stippledRectangularLines");
         if (b->stippledBresenhamLines && !a->stippledBresenhamLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "stippledBresenhamLines");
         if (b->stippledSmoothLines && !a->stippledSmoothLines)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "stippledSmoothLines");
         if (b->vertexAttributeInstanceRateDivisor && !a->vertexAttributeInstanceRateDivisor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "vertexAttributeInstanceRateDivisor");
         if (b->vertexAttributeInstanceRateZeroDivisor && !a->vertexAttributeInstanceRateZeroDivisor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "vertexAttributeInstanceRateZeroDivisor");
         if (b->indexTypeUint8 && !a->indexTypeUint8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "indexTypeUint8");
         if (b->dynamicRenderingLocalRead && !a->dynamicRenderingLocalRead)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "dynamicRenderingLocalRead");
         if (b->maintenance5 && !a->maintenance5)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "maintenance5");
         if (b->maintenance6 && !a->maintenance6)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "maintenance6");
         if (b->pipelineProtectedAccess && !a->pipelineProtectedAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "pipelineProtectedAccess");
         if (b->pipelineRobustness && !a->pipelineRobustness)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "pipelineRobustness");
         if (b->hostImageCopy && !a->hostImageCopy)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "hostImageCopy");
         if (b->pushDescriptor && !a->pushDescriptor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVulkan14Features", "pushDescriptor");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
         if (!(physical_device->supported_extensions.AMD_device_coherent_memory))
            break;
         const VkPhysicalDeviceCoherentMemoryFeaturesAMD *a = &supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD;
         const VkPhysicalDeviceCoherentMemoryFeaturesAMD *b = features;
         if (b->deviceCoherentMemory && !a->deviceCoherentMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCoherentMemoryFeaturesAMD", "deviceCoherentMemory");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GPA_FEATURES_AMD: {
         if (!(physical_device->supported_extensions.AMD_gpa_interface))
            break;
         const VkPhysicalDeviceGpaFeaturesAMD *a = &supported_VkPhysicalDeviceGpaFeaturesAMD;
         const VkPhysicalDeviceGpaFeaturesAMD *b = features;
         if (b->perfCounters && !a->perfCounters)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGpaFeaturesAMD", "perfCounters");
         if (b->streamingPerfCounters && !a->streamingPerfCounters)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGpaFeaturesAMD", "streamingPerfCounters");
         if (b->sqThreadTracing && !a->sqThreadTracing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGpaFeaturesAMD", "sqThreadTracing");
         if (b->clockModes && !a->clockModes)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGpaFeaturesAMD", "clockModes");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_custom_border_color))
            break;
         const VkPhysicalDeviceCustomBorderColorFeaturesEXT *a = &supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT;
         const VkPhysicalDeviceCustomBorderColorFeaturesEXT *b = features;
         if (b->customBorderColors && !a->customBorderColors)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCustomBorderColorFeaturesEXT", "customBorderColors");
         if (b->customBorderColorWithoutFormat && !a->customBorderColorWithoutFormat)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCustomBorderColorFeaturesEXT", "customBorderColorWithoutFormat");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_border_color_swizzle))
            break;
         const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *a = &supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;
         const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *b = features;
         if (b->borderColorSwizzle && !a->borderColorSwizzle)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBorderColorSwizzleFeaturesEXT", "borderColorSwizzle");
         if (b->borderColorSwizzleFromImage && !a->borderColorSwizzleFromImage)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBorderColorSwizzleFeaturesEXT", "borderColorSwizzleFromImage");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state))
            break;
         const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *a = &supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;
         const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *b = features;
         if (b->extendedDynamicState && !a->extendedDynamicState)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicStateFeaturesEXT", "extendedDynamicState");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state2))
            break;
         const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *a = &supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;
         const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *b = features;
         if (b->extendedDynamicState2 && !a->extendedDynamicState2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState2FeaturesEXT", "extendedDynamicState2");
         if (b->extendedDynamicState2LogicOp && !a->extendedDynamicState2LogicOp)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState2FeaturesEXT", "extendedDynamicState2LogicOp");
         if (b->extendedDynamicState2PatchControlPoints && !a->extendedDynamicState2PatchControlPoints)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState2FeaturesEXT", "extendedDynamicState2PatchControlPoints");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_extended_dynamic_state3))
            break;
         const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *a = &supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;
         const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *b = features;
         if (b->extendedDynamicState3TessellationDomainOrigin && !a->extendedDynamicState3TessellationDomainOrigin)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3TessellationDomainOrigin");
         if (b->extendedDynamicState3DepthClampEnable && !a->extendedDynamicState3DepthClampEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3DepthClampEnable");
         if (b->extendedDynamicState3PolygonMode && !a->extendedDynamicState3PolygonMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3PolygonMode");
         if (b->extendedDynamicState3RasterizationSamples && !a->extendedDynamicState3RasterizationSamples)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3RasterizationSamples");
         if (b->extendedDynamicState3SampleMask && !a->extendedDynamicState3SampleMask)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3SampleMask");
         if (b->extendedDynamicState3AlphaToCoverageEnable && !a->extendedDynamicState3AlphaToCoverageEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3AlphaToCoverageEnable");
         if (b->extendedDynamicState3AlphaToOneEnable && !a->extendedDynamicState3AlphaToOneEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3AlphaToOneEnable");
         if (b->extendedDynamicState3LogicOpEnable && !a->extendedDynamicState3LogicOpEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3LogicOpEnable");
         if (b->extendedDynamicState3ColorBlendEnable && !a->extendedDynamicState3ColorBlendEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ColorBlendEnable");
         if (b->extendedDynamicState3ColorBlendEquation && !a->extendedDynamicState3ColorBlendEquation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ColorBlendEquation");
         if (b->extendedDynamicState3ColorWriteMask && !a->extendedDynamicState3ColorWriteMask)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ColorWriteMask");
         if (b->extendedDynamicState3RasterizationStream && !a->extendedDynamicState3RasterizationStream)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3RasterizationStream");
         if (b->extendedDynamicState3ConservativeRasterizationMode && !a->extendedDynamicState3ConservativeRasterizationMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ConservativeRasterizationMode");
         if (b->extendedDynamicState3ExtraPrimitiveOverestimationSize && !a->extendedDynamicState3ExtraPrimitiveOverestimationSize)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ExtraPrimitiveOverestimationSize");
         if (b->extendedDynamicState3DepthClipEnable && !a->extendedDynamicState3DepthClipEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3DepthClipEnable");
         if (b->extendedDynamicState3SampleLocationsEnable && !a->extendedDynamicState3SampleLocationsEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3SampleLocationsEnable");
         if (b->extendedDynamicState3ColorBlendAdvanced && !a->extendedDynamicState3ColorBlendAdvanced)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ColorBlendAdvanced");
         if (b->extendedDynamicState3ProvokingVertexMode && !a->extendedDynamicState3ProvokingVertexMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ProvokingVertexMode");
         if (b->extendedDynamicState3LineRasterizationMode && !a->extendedDynamicState3LineRasterizationMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3LineRasterizationMode");
         if (b->extendedDynamicState3LineStippleEnable && !a->extendedDynamicState3LineStippleEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3LineStippleEnable");
         if (b->extendedDynamicState3DepthClipNegativeOneToOne && !a->extendedDynamicState3DepthClipNegativeOneToOne)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3DepthClipNegativeOneToOne");
         if (b->extendedDynamicState3ViewportWScalingEnable && !a->extendedDynamicState3ViewportWScalingEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ViewportWScalingEnable");
         if (b->extendedDynamicState3ViewportSwizzle && !a->extendedDynamicState3ViewportSwizzle)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ViewportSwizzle");
         if (b->extendedDynamicState3CoverageToColorEnable && !a->extendedDynamicState3CoverageToColorEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageToColorEnable");
         if (b->extendedDynamicState3CoverageToColorLocation && !a->extendedDynamicState3CoverageToColorLocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageToColorLocation");
         if (b->extendedDynamicState3CoverageModulationMode && !a->extendedDynamicState3CoverageModulationMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageModulationMode");
         if (b->extendedDynamicState3CoverageModulationTableEnable && !a->extendedDynamicState3CoverageModulationTableEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageModulationTableEnable");
         if (b->extendedDynamicState3CoverageModulationTable && !a->extendedDynamicState3CoverageModulationTable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageModulationTable");
         if (b->extendedDynamicState3CoverageReductionMode && !a->extendedDynamicState3CoverageReductionMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3CoverageReductionMode");
         if (b->extendedDynamicState3RepresentativeFragmentTestEnable && !a->extendedDynamicState3RepresentativeFragmentTestEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3RepresentativeFragmentTestEnable");
         if (b->extendedDynamicState3ShadingRateImageEnable && !a->extendedDynamicState3ShadingRateImageEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "extendedDynamicState3ShadingRateImageEnable");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_FLAGS_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_extended_flags))
            break;
         const VkPhysicalDeviceExtendedFlagsFeaturesKHR *a = &supported_VkPhysicalDeviceExtendedFlagsFeaturesKHR;
         const VkPhysicalDeviceExtendedFlagsFeaturesKHR *b = features;
         if (b->extendedFlags && !a->extendedFlags)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedFlagsFeaturesKHR", "extendedFlags");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_partitioned_acceleration_structure))
            break;
         const VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV *a = &supported_VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV;
         const VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV *b = features;
         if (b->partitionedAccelerationStructure && !a->partitionedAccelerationStructure)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV", "partitionedAccelerationStructure");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_device_diagnostics_config))
            break;
         const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *a = &supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV;
         const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *b = features;
         if (b->diagnosticsConfig && !a->diagnosticsConfig)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDiagnosticsConfigFeaturesNV", "diagnosticsConfig");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_zero_initialize_workgroup_memory))
            break;
         const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *a = &supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
         const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *b = features;
         if (b->shaderZeroInitializeWorkgroupMemory && !a->shaderZeroInitializeWorkgroupMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures", "shaderZeroInitializeWorkgroupMemory");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_subgroup_uniform_control_flow))
            break;
         const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *a = &supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;
         const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *b = features;
         if (b->shaderSubgroupUniformControlFlow && !a->shaderSubgroupUniformControlFlow)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR", "shaderSubgroupUniformControlFlow");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.EXT_robustness2 || physical_device->supported_extensions.KHR_robustness2))
            break;
         const VkPhysicalDeviceRobustness2FeaturesKHR *a = &supported_VkPhysicalDeviceRobustness2FeaturesKHR;
         const VkPhysicalDeviceRobustness2FeaturesKHR *b = features;
         if (b->robustBufferAccess2 && !a->robustBufferAccess2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRobustness2FeaturesKHR", "robustBufferAccess2");
         if (b->robustImageAccess2 && !a->robustImageAccess2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRobustness2FeaturesKHR", "robustImageAccess2");
         if (b->nullDescriptor && !a->nullDescriptor)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRobustness2FeaturesKHR", "nullDescriptor");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.EXT_image_robustness))
            break;
         const VkPhysicalDeviceImageRobustnessFeatures *a = &supported_VkPhysicalDeviceImageRobustnessFeatures;
         const VkPhysicalDeviceImageRobustnessFeatures *b = features;
         if (b->robustImageAccess && !a->robustImageAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageRobustnessFeatures", "robustImageAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_workgroup_memory_explicit_layout))
            break;
         const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *a = &supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;
         const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *b = features;
         if (b->workgroupMemoryExplicitLayout && !a->workgroupMemoryExplicitLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", "workgroupMemoryExplicitLayout");
         if (b->workgroupMemoryExplicitLayoutScalarBlockLayout && !a->workgroupMemoryExplicitLayoutScalarBlockLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", "workgroupMemoryExplicitLayoutScalarBlockLayout");
         if (b->workgroupMemoryExplicitLayout8BitAccess && !a->workgroupMemoryExplicitLayout8BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", "workgroupMemoryExplicitLayout8BitAccess");
         if (b->workgroupMemoryExplicitLayout16BitAccess && !a->workgroupMemoryExplicitLayout16BitAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", "workgroupMemoryExplicitLayout16BitAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_4444_formats))
            break;
         const VkPhysicalDevice4444FormatsFeaturesEXT *a = &supported_VkPhysicalDevice4444FormatsFeaturesEXT;
         const VkPhysicalDevice4444FormatsFeaturesEXT *b = features;
         if (b->formatA4R4G4B4 && !a->formatA4R4G4B4)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice4444FormatsFeaturesEXT", "formatA4R4G4B4");
         if (b->formatA4B4G4R4 && !a->formatA4B4G4R4)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevice4444FormatsFeaturesEXT", "formatA4B4G4R4");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: {
         if (!(physical_device->supported_extensions.HUAWEI_subpass_shading))
            break;
         const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *a = &supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;
         const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *b = features;
         if (b->subpassShading && !a->subpassShading)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSubpassShadingFeaturesHUAWEI", "subpassShading");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: {
         if (!(physical_device->supported_extensions.HUAWEI_cluster_culling_shader))
            break;
         const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *a = &supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;
         const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *b = features;
         if (b->clustercullingShader && !a->clustercullingShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI", "clustercullingShader");
         if (b->multiviewClusterCullingShader && !a->multiviewClusterCullingShader)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI", "multiviewClusterCullingShader");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_image_atomic_int64))
            break;
         const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *a = &supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;
         const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *b = features;
         if (b->shaderImageInt64Atomics && !a->shaderImageInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT", "shaderImageInt64Atomics");
         if (b->sparseImageInt64Atomics && !a->sparseImageInt64Atomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT", "sparseImageInt64Atomics");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_fragment_shading_rate))
            break;
         const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *a = &supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR;
         const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *b = features;
         if (b->pipelineFragmentShadingRate && !a->pipelineFragmentShadingRate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateFeaturesKHR", "pipelineFragmentShadingRate");
         if (b->primitiveFragmentShadingRate && !a->primitiveFragmentShadingRate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateFeaturesKHR", "primitiveFragmentShadingRate");
         if (b->attachmentFragmentShadingRate && !a->attachmentFragmentShadingRate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateFeaturesKHR", "attachmentFragmentShadingRate");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_shader_terminate_invocation))
            break;
         const VkPhysicalDeviceShaderTerminateInvocationFeatures *a = &supported_VkPhysicalDeviceShaderTerminateInvocationFeatures;
         const VkPhysicalDeviceShaderTerminateInvocationFeatures *b = features;
         if (b->shaderTerminateInvocation && !a->shaderTerminateInvocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderTerminateInvocationFeatures", "shaderTerminateInvocation");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_fragment_shading_rate_enums))
            break;
         const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *a = &supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
         const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *b = features;
         if (b->fragmentShadingRateEnums && !a->fragmentShadingRateEnums)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV", "fragmentShadingRateEnums");
         if (b->supersampleFragmentShadingRates && !a->supersampleFragmentShadingRates)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV", "supersampleFragmentShadingRates");
         if (b->noInvocationFragmentShadingRates && !a->noInvocationFragmentShadingRates)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV", "noInvocationFragmentShadingRates");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_2d_view_of_3d))
            break;
         const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *a = &supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;
         const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *b = features;
         if (b->image2DViewOf3D && !a->image2DViewOf3D)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImage2DViewOf3DFeaturesEXT", "image2DViewOf3D");
         if (b->sampler2DViewOf3D && !a->sampler2DViewOf3D)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImage2DViewOf3DFeaturesEXT", "sampler2DViewOf3D");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_sliced_view_of_3d))
            break;
         const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *a = &supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;
         const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *b = features;
         if (b->imageSlicedViewOf3D && !a->imageSlicedViewOf3D)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT", "imageSlicedViewOf3D");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_attachment_feedback_loop_dynamic_state))
            break;
         const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *a = &supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;
         const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *b = features;
         if (b->attachmentFeedbackLoopDynamicState && !a->attachmentFeedbackLoopDynamicState)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT", "attachmentFeedbackLoopDynamicState");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_legacy_vertex_attributes))
            break;
         const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *a = &supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;
         const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *b = features;
         if (b->legacyVertexAttributes && !a->legacyVertexAttributes)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT", "legacyVertexAttributes");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.VALVE_mutable_descriptor_type || physical_device->supported_extensions.EXT_mutable_descriptor_type))
            break;
         const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *a = &supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;
         const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *b = features;
         if (b->mutableDescriptorType && !a->mutableDescriptorType)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT", "mutableDescriptorType");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_depth_clip_control))
            break;
         const VkPhysicalDeviceDepthClipControlFeaturesEXT *a = &supported_VkPhysicalDeviceDepthClipControlFeaturesEXT;
         const VkPhysicalDeviceDepthClipControlFeaturesEXT *b = features;
         if (b->depthClipControl && !a->depthClipControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthClipControlFeaturesEXT", "depthClipControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_zero_initialize_device_memory))
            break;
         const VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT *a = &supported_VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT;
         const VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT *b = features;
         if (b->zeroInitializeDeviceMemory && !a->zeroInitializeDeviceMemory)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT", "zeroInitializeDeviceMemory");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_RESOLVE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_custom_resolve))
            break;
         const VkPhysicalDeviceCustomResolveFeaturesEXT *a = &supported_VkPhysicalDeviceCustomResolveFeaturesEXT;
         const VkPhysicalDeviceCustomResolveFeaturesEXT *b = features;
         if (b->customResolve && !a->customResolve)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCustomResolveFeaturesEXT", "customResolve");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_device_generated_commands))
            break;
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT *a = &supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT;
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT *b = features;
         if (b->deviceGeneratedCommands && !a->deviceGeneratedCommands)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT", "deviceGeneratedCommands");
         if (b->dynamicGeneratedPipelineLayout && !a->dynamicGeneratedPipelineLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT", "dynamicGeneratedPipelineLayout");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_depth_clamp_control))
            break;
         const VkPhysicalDeviceDepthClampControlFeaturesEXT *a = &supported_VkPhysicalDeviceDepthClampControlFeaturesEXT;
         const VkPhysicalDeviceDepthClampControlFeaturesEXT *b = features;
         if (b->depthClampControl && !a->depthClampControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthClampControlFeaturesEXT", "depthClampControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_vertex_input_dynamic_state))
            break;
         const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *a = &supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;
         const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *b = features;
         if (b->vertexInputDynamicState && !a->vertexInputDynamicState)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT", "vertexInputDynamicState");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_external_memory_rdma))
            break;
         const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *a = &supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;
         const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *b = features;
         if (b->externalMemoryRDMA && !a->externalMemoryRDMA)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExternalMemoryRDMAFeaturesNV", "externalMemoryRDMA");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_relaxed_extended_instruction))
            break;
         const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *a = &supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;
         const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *b = features;
         if (b->shaderRelaxedExtendedInstruction && !a->shaderRelaxedExtendedInstruction)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR", "shaderRelaxedExtendedInstruction");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_color_write_enable))
            break;
         const VkPhysicalDeviceColorWriteEnableFeaturesEXT *a = &supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT;
         const VkPhysicalDeviceColorWriteEnableFeaturesEXT *b = features;
         if (b->colorWriteEnable && !a->colorWriteEnable)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceColorWriteEnableFeaturesEXT", "colorWriteEnable");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_synchronization2))
            break;
         const VkPhysicalDeviceSynchronization2Features *a = &supported_VkPhysicalDeviceSynchronization2Features;
         const VkPhysicalDeviceSynchronization2Features *b = features;
         if (b->synchronization2 && !a->synchronization2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSynchronization2Features", "synchronization2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_unified_image_layouts))
            break;
         const VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR *a = &supported_VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR;
         const VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR *b = features;
         if (b->unifiedImageLayouts && !a->unifiedImageLayouts)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR", "unifiedImageLayouts");
         if (b->unifiedImageLayoutsVideo && !a->unifiedImageLayoutsVideo)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR", "unifiedImageLayoutsVideo");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_host_image_copy))
            break;
         const VkPhysicalDeviceHostImageCopyFeatures *a = &supported_VkPhysicalDeviceHostImageCopyFeatures;
         const VkPhysicalDeviceHostImageCopyFeatures *b = features;
         if (b->hostImageCopy && !a->hostImageCopy)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceHostImageCopyFeatures", "hostImageCopy");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_primitives_generated_query))
            break;
         const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *a = &supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;
         const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *b = features;
         if (b->primitivesGeneratedQuery && !a->primitivesGeneratedQuery)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT", "primitivesGeneratedQuery");
         if (b->primitivesGeneratedQueryWithRasterizerDiscard && !a->primitivesGeneratedQueryWithRasterizerDiscard)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT", "primitivesGeneratedQueryWithRasterizerDiscard");
         if (b->primitivesGeneratedQueryWithNonZeroStreams && !a->primitivesGeneratedQueryWithNonZeroStreams)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT", "primitivesGeneratedQueryWithNonZeroStreams");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_legacy_dithering))
            break;
         const VkPhysicalDeviceLegacyDitheringFeaturesEXT *a = &supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT;
         const VkPhysicalDeviceLegacyDitheringFeaturesEXT *b = features;
         if (b->legacyDithering && !a->legacyDithering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLegacyDitheringFeaturesEXT", "legacyDithering");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_multisampled_render_to_single_sampled))
            break;
         const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *a = &supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;
         const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *b = features;
         if (b->multisampledRenderToSingleSampled && !a->multisampledRenderToSingleSampled)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT", "multisampledRenderToSingleSampled");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SWAPCHAIN_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_multisampled_render_to_swapchain))
            break;
         const VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT *a = &supported_VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT;
         const VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT *b = features;
         if (b->multisampledRenderToSwapchain && !a->multisampledRenderToSwapchain)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT", "multisampledRenderToSwapchain");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_pipeline_protected_access))
            break;
         const VkPhysicalDevicePipelineProtectedAccessFeatures *a = &supported_VkPhysicalDevicePipelineProtectedAccessFeatures;
         const VkPhysicalDevicePipelineProtectedAccessFeatures *b = features;
         if (b->pipelineProtectedAccess && !a->pipelineProtectedAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineProtectedAccessFeatures", "pipelineProtectedAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_maintenance1))
            break;
         const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *a = &supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR;
         const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *b = features;
         if (b->videoMaintenance1 && !a->videoMaintenance1)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoMaintenance1FeaturesKHR", "videoMaintenance1");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_maintenance2))
            break;
         const VkPhysicalDeviceVideoMaintenance2FeaturesKHR *a = &supported_VkPhysicalDeviceVideoMaintenance2FeaturesKHR;
         const VkPhysicalDeviceVideoMaintenance2FeaturesKHR *b = features;
         if (b->videoMaintenance2 && !a->videoMaintenance2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoMaintenance2FeaturesKHR", "videoMaintenance2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_decode_vp9))
            break;
         const VkPhysicalDeviceVideoDecodeVP9FeaturesKHR *a = &supported_VkPhysicalDeviceVideoDecodeVP9FeaturesKHR;
         const VkPhysicalDeviceVideoDecodeVP9FeaturesKHR *b = features;
         if (b->videoDecodeVP9 && !a->videoDecodeVP9)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoDecodeVP9FeaturesKHR", "videoDecodeVP9");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_encode_quantization_map))
            break;
         const VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR *a = &supported_VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR;
         const VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR *b = features;
         if (b->videoEncodeQuantizationMap && !a->videoEncodeQuantizationMap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR", "videoEncodeQuantizationMap");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_FEEDBACK_2_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_encode_feedback2))
            break;
         const VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR *a = &supported_VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR;
         const VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR *b = features;
         if (b->videoEncodeFeedback2 && !a->videoEncodeFeedback2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR", "videoEncodeFeedback2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_encode_av1))
            break;
         const VkPhysicalDeviceVideoEncodeAV1FeaturesKHR *a = &supported_VkPhysicalDeviceVideoEncodeAV1FeaturesKHR;
         const VkPhysicalDeviceVideoEncodeAV1FeaturesKHR *b = features;
         if (b->videoEncodeAV1 && !a->videoEncodeAV1)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoEncodeAV1FeaturesKHR", "videoEncodeAV1");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_inherited_viewport_scissor))
            break;
         const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *a = &supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV;
         const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *b = features;
         if (b->inheritedViewportScissor2D && !a->inheritedViewportScissor2D)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceInheritedViewportScissorFeaturesNV", "inheritedViewportScissor2D");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_ycbcr_2plane_444_formats))
            break;
         const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *a = &supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;
         const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *b = features;
         if (b->ycbcr2plane444Formats && !a->ycbcr2plane444Formats)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT", "ycbcr2plane444Formats");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_provoking_vertex))
            break;
         const VkPhysicalDeviceProvokingVertexFeaturesEXT *a = &supported_VkPhysicalDeviceProvokingVertexFeaturesEXT;
         const VkPhysicalDeviceProvokingVertexFeaturesEXT *b = features;
         if (b->provokingVertexLast && !a->provokingVertexLast)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceProvokingVertexFeaturesEXT", "provokingVertexLast");
         if (b->transformFeedbackPreservesProvokingVertex && !a->transformFeedbackPreservesProvokingVertex)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceProvokingVertexFeaturesEXT", "transformFeedbackPreservesProvokingVertex");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_video_encode_intra_refresh))
            break;
         const VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR *a = &supported_VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR;
         const VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR *b = features;
         if (b->videoEncodeIntraRefresh && !a->videoEncodeIntraRefresh)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR", "videoEncodeIntraRefresh");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_descriptor_buffer))
            break;
         const VkPhysicalDeviceDescriptorBufferFeaturesEXT *a = &supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT;
         const VkPhysicalDeviceDescriptorBufferFeaturesEXT *b = features;
         if (b->descriptorBuffer && !a->descriptorBuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorBufferFeaturesEXT", "descriptorBuffer");
         if (b->descriptorBufferCaptureReplay && !a->descriptorBufferCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorBufferFeaturesEXT", "descriptorBufferCaptureReplay");
         if (b->descriptorBufferImageLayoutIgnored && !a->descriptorBufferImageLayoutIgnored)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorBufferFeaturesEXT", "descriptorBufferImageLayoutIgnored");
         if (b->descriptorBufferPushDescriptors && !a->descriptorBufferPushDescriptors)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorBufferFeaturesEXT", "descriptorBufferPushDescriptors");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_shader_integer_dot_product))
            break;
         const VkPhysicalDeviceShaderIntegerDotProductFeatures *a = &supported_VkPhysicalDeviceShaderIntegerDotProductFeatures;
         const VkPhysicalDeviceShaderIntegerDotProductFeatures *b = features;
         if (b->shaderIntegerDotProduct && !a->shaderIntegerDotProduct)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderIntegerDotProductFeatures", "shaderIntegerDotProduct");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.NV_fragment_shader_barycentric || physical_device->supported_extensions.KHR_fragment_shader_barycentric))
            break;
         const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *a = &supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
         const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *b = features;
         if (b->fragmentShaderBarycentric && !a->fragmentShaderBarycentric)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR", "fragmentShaderBarycentric");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_fma))
            break;
         const VkPhysicalDeviceShaderFmaFeaturesKHR *a = &supported_VkPhysicalDeviceShaderFmaFeaturesKHR;
         const VkPhysicalDeviceShaderFmaFeaturesKHR *b = features;
         if (b->shaderFmaFloat16 && !a->shaderFmaFloat16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFmaFeaturesKHR", "shaderFmaFloat16");
         if (b->shaderFmaFloat32 && !a->shaderFmaFloat32)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFmaFeaturesKHR", "shaderFmaFloat32");
         if (b->shaderFmaFloat64 && !a->shaderFmaFloat64)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFmaFeaturesKHR", "shaderFmaFloat64");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_ray_tracing_motion_blur))
            break;
         const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *a = &supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;
         const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *b = features;
         if (b->rayTracingMotionBlur && !a->rayTracingMotionBlur)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingMotionBlurFeaturesNV", "rayTracingMotionBlur");
         if (b->rayTracingMotionBlurPipelineTraceRaysIndirect && !a->rayTracingMotionBlurPipelineTraceRaysIndirect)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingMotionBlurFeaturesNV", "rayTracingMotionBlurPipelineTraceRaysIndirect");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_ray_tracing_validation))
            break;
         const VkPhysicalDeviceRayTracingValidationFeaturesNV *a = &supported_VkPhysicalDeviceRayTracingValidationFeaturesNV;
         const VkPhysicalDeviceRayTracingValidationFeaturesNV *b = features;
         if (b->rayTracingValidation && !a->rayTracingValidation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingValidationFeaturesNV", "rayTracingValidation");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_ray_tracing_linear_swept_spheres))
            break;
         const VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV *a = &supported_VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV;
         const VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV *b = features;
         if (b->spheres && !a->spheres)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV", "spheres");
         if (b->linearSweptSpheres && !a->linearSweptSpheres)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV", "linearSweptSpheres");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_rgba10x6_formats))
            break;
         const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *a = &supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;
         const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *b = features;
         if (b->formatRgba10x6WithoutYCbCrSampler && !a->formatRgba10x6WithoutYCbCrSampler)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT", "formatRgba10x6WithoutYCbCrSampler");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 3, 0) || physical_device->supported_extensions.KHR_dynamic_rendering))
            break;
         const VkPhysicalDeviceDynamicRenderingFeatures *a = &supported_VkPhysicalDeviceDynamicRenderingFeatures;
         const VkPhysicalDeviceDynamicRenderingFeatures *b = features;
         if (b->dynamicRendering && !a->dynamicRendering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDynamicRenderingFeatures", "dynamicRendering");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_view_min_lod))
            break;
         const VkPhysicalDeviceImageViewMinLodFeaturesEXT *a = &supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT;
         const VkPhysicalDeviceImageViewMinLodFeaturesEXT *b = features;
         if (b->minLod && !a->minLod)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageViewMinLodFeaturesEXT", "minLod");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.ARM_rasterization_order_attachment_access || physical_device->supported_extensions.EXT_rasterization_order_attachment_access))
            break;
         const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *a = &supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;
         const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *b = features;
         if (b->rasterizationOrderColorAttachmentAccess && !a->rasterizationOrderColorAttachmentAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT", "rasterizationOrderColorAttachmentAccess");
         if (b->rasterizationOrderDepthAttachmentAccess && !a->rasterizationOrderDepthAttachmentAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT", "rasterizationOrderDepthAttachmentAccess");
         if (b->rasterizationOrderStencilAttachmentAccess && !a->rasterizationOrderStencilAttachmentAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT", "rasterizationOrderStencilAttachmentAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_linear_color_attachment))
            break;
         const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *a = &supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV;
         const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *b = features;
         if (b->linearColorAttachment && !a->linearColorAttachment)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceLinearColorAttachmentFeaturesNV", "linearColorAttachment");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_graphics_pipeline_library))
            break;
         const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *a = &supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;
         const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *b = features;
         if (b->graphicsPipelineLibrary && !a->graphicsPipelineLibrary)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT", "graphicsPipelineLibrary");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_pipeline_binary))
            break;
         const VkPhysicalDevicePipelineBinaryFeaturesKHR *a = &supported_VkPhysicalDevicePipelineBinaryFeaturesKHR;
         const VkPhysicalDevicePipelineBinaryFeaturesKHR *b = features;
         if (b->pipelineBinaries && !a->pipelineBinaries)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineBinaryFeaturesKHR", "pipelineBinaries");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_NEURAL_ACCELERATOR_STATISTICS_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_data_graph_neural_accelerator_statistics))
            break;
         const VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM *a = &supported_VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM;
         const VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM *b = features;
         if (b->dataGraphNeuralAcceleratorStatistics && !a->dataGraphNeuralAcceleratorStatistics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM", "dataGraphNeuralAcceleratorStatistics");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: {
         if (!(physical_device->supported_extensions.VALVE_descriptor_set_host_mapping))
            break;
         const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *a = &supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;
         const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *b = features;
         if (b->descriptorSetHostMapping && !a->descriptorSetHostMapping)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE", "descriptorSetHostMapping");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_nested_command_buffer))
            break;
         const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *a = &supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT;
         const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *b = features;
         if (b->nestedCommandBuffer && !a->nestedCommandBuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceNestedCommandBufferFeaturesEXT", "nestedCommandBuffer");
         if (b->nestedCommandBufferRendering && !a->nestedCommandBufferRendering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceNestedCommandBufferFeaturesEXT", "nestedCommandBufferRendering");
         if (b->nestedCommandBufferSimultaneousUse && !a->nestedCommandBufferSimultaneousUse)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceNestedCommandBufferFeaturesEXT", "nestedCommandBufferSimultaneousUse");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_module_identifier))
            break;
         const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *a = &supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;
         const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *b = features;
         if (b->shaderModuleIdentifier && !a->shaderModuleIdentifier)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT", "shaderModuleIdentifier");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_compression_control))
            break;
         const VkPhysicalDeviceImageCompressionControlFeaturesEXT *a = &supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT;
         const VkPhysicalDeviceImageCompressionControlFeaturesEXT *b = features;
         if (b->imageCompressionControl && !a->imageCompressionControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageCompressionControlFeaturesEXT", "imageCompressionControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_compression_control_swapchain))
            break;
         const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *a = &supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;
         const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *b = features;
         if (b->imageCompressionControlSwapchain && !a->imageCompressionControlSwapchain)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT", "imageCompressionControlSwapchain");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_subpass_merge_feedback))
            break;
         const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *a = &supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;
         const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *b = features;
         if (b->subpassMergeFeedback && !a->subpassMergeFeedback)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT", "subpassMergeFeedback");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_opacity_micromap))
            break;
         const VkPhysicalDeviceOpacityMicromapFeaturesKHR *a = &supported_VkPhysicalDeviceOpacityMicromapFeaturesKHR;
         const VkPhysicalDeviceOpacityMicromapFeaturesKHR *b = features;
         if (b->micromap && !a->micromap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceOpacityMicromapFeaturesKHR", "micromap");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_opacity_micromap))
            break;
         const VkPhysicalDeviceOpacityMicromapFeaturesEXT *a = &supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT;
         const VkPhysicalDeviceOpacityMicromapFeaturesEXT *b = features;
         if (b->micromap && !a->micromap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceOpacityMicromapFeaturesEXT", "micromap");
         if (b->micromapCaptureReplay && !a->micromapCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceOpacityMicromapFeaturesEXT", "micromapCaptureReplay");
         if (b->micromapHostCommands && !a->micromapHostCommands)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceOpacityMicromapFeaturesEXT", "micromapHostCommands");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_pipeline_properties))
            break;
         const VkPhysicalDevicePipelinePropertiesFeaturesEXT *a = &supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT;
         const VkPhysicalDevicePipelinePropertiesFeaturesEXT *b = features;
         if (b->pipelinePropertiesIdentifier && !a->pipelinePropertiesIdentifier)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelinePropertiesFeaturesEXT", "pipelinePropertiesIdentifier");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: {
         if (!(physical_device->supported_extensions.AMD_shader_early_and_late_fragment_tests))
            break;
         const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *a = &supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;
         const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *b = features;
         if (b->shaderEarlyAndLateFragmentTests && !a->shaderEarlyAndLateFragmentTests)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD", "shaderEarlyAndLateFragmentTests");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_non_seamless_cube_map))
            break;
         const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *a = &supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;
         const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *b = features;
         if (b->nonSeamlessCubeMap && !a->nonSeamlessCubeMap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT", "nonSeamlessCubeMap");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.EXT_pipeline_robustness))
            break;
         const VkPhysicalDevicePipelineRobustnessFeatures *a = &supported_VkPhysicalDevicePipelineRobustnessFeatures;
         const VkPhysicalDevicePipelineRobustnessFeatures *b = features;
         if (b->pipelineRobustness && !a->pipelineRobustness)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineRobustnessFeatures", "pipelineRobustness");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MULTIPLE_WAIT_QUEUES_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_shader_multiple_wait_queues))
            break;
         const VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM *a = &supported_VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM;
         const VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM *b = features;
         if (b->shaderMultipleWaitQueues && !a->shaderMultipleWaitQueues)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM", "shaderMultipleWaitQueues");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_image_processing))
            break;
         const VkPhysicalDeviceImageProcessingFeaturesQCOM *a = &supported_VkPhysicalDeviceImageProcessingFeaturesQCOM;
         const VkPhysicalDeviceImageProcessingFeaturesQCOM *b = features;
         if (b->textureSampleWeighted && !a->textureSampleWeighted)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessingFeaturesQCOM", "textureSampleWeighted");
         if (b->textureBoxFilter && !a->textureBoxFilter)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessingFeaturesQCOM", "textureBoxFilter");
         if (b->textureBlockMatch && !a->textureBlockMatch)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessingFeaturesQCOM", "textureBlockMatch");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_tile_properties))
            break;
         const VkPhysicalDeviceTilePropertiesFeaturesQCOM *a = &supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM;
         const VkPhysicalDeviceTilePropertiesFeaturesQCOM *b = features;
         if (b->tileProperties && !a->tileProperties)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTilePropertiesFeaturesQCOM", "tileProperties");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: {
         if (!(physical_device->supported_extensions.SEC_amigo_profiling))
            break;
         const VkPhysicalDeviceAmigoProfilingFeaturesSEC *a = &supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC;
         const VkPhysicalDeviceAmigoProfilingFeaturesSEC *b = features;
         if (b->amigoProfiling && !a->amigoProfiling)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAmigoProfilingFeaturesSEC", "amigoProfiling");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_attachment_feedback_loop_layout))
            break;
         const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *a = &supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;
         const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *b = features;
         if (b->attachmentFeedbackLoopLayout && !a->attachmentFeedbackLoopLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT", "attachmentFeedbackLoopLayout");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_device_address_binding_report))
            break;
         const VkPhysicalDeviceAddressBindingReportFeaturesEXT *a = &supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT;
         const VkPhysicalDeviceAddressBindingReportFeaturesEXT *b = features;
         if (b->reportAddressBinding && !a->reportAddressBinding)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAddressBindingReportFeaturesEXT", "reportAddressBinding");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_optical_flow))
            break;
         const VkPhysicalDeviceOpticalFlowFeaturesNV *a = &supported_VkPhysicalDeviceOpticalFlowFeaturesNV;
         const VkPhysicalDeviceOpticalFlowFeaturesNV *b = features;
         if (b->opticalFlow && !a->opticalFlow)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceOpticalFlowFeaturesNV", "opticalFlow");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_device_fault))
            break;
         const VkPhysicalDeviceFaultFeaturesEXT *a = &supported_VkPhysicalDeviceFaultFeaturesEXT;
         const VkPhysicalDeviceFaultFeaturesEXT *b = features;
         if (b->deviceFault && !a->deviceFault)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesEXT", "deviceFault");
         if (b->deviceFaultVendorBinary && !a->deviceFaultVendorBinary)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesEXT", "deviceFaultVendorBinary");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_device_fault))
            break;
         const VkPhysicalDeviceFaultFeaturesKHR *a = &supported_VkPhysicalDeviceFaultFeaturesKHR;
         const VkPhysicalDeviceFaultFeaturesKHR *b = features;
         if (b->deviceFault && !a->deviceFault)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesKHR", "deviceFault");
         if (b->deviceFaultVendorBinary && !a->deviceFaultVendorBinary)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesKHR", "deviceFaultVendorBinary");
         if (b->deviceFaultReportMasked && !a->deviceFaultReportMasked)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesKHR", "deviceFaultReportMasked");
         if (b->deviceFaultDeviceLostOnMasked && !a->deviceFaultDeviceLostOnMasked)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFaultFeaturesKHR", "deviceFaultDeviceLostOnMasked");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.EXT_pipeline_library_group_handles || physical_device->supported_extensions.KHR_pipeline_library_group_handles))
            break;
         const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR *a = &supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR;
         const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR *b = features;
         if (b->pipelineLibraryGroupHandles && !a->pipelineLibraryGroupHandles)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR", "pipelineLibraryGroupHandles");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_shader_core_builtins))
            break;
         const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *a = &supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;
         const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *b = features;
         if (b->shaderCoreBuiltins && !a->shaderCoreBuiltins)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM", "shaderCoreBuiltins");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_frame_boundary))
            break;
         const VkPhysicalDeviceFrameBoundaryFeaturesEXT *a = &supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT;
         const VkPhysicalDeviceFrameBoundaryFeaturesEXT *b = features;
         if (b->frameBoundary && !a->frameBoundary)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFrameBoundaryFeaturesEXT", "frameBoundary");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_dynamic_rendering_unused_attachments))
            break;
         const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *a = &supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;
         const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *b = features;
         if (b->dynamicRenderingUnusedAttachments && !a->dynamicRenderingUnusedAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT", "dynamicRenderingUnusedAttachments");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INTERNALLY_SYNCHRONIZED_QUEUES_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_internally_synchronized_queues))
            break;
         const VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR *a = &supported_VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR;
         const VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR *b = features;
         if (b->internallySynchronizedQueues && !a->internallySynchronizedQueues)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR", "internallySynchronizedQueues");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.EXT_swapchain_maintenance1 || physical_device->supported_extensions.KHR_swapchain_maintenance1))
            break;
         const VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR *a = &supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR;
         const VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR *b = features;
         if (b->swapchainMaintenance1 && !a->swapchainMaintenance1)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR", "swapchainMaintenance1");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_depth_bias_control))
            break;
         const VkPhysicalDeviceDepthBiasControlFeaturesEXT *a = &supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT;
         const VkPhysicalDeviceDepthBiasControlFeaturesEXT *b = features;
         if (b->depthBiasControl && !a->depthBiasControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthBiasControlFeaturesEXT", "depthBiasControl");
         if (b->leastRepresentableValueForceUnormRepresentation && !a->leastRepresentableValueForceUnormRepresentation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthBiasControlFeaturesEXT", "leastRepresentableValueForceUnormRepresentation");
         if (b->floatRepresentation && !a->floatRepresentation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthBiasControlFeaturesEXT", "floatRepresentation");
         if (b->depthBiasExact && !a->depthBiasExact)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthBiasControlFeaturesEXT", "depthBiasExact");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_ray_tracing_invocation_reorder))
            break;
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT *a = &supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT;
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT *b = features;
         if (b->rayTracingInvocationReorder && !a->rayTracingInvocationReorder)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT", "rayTracingInvocationReorder");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_ray_tracing_invocation_reorder))
            break;
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *a = &supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *b = features;
         if (b->rayTracingInvocationReorder && !a->rayTracingInvocationReorder)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV", "rayTracingInvocationReorder");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_extended_sparse_address_space))
            break;
         const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *a = &supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;
         const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *b = features;
         if (b->extendedSparseAddressSpace && !a->extendedSparseAddressSpace)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV", "extendedSparseAddressSpace");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_multiview_per_view_viewports))
            break;
         const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *a = &supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;
         const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *b = features;
         if (b->multiviewPerViewViewports && !a->multiviewPerViewViewports)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM", "multiviewPerViewViewports");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_ray_tracing_position_fetch))
            break;
         const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *a = &supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;
         const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *b = features;
         if (b->rayTracingPositionFetch && !a->rayTracingPositionFetch)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR", "rayTracingPositionFetch");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_multiview_per_view_render_areas))
            break;
         const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *a = &supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;
         const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *b = features;
         if (b->multiviewPerViewRenderAreas && !a->multiviewPerViewRenderAreas)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM", "multiviewPerViewRenderAreas");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_object))
            break;
         const VkPhysicalDeviceShaderObjectFeaturesEXT *a = &supported_VkPhysicalDeviceShaderObjectFeaturesEXT;
         const VkPhysicalDeviceShaderObjectFeaturesEXT *b = features;
         if (b->shaderObject && !a->shaderObject)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderObjectFeaturesEXT", "shaderObject");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_tile_image))
            break;
         const VkPhysicalDeviceShaderTileImageFeaturesEXT *a = &supported_VkPhysicalDeviceShaderTileImageFeaturesEXT;
         const VkPhysicalDeviceShaderTileImageFeaturesEXT *b = features;
         if (b->shaderTileImageColorReadAccess && !a->shaderTileImageColorReadAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderTileImageFeaturesEXT", "shaderTileImageColorReadAccess");
         if (b->shaderTileImageDepthReadAccess && !a->shaderTileImageDepthReadAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderTileImageFeaturesEXT", "shaderTileImageDepthReadAccess");
         if (b->shaderTileImageStencilReadAccess && !a->shaderTileImageStencilReadAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderTileImageFeaturesEXT", "shaderTileImageStencilReadAccess");
         break;
      }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: {
         if (!(physical_device->supported_extensions.QNX_external_memory_screen_buffer))
            break;
         const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *a = &supported_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;
         const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *b = features;
         if (b->screenBufferImport && !a->screenBufferImport)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX", "screenBufferImport");
         break;
      }
#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_cooperative_matrix))
            break;
         const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *a = &supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR;
         const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *b = features;
         if (b->cooperativeMatrix && !a->cooperativeMatrix)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixFeaturesKHR", "cooperativeMatrix");
         if (b->cooperativeMatrixRobustBufferAccess && !a->cooperativeMatrixRobustBufferAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixFeaturesKHR", "cooperativeMatrixRobustBufferAccess");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_CONVERSION_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_cooperative_matrix_conversion))
            break;
         const VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM *a = &supported_VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM;
         const VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM *b = features;
         if (b->cooperativeMatrixConversion && !a->cooperativeMatrixConversion)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM", "cooperativeMatrixConversion");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD: {
         if (!(physical_device->supported_extensions.AMD_anti_lag))
            break;
         const VkPhysicalDeviceAntiLagFeaturesAMD *a = &supported_VkPhysicalDeviceAntiLagFeaturesAMD;
         const VkPhysicalDeviceAntiLagFeaturesAMD *b = features;
         if (b->antiLag && !a->antiLag)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceAntiLagFeaturesAMD", "antiLag");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_tile_memory_heap))
            break;
         const VkPhysicalDeviceTileMemoryHeapFeaturesQCOM *a = &supported_VkPhysicalDeviceTileMemoryHeapFeaturesQCOM;
         const VkPhysicalDeviceTileMemoryHeapFeaturesQCOM *b = features;
         if (b->tileMemoryHeap && !a->tileMemoryHeap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileMemoryHeapFeaturesQCOM", "tileMemoryHeap");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_filter_cubic_clamp))
            break;
         const VkPhysicalDeviceCubicClampFeaturesQCOM *a = &supported_VkPhysicalDeviceCubicClampFeaturesQCOM;
         const VkPhysicalDeviceCubicClampFeaturesQCOM *b = features;
         if (b->cubicRangeClamp && !a->cubicRangeClamp)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCubicClampFeaturesQCOM", "cubicRangeClamp");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_ycbcr_degamma))
            break;
         const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *a = &supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;
         const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *b = features;
         if (b->ycbcrDegamma && !a->ycbcrDegamma)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceYcbcrDegammaFeaturesQCOM", "ycbcrDegamma");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_filter_cubic_weights))
            break;
         const VkPhysicalDeviceCubicWeightsFeaturesQCOM *a = &supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM;
         const VkPhysicalDeviceCubicWeightsFeaturesQCOM *b = features;
         if (b->selectableCubicWeights && !a->selectableCubicWeights)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCubicWeightsFeaturesQCOM", "selectableCubicWeights");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_image_processing2))
            break;
         const VkPhysicalDeviceImageProcessing2FeaturesQCOM *a = &supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM;
         const VkPhysicalDeviceImageProcessing2FeaturesQCOM *b = features;
         if (b->textureBlockMatch2 && !a->textureBlockMatch2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessing2FeaturesQCOM", "textureBlockMatch2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_3_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_image_processing3))
            break;
         const VkPhysicalDeviceImageProcessing3FeaturesQCOM *a = &supported_VkPhysicalDeviceImageProcessing3FeaturesQCOM;
         const VkPhysicalDeviceImageProcessing3FeaturesQCOM *b = features;
         if (b->imageGatherLinear && !a->imageGatherLinear)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessing3FeaturesQCOM", "imageGatherLinear");
         if (b->imageGatherExtendedModes && !a->imageGatherExtendedModes)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessing3FeaturesQCOM", "imageGatherExtendedModes");
         if (b->blockMatchExtendedClampToEdge && !a->blockMatchExtendedClampToEdge)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageProcessing3FeaturesQCOM", "blockMatchExtendedClampToEdge");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_descriptor_pool_overallocation))
            break;
         const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *a = &supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;
         const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *b = features;
         if (b->descriptorPoolOverallocation && !a->descriptorPoolOverallocation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV", "descriptorPoolOverallocation");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_per_stage_descriptor_set))
            break;
         const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *a = &supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV;
         const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *b = features;
         if (b->perStageDescriptorSet && !a->perStageDescriptorSet)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePerStageDescriptorSetFeaturesNV", "perStageDescriptorSet");
         if (b->dynamicPipelineLayout && !a->dynamicPipelineLayout)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePerStageDescriptorSetFeaturesNV", "dynamicPipelineLayout");
         break;
      }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID: {
         if (!(physical_device->supported_extensions.ANDROID_external_format_resolve))
            break;
         const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *a = &supported_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID;
         const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *b = features;
         if (b->externalFormatResolve && !a->externalFormatResolve)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceExternalFormatResolveFeaturesANDROID", "externalFormatResolve");
         break;
      }
#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_scheduling_controls))
            break;
         const VkPhysicalDeviceSchedulingControlsFeaturesARM *a = &supported_VkPhysicalDeviceSchedulingControlsFeaturesARM;
         const VkPhysicalDeviceSchedulingControlsFeaturesARM *b = features;
         if (b->schedulingControls && !a->schedulingControls)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceSchedulingControlsFeaturesARM", "schedulingControls");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG: {
         if (!(physical_device->supported_extensions.IMG_relaxed_line_rasterization))
            break;
         const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *a = &supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;
         const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *b = features;
         if (b->relaxedLineRasterization && !a->relaxedLineRasterization)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG", "relaxedLineRasterization");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_render_pass_striped))
            break;
         const VkPhysicalDeviceRenderPassStripedFeaturesARM *a = &supported_VkPhysicalDeviceRenderPassStripedFeaturesARM;
         const VkPhysicalDeviceRenderPassStripedFeaturesARM *b = features;
         if (b->renderPassStriped && !a->renderPassStriped)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRenderPassStripedFeaturesARM", "renderPassStriped");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_pipeline_opacity_micromap))
            break;
         const VkPhysicalDevicePipelineOpacityMicromapFeaturesARM *a = &supported_VkPhysicalDevicePipelineOpacityMicromapFeaturesARM;
         const VkPhysicalDevicePipelineOpacityMicromapFeaturesARM *b = features;
         if (b->pipelineOpacityMicromap && !a->pipelineOpacityMicromap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineOpacityMicromapFeaturesARM", "pipelineOpacityMicromap");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_maximal_reconvergence))
            break;
         const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *a = &supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;
         const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *b = features;
         if (b->shaderMaximalReconvergence && !a->shaderMaximalReconvergence)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR", "shaderMaximalReconvergence");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_subgroup_rotate))
            break;
         const VkPhysicalDeviceShaderSubgroupRotateFeatures *a = &supported_VkPhysicalDeviceShaderSubgroupRotateFeatures;
         const VkPhysicalDeviceShaderSubgroupRotateFeatures *b = features;
         if (b->shaderSubgroupRotate && !a->shaderSubgroupRotate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSubgroupRotateFeatures", "shaderSubgroupRotate");
         if (b->shaderSubgroupRotateClustered && !a->shaderSubgroupRotateClustered)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSubgroupRotateFeatures", "shaderSubgroupRotateClustered");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_expect_assume))
            break;
         const VkPhysicalDeviceShaderExpectAssumeFeatures *a = &supported_VkPhysicalDeviceShaderExpectAssumeFeatures;
         const VkPhysicalDeviceShaderExpectAssumeFeatures *b = features;
         if (b->shaderExpectAssume && !a->shaderExpectAssume)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderExpectAssumeFeatures", "shaderExpectAssume");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_shader_float_controls2))
            break;
         const VkPhysicalDeviceShaderFloatControls2Features *a = &supported_VkPhysicalDeviceShaderFloatControls2Features;
         const VkPhysicalDeviceShaderFloatControls2Features *b = features;
         if (b->shaderFloatControls2 && !a->shaderFloatControls2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFloatControls2Features", "shaderFloatControls2");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES: {
         if (!(physical_device->properties.apiVersion >= VK_MAKE_VERSION(1, 4, 0) || physical_device->supported_extensions.KHR_dynamic_rendering_local_read))
            break;
         const VkPhysicalDeviceDynamicRenderingLocalReadFeatures *a = &supported_VkPhysicalDeviceDynamicRenderingLocalReadFeatures;
         const VkPhysicalDeviceDynamicRenderingLocalReadFeatures *b = features;
         if (b->dynamicRenderingLocalRead && !a->dynamicRenderingLocalRead)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDynamicRenderingLocalReadFeatures", "dynamicRenderingLocalRead");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_quad_control))
            break;
         const VkPhysicalDeviceShaderQuadControlFeaturesKHR *a = &supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR;
         const VkPhysicalDeviceShaderQuadControlFeaturesKHR *b = features;
         if (b->shaderQuadControl && !a->shaderQuadControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderQuadControlFeaturesKHR", "shaderQuadControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_shader_atomic_float16_vector))
            break;
         const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *a = &supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;
         const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *b = features;
         if (b->shaderFloat16VectorAtomics && !a->shaderFloat16VectorAtomics)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV", "shaderFloat16VectorAtomics");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_map_memory_placed))
            break;
         const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *a = &supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;
         const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *b = features;
         if (b->memoryMapPlaced && !a->memoryMapPlaced)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMapMemoryPlacedFeaturesEXT", "memoryMapPlaced");
         if (b->memoryMapRangePlaced && !a->memoryMapRangePlaced)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMapMemoryPlacedFeaturesEXT", "memoryMapRangePlaced");
         if (b->memoryUnmapReserve && !a->memoryUnmapReserve)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceMapMemoryPlacedFeaturesEXT", "memoryUnmapReserve");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_bfloat16))
            break;
         const VkPhysicalDeviceShaderBfloat16FeaturesKHR *a = &supported_VkPhysicalDeviceShaderBfloat16FeaturesKHR;
         const VkPhysicalDeviceShaderBfloat16FeaturesKHR *b = features;
         if (b->shaderBFloat16Type && !a->shaderBFloat16Type)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderBfloat16FeaturesKHR", "shaderBFloat16Type");
         if (b->shaderBFloat16DotProduct && !a->shaderBFloat16DotProduct)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderBfloat16FeaturesKHR", "shaderBFloat16DotProduct");
         if (b->shaderBFloat16CooperativeMatrix && !a->shaderBFloat16CooperativeMatrix)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderBfloat16FeaturesKHR", "shaderBFloat16CooperativeMatrix");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_raw_access_chains))
            break;
         const VkPhysicalDeviceRawAccessChainsFeaturesNV *a = &supported_VkPhysicalDeviceRawAccessChainsFeaturesNV;
         const VkPhysicalDeviceRawAccessChainsFeaturesNV *b = features;
         if (b->shaderRawAccessChains && !a->shaderRawAccessChains)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceRawAccessChainsFeaturesNV", "shaderRawAccessChains");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_command_buffer_inheritance))
            break;
         const VkPhysicalDeviceCommandBufferInheritanceFeaturesNV *a = &supported_VkPhysicalDeviceCommandBufferInheritanceFeaturesNV;
         const VkPhysicalDeviceCommandBufferInheritanceFeaturesNV *b = features;
         if (b->commandBufferInheritance && !a->commandBufferInheritance)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCommandBufferInheritanceFeaturesNV", "commandBufferInheritance");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA: {
         if (!(physical_device->supported_extensions.MESA_image_alignment_control))
            break;
         const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *a = &supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA;
         const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *b = features;
         if (b->imageAlignmentControl && !a->imageAlignmentControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageAlignmentControlFeaturesMESA", "imageAlignmentControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_replicated_composites))
            break;
         const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *a = &supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;
         const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *b = features;
         if (b->shaderReplicatedComposites && !a->shaderReplicatedComposites)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT", "shaderReplicatedComposites");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.EXT_present_mode_fifo_latest_ready || physical_device->supported_extensions.KHR_present_mode_fifo_latest_ready))
            break;
         const VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR *a = &supported_VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR;
         const VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR *b = features;
         if (b->presentModeFifoLatestReady && !a->presentModeFifoLatestReady)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR", "presentModeFifoLatestReady");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_cooperative_matrix2))
            break;
         const VkPhysicalDeviceCooperativeMatrix2FeaturesNV *a = &supported_VkPhysicalDeviceCooperativeMatrix2FeaturesNV;
         const VkPhysicalDeviceCooperativeMatrix2FeaturesNV *b = features;
         if (b->cooperativeMatrixWorkgroupScope && !a->cooperativeMatrixWorkgroupScope)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixWorkgroupScope");
         if (b->cooperativeMatrixFlexibleDimensions && !a->cooperativeMatrixFlexibleDimensions)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixFlexibleDimensions");
         if (b->cooperativeMatrixReductions && !a->cooperativeMatrixReductions)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixReductions");
         if (b->cooperativeMatrixConversions && !a->cooperativeMatrixConversions)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixConversions");
         if (b->cooperativeMatrixPerElementOperations && !a->cooperativeMatrixPerElementOperations)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixPerElementOperations");
         if (b->cooperativeMatrixTensorAddressing && !a->cooperativeMatrixTensorAddressing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixTensorAddressing");
         if (b->cooperativeMatrixBlockLoads && !a->cooperativeMatrixBlockLoads)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "cooperativeMatrixBlockLoads");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_DECODE_VECTOR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_cooperative_matrix_decode_vector))
            break;
         const VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV *a = &supported_VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV;
         const VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV *b = features;
         if (b->cooperativeMatrixDecodeVector && !a->cooperativeMatrixDecodeVector)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV", "cooperativeMatrixDecodeVector");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI: {
         if (!(physical_device->supported_extensions.HUAWEI_hdr_vivid))
            break;
         const VkPhysicalDeviceHdrVividFeaturesHUAWEI *a = &supported_VkPhysicalDeviceHdrVividFeaturesHUAWEI;
         const VkPhysicalDeviceHdrVividFeaturesHUAWEI *b = features;
         if (b->hdrVivid && !a->hdrVivid)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceHdrVividFeaturesHUAWEI", "hdrVivid");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_vertex_attribute_robustness))
            break;
         const VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT *a = &supported_VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT;
         const VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT *b = features;
         if (b->vertexAttributeRobustness && !a->vertexAttributeRobustness)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT", "vertexAttributeRobustness");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.EXT_depth_clamp_zero_one || physical_device->supported_extensions.KHR_depth_clamp_zero_one))
            break;
         const VkPhysicalDeviceDepthClampZeroOneFeaturesKHR *a = &supported_VkPhysicalDeviceDepthClampZeroOneFeaturesKHR;
         const VkPhysicalDeviceDepthClampZeroOneFeaturesKHR *b = features;
         if (b->depthClampZeroOne && !a->depthClampZeroOne)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDepthClampZeroOneFeaturesKHR", "depthClampZeroOne");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_cooperative_vector))
            break;
         const VkPhysicalDeviceCooperativeVectorFeaturesNV *a = &supported_VkPhysicalDeviceCooperativeVectorFeaturesNV;
         const VkPhysicalDeviceCooperativeVectorFeaturesNV *b = features;
         if (b->cooperativeVector && !a->cooperativeVector)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeVectorFeaturesNV", "cooperativeVector");
         if (b->cooperativeVectorTraining && !a->cooperativeVectorTraining)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeVectorFeaturesNV", "cooperativeVectorTraining");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_tile_shading))
            break;
         const VkPhysicalDeviceTileShadingFeaturesQCOM *a = &supported_VkPhysicalDeviceTileShadingFeaturesQCOM;
         const VkPhysicalDeviceTileShadingFeaturesQCOM *b = features;
         if (b->tileShading && !a->tileShading)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShading");
         if (b->tileShadingFragmentStage && !a->tileShadingFragmentStage)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingFragmentStage");
         if (b->tileShadingColorAttachments && !a->tileShadingColorAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingColorAttachments");
         if (b->tileShadingDepthAttachments && !a->tileShadingDepthAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingDepthAttachments");
         if (b->tileShadingStencilAttachments && !a->tileShadingStencilAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingStencilAttachments");
         if (b->tileShadingInputAttachments && !a->tileShadingInputAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingInputAttachments");
         if (b->tileShadingSampledAttachments && !a->tileShadingSampledAttachments)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingSampledAttachments");
         if (b->tileShadingPerTileDraw && !a->tileShadingPerTileDraw)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingPerTileDraw");
         if (b->tileShadingPerTileDispatch && !a->tileShadingPerTileDispatch)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingPerTileDispatch");
         if (b->tileShadingDispatchTile && !a->tileShadingDispatchTile)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingDispatchTile");
         if (b->tileShadingApron && !a->tileShadingApron)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingApron");
         if (b->tileShadingAnisotropicApron && !a->tileShadingAnisotropicApron)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingAnisotropicApron");
         if (b->tileShadingAtomicOps && !a->tileShadingAtomicOps)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingAtomicOps");
         if (b->tileShadingImageProcessing && !a->tileShadingImageProcessing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTileShadingFeaturesQCOM", "tileShadingImageProcessing");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE: {
         if (!(physical_device->supported_extensions.VALVE_fragment_density_map_layered))
            break;
         const VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE *a = &supported_VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE;
         const VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE *b = features;
         if (b->fragmentDensityMapLayered && !a->fragmentDensityMapLayered)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE", "fragmentDensityMapLayered");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_present_metering))
            break;
         const VkPhysicalDevicePresentMeteringFeaturesNV *a = &supported_VkPhysicalDevicePresentMeteringFeaturesNV;
         const VkPhysicalDevicePresentMeteringFeaturesNV *b = features;
         if (b->presentMetering && !a->presentMetering)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePresentMeteringFeaturesNV", "presentMetering");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_uniform_buffer_unsized_array))
            break;
         const VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT *a = &supported_VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT;
         const VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT *b = features;
         if (b->shaderUniformBufferUnsizedArray && !a->shaderUniformBufferUnsizedArray)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT", "shaderUniformBufferUnsizedArray");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MIXED_FLOAT_DOT_PRODUCT_FEATURES_VALVE: {
         if (!(physical_device->supported_extensions.VALVE_shader_mixed_float_dot_product))
            break;
         const VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE *a = &supported_VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE;
         const VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE *b = features;
         if (b->shaderMixedFloatDotProductFloat16AccFloat32 && !a->shaderMixedFloatDotProductFloat16AccFloat32)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE", "shaderMixedFloatDotProductFloat16AccFloat32");
         if (b->shaderMixedFloatDotProductFloat16AccFloat16 && !a->shaderMixedFloatDotProductFloat16AccFloat16)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE", "shaderMixedFloatDotProductFloat16AccFloat16");
         if (b->shaderMixedFloatDotProductBFloat16Acc && !a->shaderMixedFloatDotProductBFloat16Acc)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE", "shaderMixedFloatDotProductBFloat16Acc");
         if (b->shaderMixedFloatDotProductFloat8AccFloat32 && !a->shaderMixedFloatDotProductFloat8AccFloat32)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE", "shaderMixedFloatDotProductFloat8AccFloat32");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_RESTART_INDEX_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_primitive_restart_index))
            break;
         const VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT *a = &supported_VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT;
         const VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT *b = features;
         if (b->primitiveRestartIndex && !a->primitiveRestartIndex)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT", "primitiveRestartIndex");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_format_pack))
            break;
         const VkPhysicalDeviceFormatPackFeaturesARM *a = &supported_VkPhysicalDeviceFormatPackFeaturesARM;
         const VkPhysicalDeviceFormatPackFeaturesARM *b = features;
         if (b->formatPack && !a->formatPack)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceFormatPackFeaturesARM", "formatPack");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_THROTTLE_HINT_FEATURES_SEC: {
         if (!(physical_device->supported_extensions.SEC_throttle_hint))
            break;
         const VkPhysicalDeviceThrottleHintFeaturesSEC *a = &supported_VkPhysicalDeviceThrottleHintFeaturesSEC;
         const VkPhysicalDeviceThrottleHintFeaturesSEC *b = features;
         if (b->throttleHint && !a->throttleHint)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceThrottleHintFeaturesSEC", "throttleHint");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_tensors))
            break;
         const VkPhysicalDeviceTensorFeaturesARM *a = &supported_VkPhysicalDeviceTensorFeaturesARM;
         const VkPhysicalDeviceTensorFeaturesARM *b = features;
         if (b->tensorNonPacked && !a->tensorNonPacked)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "tensorNonPacked");
         if (b->shaderTensorAccess && !a->shaderTensorAccess)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "shaderTensorAccess");
         if (b->shaderStorageTensorArrayDynamicIndexing && !a->shaderStorageTensorArrayDynamicIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "shaderStorageTensorArrayDynamicIndexing");
         if (b->shaderStorageTensorArrayNonUniformIndexing && !a->shaderStorageTensorArrayNonUniformIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "shaderStorageTensorArrayNonUniformIndexing");
         if (b->descriptorBindingStorageTensorUpdateAfterBind && !a->descriptorBindingStorageTensorUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "descriptorBindingStorageTensorUpdateAfterBind");
         if (b->tensors && !a->tensors)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTensorFeaturesARM", "tensors");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_tensors))
            break;
         const VkPhysicalDeviceDescriptorBufferTensorFeaturesARM *a = &supported_VkPhysicalDeviceDescriptorBufferTensorFeaturesARM;
         const VkPhysicalDeviceDescriptorBufferTensorFeaturesARM *b = features;
         if (b->descriptorBufferTensorDescriptors && !a->descriptorBufferTensorDescriptors)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorBufferTensorFeaturesARM", "descriptorBufferTensorDescriptors");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_float8))
            break;
         const VkPhysicalDeviceShaderFloat8FeaturesEXT *a = &supported_VkPhysicalDeviceShaderFloat8FeaturesEXT;
         const VkPhysicalDeviceShaderFloat8FeaturesEXT *b = features;
         if (b->shaderFloat8 && !a->shaderFloat8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFloat8FeaturesEXT", "shaderFloat8");
         if (b->shaderFloat8CooperativeMatrix && !a->shaderFloat8CooperativeMatrix)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderFloat8FeaturesEXT", "shaderFloat8CooperativeMatrix");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_data_graph))
            break;
         const VkPhysicalDeviceDataGraphFeaturesARM *a = &supported_VkPhysicalDeviceDataGraphFeaturesARM;
         const VkPhysicalDeviceDataGraphFeaturesARM *b = features;
         if (b->dataGraph && !a->dataGraph)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphFeaturesARM", "dataGraph");
         if (b->dataGraphUpdateAfterBind && !a->dataGraphUpdateAfterBind)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphFeaturesARM", "dataGraphUpdateAfterBind");
         if (b->dataGraphSpecializationConstants && !a->dataGraphSpecializationConstants)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphFeaturesARM", "dataGraphSpecializationConstants");
         if (b->dataGraphDescriptorBuffer && !a->dataGraphDescriptorBuffer)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphFeaturesARM", "dataGraphDescriptorBuffer");
         if (b->dataGraphShaderModule && !a->dataGraphShaderModule)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphFeaturesARM", "dataGraphShaderModule");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC: {
         if (!(physical_device->supported_extensions.SEC_pipeline_cache_incremental_mode))
            break;
         const VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC *a = &supported_VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC;
         const VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC *b = features;
         if (b->pipelineCacheIncrementalMode && !a->pipelineCacheIncrementalMode)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC", "pipelineCacheIncrementalMode");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_MODEL_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_data_graph_model))
            break;
         const VkPhysicalDeviceDataGraphModelFeaturesQCOM *a = &supported_VkPhysicalDeviceDataGraphModelFeaturesQCOM;
         const VkPhysicalDeviceDataGraphModelFeaturesQCOM *b = features;
         if (b->dataGraphModel && !a->dataGraphModel)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphModelFeaturesQCOM", "dataGraphModel");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_untyped_pointers))
            break;
         const VkPhysicalDeviceShaderUntypedPointersFeaturesKHR *a = &supported_VkPhysicalDeviceShaderUntypedPointersFeaturesKHR;
         const VkPhysicalDeviceShaderUntypedPointersFeaturesKHR *b = features;
         if (b->shaderUntypedPointers && !a->shaderUntypedPointers)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderUntypedPointersFeaturesKHR", "shaderUntypedPointers");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE: {
         if (!(physical_device->supported_extensions.VALVE_video_encode_rgb_conversion))
            break;
         const VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE *a = &supported_VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE;
         const VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE *b = features;
         if (b->videoEncodeRgbConversion && !a->videoEncodeRgbConversion)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE", "videoEncodeRgbConversion");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_64bit_indexing))
            break;
         const VkPhysicalDeviceShader64BitIndexingFeaturesEXT *a = &supported_VkPhysicalDeviceShader64BitIndexingFeaturesEXT;
         const VkPhysicalDeviceShader64BitIndexingFeaturesEXT *b = features;
         if (b->shader64BitIndexing && !a->shader64BitIndexing)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShader64BitIndexingFeaturesEXT", "shader64BitIndexing");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_QUEUE_PERF_HINT_FEATURES_QCOM: {
         if (!(physical_device->supported_extensions.QCOM_queue_perf_hint))
            break;
         const VkPhysicalDeviceQueuePerfHintFeaturesQCOM *a = &supported_VkPhysicalDeviceQueuePerfHintFeaturesQCOM;
         const VkPhysicalDeviceQueuePerfHintFeaturesQCOM *b = features;
         if (b->queuePerfHint && !a->queuePerfHint)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceQueuePerfHintFeaturesQCOM", "queuePerfHint");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_performance_counters_by_region))
            break;
         const VkPhysicalDevicePerformanceCountersByRegionFeaturesARM *a = &supported_VkPhysicalDevicePerformanceCountersByRegionFeaturesARM;
         const VkPhysicalDevicePerformanceCountersByRegionFeaturesARM *b = features;
         if (b->performanceCountersByRegion && !a->performanceCountersByRegion)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDevicePerformanceCountersByRegionFeaturesARM", "performanceCountersByRegion");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_OCCUPANCY_PRIORITY_FEATURES_NV: {
         if (!(physical_device->supported_extensions.NV_compute_occupancy_priority))
            break;
         const VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV *a = &supported_VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV;
         const VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV *b = features;
         if (b->computeOccupancyPriority && !a->computeOccupancyPriority)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV", "computeOccupancyPriority");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_long_vector))
            break;
         const VkPhysicalDeviceShaderLongVectorFeaturesEXT *a = &supported_VkPhysicalDeviceShaderLongVectorFeaturesEXT;
         const VkPhysicalDeviceShaderLongVectorFeaturesEXT *b = features;
         if (b->longVector && !a->longVector)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderLongVectorFeaturesEXT", "longVector");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_3D_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_texture_compression_astc_3d))
            break;
         const VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT *a = &supported_VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT;
         const VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT *b = features;
         if (b->textureCompressionASTC_3D && !a->textureCompressionASTC_3D)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT", "textureCompressionASTC_3D");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_PARTITIONED_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_subgroup_partitioned))
            break;
         const VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT *a = &supported_VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT;
         const VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT *b = features;
         if (b->shaderSubgroupPartitioned && !a->shaderSubgroupPartitioned)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT", "shaderSubgroupPartitioned");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SPLIT_BARRIER_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_split_barrier))
            break;
         const VkPhysicalDeviceShaderSplitBarrierFeaturesEXT *a = &supported_VkPhysicalDeviceShaderSplitBarrierFeaturesEXT;
         const VkPhysicalDeviceShaderSplitBarrierFeaturesEXT *b = features;
         if (b->shaderSplitBarrier && !a->shaderSplitBarrier)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderSplitBarrierFeaturesEXT", "shaderSplitBarrier");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_descriptor_heap))
            break;
         const VkPhysicalDeviceDescriptorHeapFeaturesEXT *a = &supported_VkPhysicalDeviceDescriptorHeapFeaturesEXT;
         const VkPhysicalDeviceDescriptorHeapFeaturesEXT *b = features;
         if (b->descriptorHeap && !a->descriptorHeap)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorHeapFeaturesEXT", "descriptorHeap");
         if (b->descriptorHeapCaptureReplay && !a->descriptorHeapCaptureReplay)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDescriptorHeapFeaturesEXT", "descriptorHeapCaptureReplay");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INSTRUMENTATION_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_shader_instrumentation))
            break;
         const VkPhysicalDeviceShaderInstrumentationFeaturesARM *a = &supported_VkPhysicalDeviceShaderInstrumentationFeaturesARM;
         const VkPhysicalDeviceShaderInstrumentationFeaturesARM *b = features;
         if (b->shaderInstrumentation && !a->shaderInstrumentation)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderInstrumentationFeaturesARM", "shaderInstrumentation");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_ADDRESS_COMMANDS_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_device_address_commands))
            break;
         const VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR *a = &supported_VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR;
         const VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR *b = features;
         if (b->deviceAddressCommands && !a->deviceAddressCommands)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR", "deviceAddressCommands");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CONSTANT_DATA_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_constant_data))
            break;
         const VkPhysicalDeviceShaderConstantDataFeaturesKHR *a = &supported_VkPhysicalDeviceShaderConstantDataFeaturesKHR;
         const VkPhysicalDeviceShaderConstantDataFeaturesKHR *b = features;
         if (b->shaderConstantData && !a->shaderConstantData)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderConstantDataFeaturesKHR", "shaderConstantData");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ABORT_FEATURES_KHR: {
         if (!(physical_device->supported_extensions.KHR_shader_abort))
            break;
         const VkPhysicalDeviceShaderAbortFeaturesKHR *a = &supported_VkPhysicalDeviceShaderAbortFeaturesKHR;
         const VkPhysicalDeviceShaderAbortFeaturesKHR *b = features;
         if (b->shaderAbort && !a->shaderAbort)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderAbortFeaturesKHR", "shaderAbort");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_OPTICAL_FLOW_FEATURES_ARM: {
         if (!(physical_device->supported_extensions.ARM_data_graph_optical_flow))
            break;
         const VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM *a = &supported_VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM;
         const VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM *b = features;
         if (b->dataGraphOpticalFlow && !a->dataGraphOpticalFlow)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM", "dataGraphOpticalFlow");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_TILING_CONTROL_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_image_tiling_control))
            break;
         const VkPhysicalDeviceImageTilingControlFeaturesEXT *a = &supported_VkPhysicalDeviceImageTilingControlFeaturesEXT;
         const VkPhysicalDeviceImageTilingControlFeaturesEXT *b = features;
         if (b->imageTilingControl && !a->imageTilingControl)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceImageTilingControlFeaturesEXT", "imageTilingControl");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OCP_MICROSCALING_TYPES_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_shader_ocp_microscaling_types))
            break;
         const VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT *a = &supported_VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT;
         const VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT *b = features;
         if (b->shaderFloat4 && !a->shaderFloat4)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT", "shaderFloat4");
         if (b->shaderFloat6 && !a->shaderFloat6)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT", "shaderFloat6");
         if (b->shaderFloat8UnsignedE8M0 && !a->shaderFloat8UnsignedE8M0)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT", "shaderFloat8UnsignedE8M0");
         if (b->shaderMXInt8 && !a->shaderMXInt8)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT", "shaderMXInt8");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_MAINTENANCE_1_FEATURES_EXT: {
         if (!(physical_device->supported_extensions.EXT_cooperative_matrix_maintenance1))
            break;
         const VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT *a = &supported_VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT;
         const VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT *b = features;
         if (b->cooperativeMatrixProperties2 && !a->cooperativeMatrixProperties2)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "cooperativeMatrixProperties2");
         if (b->cooperativeMatrixReductions && !a->cooperativeMatrixReductions)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "cooperativeMatrixReductions");
         if (b->cooperativeMatrixConversions && !a->cooperativeMatrixConversions)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "cooperativeMatrixConversions");
         if (b->cooperativeMatrixPerElementOperations && !a->cooperativeMatrixPerElementOperations)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "cooperativeMatrixPerElementOperations");
         if (b->cooperativeMatrixGetCoordinate && !a->cooperativeMatrixGetCoordinate)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "cooperativeMatrixGetCoordinate");
         break;
      }
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_ALLOCATION_ALIGNMENT_FEATURES_VALVE: {
         if (!(physical_device->supported_extensions.VALVE_buffer_device_address_allocation_alignment))
            break;
         const VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE *a = &supported_VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE;
         const VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE *b = features;
         if (b->bufferDeviceAddressAllocationAlignment && !a->bufferDeviceAddressAllocationAlignment)
            return vk_errorf(physical_device, VK_ERROR_FEATURE_NOT_PRESENT,
                             "%s.%s not supported", "VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE", "bufferDeviceAddressAllocationAlignment");
         break;
      }
      default:
         break;
      }
   } // for each extension structure
   return VK_SUCCESS;
}

VKAPI_ATTR void VKAPI_CALL
vk_common_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice,
                                     VkPhysicalDeviceFeatures2 *pFeatures)
{
   VK_FROM_HANDLE(vk_physical_device, pdevice, physicalDevice);

   pFeatures->features.robustBufferAccess = pdevice->supported_features.robustBufferAccess;
   pFeatures->features.fullDrawIndexUint32 = pdevice->supported_features.fullDrawIndexUint32;
   pFeatures->features.imageCubeArray = pdevice->supported_features.imageCubeArray;
   pFeatures->features.independentBlend = pdevice->supported_features.independentBlend;
   pFeatures->features.geometryShader = pdevice->supported_features.geometryShader;
   pFeatures->features.tessellationShader = pdevice->supported_features.tessellationShader;
   pFeatures->features.sampleRateShading = pdevice->supported_features.sampleRateShading;
   pFeatures->features.dualSrcBlend = pdevice->supported_features.dualSrcBlend;
   pFeatures->features.logicOp = pdevice->supported_features.logicOp;
   pFeatures->features.multiDrawIndirect = pdevice->supported_features.multiDrawIndirect;
   pFeatures->features.drawIndirectFirstInstance = pdevice->supported_features.drawIndirectFirstInstance;
   pFeatures->features.depthClamp = pdevice->supported_features.depthClamp;
   pFeatures->features.depthBiasClamp = pdevice->supported_features.depthBiasClamp;
   pFeatures->features.fillModeNonSolid = pdevice->supported_features.fillModeNonSolid;
   pFeatures->features.depthBounds = pdevice->supported_features.depthBounds;
   pFeatures->features.wideLines = pdevice->supported_features.wideLines;
   pFeatures->features.largePoints = pdevice->supported_features.largePoints;
   pFeatures->features.alphaToOne = pdevice->supported_features.alphaToOne;
   pFeatures->features.multiViewport = pdevice->supported_features.multiViewport;
   pFeatures->features.samplerAnisotropy = pdevice->supported_features.samplerAnisotropy;
   pFeatures->features.textureCompressionETC2 = pdevice->supported_features.textureCompressionETC2;
   pFeatures->features.textureCompressionASTC_LDR = pdevice->supported_features.textureCompressionASTC_LDR;
   pFeatures->features.textureCompressionBC = pdevice->supported_features.textureCompressionBC;
   pFeatures->features.occlusionQueryPrecise = pdevice->supported_features.occlusionQueryPrecise;
   pFeatures->features.pipelineStatisticsQuery = pdevice->supported_features.pipelineStatisticsQuery;
   pFeatures->features.vertexPipelineStoresAndAtomics = pdevice->supported_features.vertexPipelineStoresAndAtomics;
   pFeatures->features.fragmentStoresAndAtomics = pdevice->supported_features.fragmentStoresAndAtomics;
   pFeatures->features.shaderTessellationAndGeometryPointSize = pdevice->supported_features.shaderTessellationAndGeometryPointSize;
   pFeatures->features.shaderImageGatherExtended = pdevice->supported_features.shaderImageGatherExtended;
   pFeatures->features.shaderStorageImageExtendedFormats = pdevice->supported_features.shaderStorageImageExtendedFormats;
   pFeatures->features.shaderStorageImageMultisample = pdevice->supported_features.shaderStorageImageMultisample;
   pFeatures->features.shaderStorageImageReadWithoutFormat = pdevice->supported_features.shaderStorageImageReadWithoutFormat;
   pFeatures->features.shaderStorageImageWriteWithoutFormat = pdevice->supported_features.shaderStorageImageWriteWithoutFormat;
   pFeatures->features.shaderUniformBufferArrayDynamicIndexing = pdevice->supported_features.shaderUniformBufferArrayDynamicIndexing;
   pFeatures->features.shaderSampledImageArrayDynamicIndexing = pdevice->supported_features.shaderSampledImageArrayDynamicIndexing;
   pFeatures->features.shaderStorageBufferArrayDynamicIndexing = pdevice->supported_features.shaderStorageBufferArrayDynamicIndexing;
   pFeatures->features.shaderStorageImageArrayDynamicIndexing = pdevice->supported_features.shaderStorageImageArrayDynamicIndexing;
   pFeatures->features.shaderClipDistance = pdevice->supported_features.shaderClipDistance;
   pFeatures->features.shaderCullDistance = pdevice->supported_features.shaderCullDistance;
   pFeatures->features.shaderFloat64 = pdevice->supported_features.shaderFloat64;
   pFeatures->features.shaderInt64 = pdevice->supported_features.shaderInt64;
   pFeatures->features.shaderInt16 = pdevice->supported_features.shaderInt16;
   pFeatures->features.shaderResourceResidency = pdevice->supported_features.shaderResourceResidency;
   pFeatures->features.shaderResourceMinLod = pdevice->supported_features.shaderResourceMinLod;
   pFeatures->features.sparseBinding = pdevice->supported_features.sparseBinding;
   pFeatures->features.sparseResidencyBuffer = pdevice->supported_features.sparseResidencyBuffer;
   pFeatures->features.sparseResidencyImage2D = pdevice->supported_features.sparseResidencyImage2D;
   pFeatures->features.sparseResidencyImage3D = pdevice->supported_features.sparseResidencyImage3D;
   pFeatures->features.sparseResidency2Samples = pdevice->supported_features.sparseResidency2Samples;
   pFeatures->features.sparseResidency4Samples = pdevice->supported_features.sparseResidency4Samples;
   pFeatures->features.sparseResidency8Samples = pdevice->supported_features.sparseResidency8Samples;
   pFeatures->features.sparseResidency16Samples = pdevice->supported_features.sparseResidency16Samples;
   pFeatures->features.sparseResidencyAliased = pdevice->supported_features.sparseResidencyAliased;
   pFeatures->features.variableMultisampleRate = pdevice->supported_features.variableMultisampleRate;
   pFeatures->features.inheritedQueries = pdevice->supported_features.inheritedQueries;

   vk_foreach_struct(sType, ext, pFeatures) {
      switch (sType) {
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
         VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *features = ext;
         features->deviceGeneratedCommands = pdevice->supported_features.deviceGeneratedCommandsNV;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_FEATURES_NV: {
         VkPhysicalDevicePushConstantBankFeaturesNV *features = ext;
         features->pushConstantBank = pdevice->supported_features.pushConstantBank;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: {
         VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *features = ext;
         features->deviceGeneratedCompute = pdevice->supported_features.deviceGeneratedCompute;
         features->deviceGeneratedComputePipelines = pdevice->supported_features.deviceGeneratedComputePipelines;
         features->deviceGeneratedComputeCaptureReplay = pdevice->supported_features.deviceGeneratedComputeCaptureReplay;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: {
         VkPhysicalDevicePrivateDataFeatures *features = ext;
         features->privateData = pdevice->supported_features.privateData;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_BASE_HANDLE_FEATURES_NV: {
         VkPhysicalDevicePrivateDataBaseHandleFeaturesNV *features = ext;
         features->privateDataBaseHandle = pdevice->supported_features.privateDataBaseHandle;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV: {
         VkPhysicalDeviceClusterAccelerationStructureFeaturesNV *features = ext;
         features->clusterAccelerationStructure = pdevice->supported_features.clusterAccelerationStructure;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
         VkPhysicalDeviceVariablePointersFeatures *features = ext;
         features->variablePointersStorageBuffer = pdevice->supported_features.variablePointersStorageBuffer;
         features->variablePointers = pdevice->supported_features.variablePointers;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
         VkPhysicalDeviceMultiviewFeatures *features = ext;
         features->multiview = pdevice->supported_features.multiview;
         features->multiviewGeometryShader = pdevice->supported_features.multiviewGeometryShader;
         features->multiviewTessellationShader = pdevice->supported_features.multiviewTessellationShader;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: {
         VkPhysicalDevicePresentIdFeaturesKHR *features = ext;
         features->presentId = pdevice->supported_features.presentId;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR: {
         VkPhysicalDevicePresentId2FeaturesKHR *features = ext;
         features->presentId2 = pdevice->supported_features.presentId2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: {
         VkPhysicalDevicePresentWaitFeaturesKHR *features = ext;
         features->presentWait = pdevice->supported_features.presentWait;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR: {
         VkPhysicalDevicePresentWait2FeaturesKHR *features = ext;
         features->presentWait2 = pdevice->supported_features.presentWait2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_TIMING_FEATURES_EXT: {
         VkPhysicalDevicePresentTimingFeaturesEXT *features = ext;
         features->presentTiming = pdevice->supported_features.presentTiming;
         features->presentAtAbsoluteTime = pdevice->supported_features.presentAtAbsoluteTime;
         features->presentAtRelativeTime = pdevice->supported_features.presentAtRelativeTime;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
         VkPhysicalDevice16BitStorageFeatures *features = ext;
         features->storageBuffer16BitAccess = pdevice->supported_features.storageBuffer16BitAccess;
         features->uniformAndStorageBuffer16BitAccess = pdevice->supported_features.uniformAndStorageBuffer16BitAccess;
         features->storagePushConstant16 = pdevice->supported_features.storagePushConstant16;
         features->storageInputOutput16 = pdevice->supported_features.storageInputOutput16;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
         VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *features = ext;
         features->shaderSubgroupExtendedTypes = pdevice->supported_features.shaderSubgroupExtendedTypes;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
         VkPhysicalDeviceSamplerYcbcrConversionFeatures *features = ext;
         features->samplerYcbcrConversion = pdevice->supported_features.samplerYcbcrConversion;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
         VkPhysicalDeviceProtectedMemoryFeatures *features = ext;
         features->protectedMemory = pdevice->supported_features.protectedMemory;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
         VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *features = ext;
         features->advancedBlendCoherentOperations = pdevice->supported_features.advancedBlendCoherentOperations;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: {
         VkPhysicalDeviceMultiDrawFeaturesEXT *features = ext;
         features->multiDraw = pdevice->supported_features.multiDraw;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: {
         VkPhysicalDeviceInlineUniformBlockFeatures *features = ext;
         features->inlineUniformBlock = pdevice->supported_features.inlineUniformBlock;
         features->descriptorBindingInlineUniformBlockUpdateAfterBind = pdevice->supported_features.descriptorBindingInlineUniformBlockUpdateAfterBind;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: {
         VkPhysicalDeviceMaintenance4Features *features = ext;
         features->maintenance4 = pdevice->supported_features.maintenance4;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES: {
         VkPhysicalDeviceMaintenance5Features *features = ext;
         features->maintenance5 = pdevice->supported_features.maintenance5;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES: {
         VkPhysicalDeviceMaintenance6Features *features = ext;
         features->maintenance6 = pdevice->supported_features.maintenance6;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR: {
         VkPhysicalDeviceMaintenance7FeaturesKHR *features = ext;
         features->maintenance7 = pdevice->supported_features.maintenance7;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR: {
         VkPhysicalDeviceMaintenance8FeaturesKHR *features = ext;
         features->maintenance8 = pdevice->supported_features.maintenance8;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR: {
         VkPhysicalDeviceMaintenance9FeaturesKHR *features = ext;
         features->maintenance9 = pdevice->supported_features.maintenance9;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_11_FEATURES_KHR: {
         VkPhysicalDeviceMaintenance11FeaturesKHR *features = ext;
         features->maintenance11 = pdevice->supported_features.maintenance11;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR: {
         VkPhysicalDeviceMaintenance10FeaturesKHR *features = ext;
         features->maintenance10 = pdevice->supported_features.maintenance10;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
         VkPhysicalDeviceShaderDrawParametersFeatures *features = ext;
         features->shaderDrawParameters = pdevice->supported_features.shaderDrawParameters;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
         VkPhysicalDeviceShaderFloat16Int8Features *features = ext;
         features->shaderFloat16 = pdevice->supported_features.shaderFloat16;
         features->shaderInt8 = pdevice->supported_features.shaderInt8;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
         VkPhysicalDeviceHostQueryResetFeatures *features = ext;
         features->hostQueryReset = pdevice->supported_features.hostQueryReset;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ELAPSED_TIMER_QUERY_FEATURES_QCOM: {
         VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM *features = ext;
         features->elapsedTimerQuery = pdevice->supported_features.elapsedTimerQuery;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES: {
         VkPhysicalDeviceGlobalPriorityQueryFeatures *features = ext;
         features->globalPriorityQuery = pdevice->supported_features.globalPriorityQuery;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: {
         VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *features = ext;
         features->deviceMemoryReport = pdevice->supported_features.deviceMemoryReport;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
         VkPhysicalDeviceDescriptorIndexingFeatures *features = ext;
         features->shaderInputAttachmentArrayDynamicIndexing = pdevice->supported_features.shaderInputAttachmentArrayDynamicIndexing;
         features->shaderUniformTexelBufferArrayDynamicIndexing = pdevice->supported_features.shaderUniformTexelBufferArrayDynamicIndexing;
         features->shaderStorageTexelBufferArrayDynamicIndexing = pdevice->supported_features.shaderStorageTexelBufferArrayDynamicIndexing;
         features->shaderUniformBufferArrayNonUniformIndexing = pdevice->supported_features.shaderUniformBufferArrayNonUniformIndexing;
         features->shaderSampledImageArrayNonUniformIndexing = pdevice->supported_features.shaderSampledImageArrayNonUniformIndexing;
         features->shaderStorageBufferArrayNonUniformIndexing = pdevice->supported_features.shaderStorageBufferArrayNonUniformIndexing;
         features->shaderStorageImageArrayNonUniformIndexing = pdevice->supported_features.shaderStorageImageArrayNonUniformIndexing;
         features->shaderInputAttachmentArrayNonUniformIndexing = pdevice->supported_features.shaderInputAttachmentArrayNonUniformIndexing;
         features->shaderUniformTexelBufferArrayNonUniformIndexing = pdevice->supported_features.shaderUniformTexelBufferArrayNonUniformIndexing;
         features->shaderStorageTexelBufferArrayNonUniformIndexing = pdevice->supported_features.shaderStorageTexelBufferArrayNonUniformIndexing;
         features->descriptorBindingUniformBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingUniformBufferUpdateAfterBind;
         features->descriptorBindingSampledImageUpdateAfterBind = pdevice->supported_features.descriptorBindingSampledImageUpdateAfterBind;
         features->descriptorBindingStorageImageUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageImageUpdateAfterBind;
         features->descriptorBindingStorageBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageBufferUpdateAfterBind;
         features->descriptorBindingUniformTexelBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingUniformTexelBufferUpdateAfterBind;
         features->descriptorBindingStorageTexelBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageTexelBufferUpdateAfterBind;
         features->descriptorBindingUpdateUnusedWhilePending = pdevice->supported_features.descriptorBindingUpdateUnusedWhilePending;
         features->descriptorBindingPartiallyBound = pdevice->supported_features.descriptorBindingPartiallyBound;
         features->descriptorBindingVariableDescriptorCount = pdevice->supported_features.descriptorBindingVariableDescriptorCount;
         features->runtimeDescriptorArray = pdevice->supported_features.runtimeDescriptorArray;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
         VkPhysicalDeviceTimelineSemaphoreFeatures *features = ext;
         features->timelineSemaphore = pdevice->supported_features.timelineSemaphore;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
         VkPhysicalDevice8BitStorageFeatures *features = ext;
         features->storageBuffer8BitAccess = pdevice->supported_features.storageBuffer8BitAccess;
         features->uniformAndStorageBuffer8BitAccess = pdevice->supported_features.uniformAndStorageBuffer8BitAccess;
         features->storagePushConstant8 = pdevice->supported_features.storagePushConstant8;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
         VkPhysicalDeviceConditionalRenderingFeaturesEXT *features = ext;
         features->conditionalRendering = pdevice->supported_features.conditionalRendering;
         features->inheritedConditionalRendering = pdevice->supported_features.inheritedConditionalRendering;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
         VkPhysicalDeviceVulkanMemoryModelFeatures *features = ext;
         features->vulkanMemoryModel = pdevice->supported_features.vulkanMemoryModel;
         features->vulkanMemoryModelDeviceScope = pdevice->supported_features.vulkanMemoryModelDeviceScope;
         features->vulkanMemoryModelAvailabilityVisibilityChains = pdevice->supported_features.vulkanMemoryModelAvailabilityVisibilityChains;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
         VkPhysicalDeviceShaderAtomicInt64Features *features = ext;
         features->shaderBufferInt64Atomics = pdevice->supported_features.shaderBufferInt64Atomics;
         features->shaderSharedInt64Atomics = pdevice->supported_features.shaderSharedInt64Atomics;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
         VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *features = ext;
         features->shaderBufferFloat32Atomics = pdevice->supported_features.shaderBufferFloat32Atomics;
         features->shaderBufferFloat32AtomicAdd = pdevice->supported_features.shaderBufferFloat32AtomicAdd;
         features->shaderBufferFloat64Atomics = pdevice->supported_features.shaderBufferFloat64Atomics;
         features->shaderBufferFloat64AtomicAdd = pdevice->supported_features.shaderBufferFloat64AtomicAdd;
         features->shaderSharedFloat32Atomics = pdevice->supported_features.shaderSharedFloat32Atomics;
         features->shaderSharedFloat32AtomicAdd = pdevice->supported_features.shaderSharedFloat32AtomicAdd;
         features->shaderSharedFloat64Atomics = pdevice->supported_features.shaderSharedFloat64Atomics;
         features->shaderSharedFloat64AtomicAdd = pdevice->supported_features.shaderSharedFloat64AtomicAdd;
         features->shaderImageFloat32Atomics = pdevice->supported_features.shaderImageFloat32Atomics;
         features->shaderImageFloat32AtomicAdd = pdevice->supported_features.shaderImageFloat32AtomicAdd;
         features->sparseImageFloat32Atomics = pdevice->supported_features.sparseImageFloat32Atomics;
         features->sparseImageFloat32AtomicAdd = pdevice->supported_features.sparseImageFloat32AtomicAdd;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: {
         VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *features = ext;
         features->shaderBufferFloat16Atomics = pdevice->supported_features.shaderBufferFloat16Atomics;
         features->shaderBufferFloat16AtomicAdd = pdevice->supported_features.shaderBufferFloat16AtomicAdd;
         features->shaderBufferFloat16AtomicMinMax = pdevice->supported_features.shaderBufferFloat16AtomicMinMax;
         features->shaderBufferFloat32AtomicMinMax = pdevice->supported_features.shaderBufferFloat32AtomicMinMax;
         features->shaderBufferFloat64AtomicMinMax = pdevice->supported_features.shaderBufferFloat64AtomicMinMax;
         features->shaderSharedFloat16Atomics = pdevice->supported_features.shaderSharedFloat16Atomics;
         features->shaderSharedFloat16AtomicAdd = pdevice->supported_features.shaderSharedFloat16AtomicAdd;
         features->shaderSharedFloat16AtomicMinMax = pdevice->supported_features.shaderSharedFloat16AtomicMinMax;
         features->shaderSharedFloat32AtomicMinMax = pdevice->supported_features.shaderSharedFloat32AtomicMinMax;
         features->shaderSharedFloat64AtomicMinMax = pdevice->supported_features.shaderSharedFloat64AtomicMinMax;
         features->shaderImageFloat32AtomicMinMax = pdevice->supported_features.shaderImageFloat32AtomicMinMax;
         features->sparseImageFloat32AtomicMinMax = pdevice->supported_features.sparseImageFloat32AtomicMinMax;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES: {
         VkPhysicalDeviceVertexAttributeDivisorFeatures *features = ext;
         features->vertexAttributeInstanceRateDivisor = pdevice->supported_features.vertexAttributeInstanceRateDivisor;
         features->vertexAttributeInstanceRateZeroDivisor = pdevice->supported_features.vertexAttributeInstanceRateZeroDivisor;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
         VkPhysicalDeviceASTCDecodeFeaturesEXT *features = ext;
         features->decodeModeSharedExponent = pdevice->supported_features.decodeModeSharedExponent;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
         VkPhysicalDeviceTransformFeedbackFeaturesEXT *features = ext;
         features->transformFeedback = pdevice->supported_features.transformFeedback;
         features->geometryStreams = pdevice->supported_features.geometryStreams;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
         VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *features = ext;
         features->representativeFragmentTest = pdevice->supported_features.representativeFragmentTest;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
         VkPhysicalDeviceExclusiveScissorFeaturesNV *features = ext;
         features->exclusiveScissor = pdevice->supported_features.exclusiveScissor;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
         VkPhysicalDeviceCornerSampledImageFeaturesNV *features = ext;
         features->cornerSampledImage = pdevice->supported_features.cornerSampledImage;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR: {
         VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR *features = ext;
         features->computeDerivativeGroupQuads = pdevice->supported_features.computeDerivativeGroupQuads;
         features->computeDerivativeGroupLinear = pdevice->supported_features.computeDerivativeGroupLinear;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
         VkPhysicalDeviceShaderImageFootprintFeaturesNV *features = ext;
         features->imageFootprint = pdevice->supported_features.imageFootprint;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
         VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *features = ext;
         features->dedicatedAllocationImageAliasing = pdevice->supported_features.dedicatedAllocationImageAliasing;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR: {
         VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR *features = ext;
         features->indirectMemoryCopy = pdevice->supported_features.indirectMemoryCopy;
         features->indirectMemoryToImageCopy = pdevice->supported_features.indirectMemoryToImageCopy;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: {
         VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *features = ext;
         features->indirectCopy = pdevice->supported_features.indirectCopy;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT: {
         VkPhysicalDeviceMemoryDecompressionFeaturesEXT *features = ext;
         features->memoryDecompression = pdevice->supported_features.memoryDecompression;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
         VkPhysicalDeviceShadingRateImageFeaturesNV *features = ext;
         features->shadingRateImage = pdevice->supported_features.shadingRateImage;
         features->shadingRateCoarseSampleOrder = pdevice->supported_features.shadingRateCoarseSampleOrder;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: {
         VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *features = ext;
         features->invocationMask = pdevice->supported_features.invocationMask;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
         VkPhysicalDeviceMeshShaderFeaturesNV *features = ext;
         features->taskShader = pdevice->supported_features.taskShaderNV;
         features->meshShader = pdevice->supported_features.meshShaderNV;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: {
         VkPhysicalDeviceMeshShaderFeaturesEXT *features = ext;
         features->taskShader = pdevice->supported_features.taskShader;
         features->meshShader = pdevice->supported_features.meshShader;
         features->multiviewMeshShader = pdevice->supported_features.multiviewMeshShader;
         features->primitiveFragmentShadingRateMeshShader = pdevice->supported_features.primitiveFragmentShadingRateMeshShader;
         features->meshShaderQueries = pdevice->supported_features.meshShaderQueries;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: {
         VkPhysicalDeviceAccelerationStructureFeaturesKHR *features = ext;
         features->accelerationStructure = pdevice->supported_features.accelerationStructure;
         features->accelerationStructureCaptureReplay = pdevice->supported_features.accelerationStructureCaptureReplay;
         features->accelerationStructureIndirectBuild = pdevice->supported_features.accelerationStructureIndirectBuild;
         features->accelerationStructureHostCommands = pdevice->supported_features.accelerationStructureHostCommands;
         features->descriptorBindingAccelerationStructureUpdateAfterBind = pdevice->supported_features.descriptorBindingAccelerationStructureUpdateAfterBind;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: {
         VkPhysicalDeviceRayTracingPipelineFeaturesKHR *features = ext;
         features->rayTracingPipeline = pdevice->supported_features.rayTracingPipeline;
         features->rayTracingPipelineShaderGroupHandleCaptureReplay = pdevice->supported_features.rayTracingPipelineShaderGroupHandleCaptureReplay;
         features->rayTracingPipelineShaderGroupHandleCaptureReplayMixed = pdevice->supported_features.rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
         features->rayTracingPipelineTraceRaysIndirect = pdevice->supported_features.rayTracingPipelineTraceRaysIndirect;
         features->rayTraversalPrimitiveCulling = pdevice->supported_features.rayTraversalPrimitiveCulling;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: {
         VkPhysicalDeviceRayQueryFeaturesKHR *features = ext;
         features->rayQuery = pdevice->supported_features.rayQuery;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: {
         VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *features = ext;
         features->rayTracingMaintenance1 = pdevice->supported_features.rayTracingMaintenance1;
         features->rayTracingPipelineTraceRaysIndirect2 = pdevice->supported_features.rayTracingPipelineTraceRaysIndirect2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
         VkPhysicalDeviceFragmentDensityMapFeaturesEXT *features = ext;
         features->fragmentDensityMap = pdevice->supported_features.fragmentDensityMap;
         features->fragmentDensityMapDynamic = pdevice->supported_features.fragmentDensityMapDynamic;
         features->fragmentDensityMapNonSubsampledImages = pdevice->supported_features.fragmentDensityMapNonSubsampledImages;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
         VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *features = ext;
         features->fragmentDensityMapDeferred = pdevice->supported_features.fragmentDensityMapDeferred;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT: {
         VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT *features = ext;
         features->fragmentDensityMapOffset = pdevice->supported_features.fragmentDensityMapOffset;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
         VkPhysicalDeviceScalarBlockLayoutFeatures *features = ext;
         features->scalarBlockLayout = pdevice->supported_features.scalarBlockLayout;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
         VkPhysicalDeviceUniformBufferStandardLayoutFeatures *features = ext;
         features->uniformBufferStandardLayout = pdevice->supported_features.uniformBufferStandardLayout;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
         VkPhysicalDeviceDepthClipEnableFeaturesEXT *features = ext;
         features->depthClipEnable = pdevice->supported_features.depthClipEnable;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
         VkPhysicalDeviceMemoryPriorityFeaturesEXT *features = ext;
         features->memoryPriority = pdevice->supported_features.memoryPriority;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: {
         VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *features = ext;
         features->pageableDeviceLocalMemory = pdevice->supported_features.pageableDeviceLocalMemory;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
         VkPhysicalDeviceBufferDeviceAddressFeatures *features = ext;
         features->bufferDeviceAddress = pdevice->supported_features.bufferDeviceAddress;
         features->bufferDeviceAddressCaptureReplay = pdevice->supported_features.bufferDeviceAddressCaptureReplay;
         features->bufferDeviceAddressMultiDevice = pdevice->supported_features.bufferDeviceAddressMultiDevice;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
         VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *features = ext;
         features->bufferDeviceAddress = pdevice->supported_features.bufferDeviceAddress;
         features->bufferDeviceAddressCaptureReplay = pdevice->supported_features.bufferDeviceAddressCaptureReplayEXT;
         features->bufferDeviceAddressMultiDevice = pdevice->supported_features.bufferDeviceAddressMultiDevice;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
         VkPhysicalDeviceImagelessFramebufferFeatures *features = ext;
         features->imagelessFramebuffer = pdevice->supported_features.imagelessFramebuffer;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: {
         VkPhysicalDeviceTextureCompressionASTCHDRFeatures *features = ext;
         features->textureCompressionASTC_HDR = pdevice->supported_features.textureCompressionASTC_HDR;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
         VkPhysicalDeviceCooperativeMatrixFeaturesNV *features = ext;
         features->cooperativeMatrix = pdevice->supported_features.cooperativeMatrixNV;
         features->cooperativeMatrixRobustBufferAccess = pdevice->supported_features.cooperativeMatrixRobustBufferAccessNV;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
         VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *features = ext;
         features->ycbcrImageArrays = pdevice->supported_features.ycbcrImageArrays;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: {
         VkPhysicalDevicePresentBarrierFeaturesNV *features = ext;
         features->presentBarrier = pdevice->supported_features.presentBarrier;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
         VkPhysicalDevicePerformanceQueryFeaturesKHR *features = ext;
         features->performanceCounterQueryPools = pdevice->supported_features.performanceCounterQueryPools;
         features->performanceCounterMultipleQueryPools = pdevice->supported_features.performanceCounterMultipleQueryPools;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
         VkPhysicalDeviceCoverageReductionModeFeaturesNV *features = ext;
         features->coverageReductionMode = pdevice->supported_features.coverageReductionMode;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
         VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *features = ext;
         features->shaderIntegerFunctions2 = pdevice->supported_features.shaderIntegerFunctions2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
         VkPhysicalDeviceShaderClockFeaturesKHR *features = ext;
         features->shaderSubgroupClock = pdevice->supported_features.shaderSubgroupClock;
         features->shaderDeviceClock = pdevice->supported_features.shaderDeviceClock;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES: {
         VkPhysicalDeviceIndexTypeUint8Features *features = ext;
         features->indexTypeUint8 = pdevice->supported_features.indexTypeUint8;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
         VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *features = ext;
         features->shaderSMBuiltins = pdevice->supported_features.shaderSMBuiltins;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
         VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *features = ext;
         features->fragmentShaderSampleInterlock = pdevice->supported_features.fragmentShaderSampleInterlock;
         features->fragmentShaderPixelInterlock = pdevice->supported_features.fragmentShaderPixelInterlock;
         features->fragmentShaderShadingRateInterlock = pdevice->supported_features.fragmentShaderShadingRateInterlock;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
         VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *features = ext;
         features->separateDepthStencilLayouts = pdevice->supported_features.separateDepthStencilLayouts;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: {
         VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *features = ext;
         features->primitiveTopologyListRestart = pdevice->supported_features.primitiveTopologyListRestart;
         features->primitiveTopologyPatchListRestart = pdevice->supported_features.primitiveTopologyPatchListRestart;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
         VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *features = ext;
         features->pipelineExecutableInfo = pdevice->supported_features.pipelineExecutableInfo;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: {
         VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *features = ext;
         features->shaderDemoteToHelperInvocation = pdevice->supported_features.shaderDemoteToHelperInvocation;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
         VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *features = ext;
         features->texelBufferAlignment = pdevice->supported_features.texelBufferAlignment;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: {
         VkPhysicalDeviceSubgroupSizeControlFeatures *features = ext;
         features->subgroupSizeControl = pdevice->supported_features.subgroupSizeControl;
         features->computeFullSubgroups = pdevice->supported_features.computeFullSubgroups;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES: {
         VkPhysicalDeviceLineRasterizationFeatures *features = ext;
         features->rectangularLines = pdevice->supported_features.rectangularLines;
         features->bresenhamLines = pdevice->supported_features.bresenhamLines;
         features->smoothLines = pdevice->supported_features.smoothLines;
         features->stippledRectangularLines = pdevice->supported_features.stippledRectangularLines;
         features->stippledBresenhamLines = pdevice->supported_features.stippledBresenhamLines;
         features->stippledSmoothLines = pdevice->supported_features.stippledSmoothLines;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: {
         VkPhysicalDevicePipelineCreationCacheControlFeatures *features = ext;
         features->pipelineCreationCacheControl = pdevice->supported_features.pipelineCreationCacheControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
         VkPhysicalDeviceVulkan11Features *features = ext;
         features->storageBuffer16BitAccess = pdevice->supported_features.storageBuffer16BitAccess;
         features->uniformAndStorageBuffer16BitAccess = pdevice->supported_features.uniformAndStorageBuffer16BitAccess;
         features->storagePushConstant16 = pdevice->supported_features.storagePushConstant16;
         features->storageInputOutput16 = pdevice->supported_features.storageInputOutput16;
         features->multiview = pdevice->supported_features.multiview;
         features->multiviewGeometryShader = pdevice->supported_features.multiviewGeometryShader;
         features->multiviewTessellationShader = pdevice->supported_features.multiviewTessellationShader;
         features->variablePointersStorageBuffer = pdevice->supported_features.variablePointersStorageBuffer;
         features->variablePointers = pdevice->supported_features.variablePointers;
         features->protectedMemory = pdevice->supported_features.protectedMemory;
         features->samplerYcbcrConversion = pdevice->supported_features.samplerYcbcrConversion;
         features->shaderDrawParameters = pdevice->supported_features.shaderDrawParameters;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
         VkPhysicalDeviceVulkan12Features *features = ext;
         features->samplerMirrorClampToEdge = pdevice->supported_features.samplerMirrorClampToEdge;
         features->drawIndirectCount = pdevice->supported_features.drawIndirectCount;
         features->storageBuffer8BitAccess = pdevice->supported_features.storageBuffer8BitAccess;
         features->uniformAndStorageBuffer8BitAccess = pdevice->supported_features.uniformAndStorageBuffer8BitAccess;
         features->storagePushConstant8 = pdevice->supported_features.storagePushConstant8;
         features->shaderBufferInt64Atomics = pdevice->supported_features.shaderBufferInt64Atomics;
         features->shaderSharedInt64Atomics = pdevice->supported_features.shaderSharedInt64Atomics;
         features->shaderFloat16 = pdevice->supported_features.shaderFloat16;
         features->shaderInt8 = pdevice->supported_features.shaderInt8;
         features->descriptorIndexing = pdevice->supported_features.descriptorIndexing;
         features->shaderInputAttachmentArrayDynamicIndexing = pdevice->supported_features.shaderInputAttachmentArrayDynamicIndexing;
         features->shaderUniformTexelBufferArrayDynamicIndexing = pdevice->supported_features.shaderUniformTexelBufferArrayDynamicIndexing;
         features->shaderStorageTexelBufferArrayDynamicIndexing = pdevice->supported_features.shaderStorageTexelBufferArrayDynamicIndexing;
         features->shaderUniformBufferArrayNonUniformIndexing = pdevice->supported_features.shaderUniformBufferArrayNonUniformIndexing;
         features->shaderSampledImageArrayNonUniformIndexing = pdevice->supported_features.shaderSampledImageArrayNonUniformIndexing;
         features->shaderStorageBufferArrayNonUniformIndexing = pdevice->supported_features.shaderStorageBufferArrayNonUniformIndexing;
         features->shaderStorageImageArrayNonUniformIndexing = pdevice->supported_features.shaderStorageImageArrayNonUniformIndexing;
         features->shaderInputAttachmentArrayNonUniformIndexing = pdevice->supported_features.shaderInputAttachmentArrayNonUniformIndexing;
         features->shaderUniformTexelBufferArrayNonUniformIndexing = pdevice->supported_features.shaderUniformTexelBufferArrayNonUniformIndexing;
         features->shaderStorageTexelBufferArrayNonUniformIndexing = pdevice->supported_features.shaderStorageTexelBufferArrayNonUniformIndexing;
         features->descriptorBindingUniformBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingUniformBufferUpdateAfterBind;
         features->descriptorBindingSampledImageUpdateAfterBind = pdevice->supported_features.descriptorBindingSampledImageUpdateAfterBind;
         features->descriptorBindingStorageImageUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageImageUpdateAfterBind;
         features->descriptorBindingStorageBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageBufferUpdateAfterBind;
         features->descriptorBindingUniformTexelBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingUniformTexelBufferUpdateAfterBind;
         features->descriptorBindingStorageTexelBufferUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageTexelBufferUpdateAfterBind;
         features->descriptorBindingUpdateUnusedWhilePending = pdevice->supported_features.descriptorBindingUpdateUnusedWhilePending;
         features->descriptorBindingPartiallyBound = pdevice->supported_features.descriptorBindingPartiallyBound;
         features->descriptorBindingVariableDescriptorCount = pdevice->supported_features.descriptorBindingVariableDescriptorCount;
         features->runtimeDescriptorArray = pdevice->supported_features.runtimeDescriptorArray;
         features->samplerFilterMinmax = pdevice->supported_features.samplerFilterMinmax;
         features->scalarBlockLayout = pdevice->supported_features.scalarBlockLayout;
         features->imagelessFramebuffer = pdevice->supported_features.imagelessFramebuffer;
         features->uniformBufferStandardLayout = pdevice->supported_features.uniformBufferStandardLayout;
         features->shaderSubgroupExtendedTypes = pdevice->supported_features.shaderSubgroupExtendedTypes;
         features->separateDepthStencilLayouts = pdevice->supported_features.separateDepthStencilLayouts;
         features->hostQueryReset = pdevice->supported_features.hostQueryReset;
         features->timelineSemaphore = pdevice->supported_features.timelineSemaphore;
         features->bufferDeviceAddress = pdevice->supported_features.bufferDeviceAddress;
         features->bufferDeviceAddressCaptureReplay = pdevice->supported_features.bufferDeviceAddressCaptureReplay;
         features->bufferDeviceAddressMultiDevice = pdevice->supported_features.bufferDeviceAddressMultiDevice;
         features->vulkanMemoryModel = pdevice->supported_features.vulkanMemoryModel;
         features->vulkanMemoryModelDeviceScope = pdevice->supported_features.vulkanMemoryModelDeviceScope;
         features->vulkanMemoryModelAvailabilityVisibilityChains = pdevice->supported_features.vulkanMemoryModelAvailabilityVisibilityChains;
         features->shaderOutputViewportIndex = pdevice->supported_features.shaderOutputViewportIndex;
         features->shaderOutputLayer = pdevice->supported_features.shaderOutputLayer;
         features->subgroupBroadcastDynamicId = pdevice->supported_features.subgroupBroadcastDynamicId;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
         VkPhysicalDeviceVulkan13Features *features = ext;
         features->robustImageAccess = pdevice->supported_features.robustImageAccess;
         features->inlineUniformBlock = pdevice->supported_features.inlineUniformBlock;
         features->descriptorBindingInlineUniformBlockUpdateAfterBind = pdevice->supported_features.descriptorBindingInlineUniformBlockUpdateAfterBind;
         features->pipelineCreationCacheControl = pdevice->supported_features.pipelineCreationCacheControl;
         features->privateData = pdevice->supported_features.privateData;
         features->shaderDemoteToHelperInvocation = pdevice->supported_features.shaderDemoteToHelperInvocation;
         features->shaderTerminateInvocation = pdevice->supported_features.shaderTerminateInvocation;
         features->subgroupSizeControl = pdevice->supported_features.subgroupSizeControl;
         features->computeFullSubgroups = pdevice->supported_features.computeFullSubgroups;
         features->synchronization2 = pdevice->supported_features.synchronization2;
         features->textureCompressionASTC_HDR = pdevice->supported_features.textureCompressionASTC_HDR;
         features->shaderZeroInitializeWorkgroupMemory = pdevice->supported_features.shaderZeroInitializeWorkgroupMemory;
         features->dynamicRendering = pdevice->supported_features.dynamicRendering;
         features->shaderIntegerDotProduct = pdevice->supported_features.shaderIntegerDotProduct;
         features->maintenance4 = pdevice->supported_features.maintenance4;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES: {
         VkPhysicalDeviceVulkan14Features *features = ext;
         features->globalPriorityQuery = pdevice->supported_features.globalPriorityQuery;
         features->shaderSubgroupRotate = pdevice->supported_features.shaderSubgroupRotate;
         features->shaderSubgroupRotateClustered = pdevice->supported_features.shaderSubgroupRotateClustered;
         features->shaderFloatControls2 = pdevice->supported_features.shaderFloatControls2;
         features->shaderExpectAssume = pdevice->supported_features.shaderExpectAssume;
         features->rectangularLines = pdevice->supported_features.rectangularLines;
         features->bresenhamLines = pdevice->supported_features.bresenhamLines;
         features->smoothLines = pdevice->supported_features.smoothLines;
         features->stippledRectangularLines = pdevice->supported_features.stippledRectangularLines;
         features->stippledBresenhamLines = pdevice->supported_features.stippledBresenhamLines;
         features->stippledSmoothLines = pdevice->supported_features.stippledSmoothLines;
         features->vertexAttributeInstanceRateDivisor = pdevice->supported_features.vertexAttributeInstanceRateDivisor;
         features->vertexAttributeInstanceRateZeroDivisor = pdevice->supported_features.vertexAttributeInstanceRateZeroDivisor;
         features->indexTypeUint8 = pdevice->supported_features.indexTypeUint8;
         features->dynamicRenderingLocalRead = pdevice->supported_features.dynamicRenderingLocalRead;
         features->maintenance5 = pdevice->supported_features.maintenance5;
         features->maintenance6 = pdevice->supported_features.maintenance6;
         features->pipelineProtectedAccess = pdevice->supported_features.pipelineProtectedAccess;
         features->pipelineRobustness = pdevice->supported_features.pipelineRobustness;
         features->hostImageCopy = pdevice->supported_features.hostImageCopy;
         features->pushDescriptor = pdevice->supported_features.pushDescriptor;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
         VkPhysicalDeviceCoherentMemoryFeaturesAMD *features = ext;
         features->deviceCoherentMemory = pdevice->supported_features.deviceCoherentMemory;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GPA_FEATURES_AMD: {
         VkPhysicalDeviceGpaFeaturesAMD *features = ext;
         features->perfCounters = pdevice->supported_features.perfCounters;
         features->streamingPerfCounters = pdevice->supported_features.streamingPerfCounters;
         features->sqThreadTracing = pdevice->supported_features.sqThreadTracing;
         features->clockModes = pdevice->supported_features.clockModes;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
         VkPhysicalDeviceCustomBorderColorFeaturesEXT *features = ext;
         features->customBorderColors = pdevice->supported_features.customBorderColors;
         features->customBorderColorWithoutFormat = pdevice->supported_features.customBorderColorWithoutFormat;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: {
         VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *features = ext;
         features->borderColorSwizzle = pdevice->supported_features.borderColorSwizzle;
         features->borderColorSwizzleFromImage = pdevice->supported_features.borderColorSwizzleFromImage;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
         VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *features = ext;
         features->extendedDynamicState = pdevice->supported_features.extendedDynamicState;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: {
         VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *features = ext;
         features->extendedDynamicState2 = pdevice->supported_features.extendedDynamicState2;
         features->extendedDynamicState2LogicOp = pdevice->supported_features.extendedDynamicState2LogicOp;
         features->extendedDynamicState2PatchControlPoints = pdevice->supported_features.extendedDynamicState2PatchControlPoints;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: {
         VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *features = ext;
         features->extendedDynamicState3TessellationDomainOrigin = pdevice->supported_features.extendedDynamicState3TessellationDomainOrigin;
         features->extendedDynamicState3DepthClampEnable = pdevice->supported_features.extendedDynamicState3DepthClampEnable;
         features->extendedDynamicState3PolygonMode = pdevice->supported_features.extendedDynamicState3PolygonMode;
         features->extendedDynamicState3RasterizationSamples = pdevice->supported_features.extendedDynamicState3RasterizationSamples;
         features->extendedDynamicState3SampleMask = pdevice->supported_features.extendedDynamicState3SampleMask;
         features->extendedDynamicState3AlphaToCoverageEnable = pdevice->supported_features.extendedDynamicState3AlphaToCoverageEnable;
         features->extendedDynamicState3AlphaToOneEnable = pdevice->supported_features.extendedDynamicState3AlphaToOneEnable;
         features->extendedDynamicState3LogicOpEnable = pdevice->supported_features.extendedDynamicState3LogicOpEnable;
         features->extendedDynamicState3ColorBlendEnable = pdevice->supported_features.extendedDynamicState3ColorBlendEnable;
         features->extendedDynamicState3ColorBlendEquation = pdevice->supported_features.extendedDynamicState3ColorBlendEquation;
         features->extendedDynamicState3ColorWriteMask = pdevice->supported_features.extendedDynamicState3ColorWriteMask;
         features->extendedDynamicState3RasterizationStream = pdevice->supported_features.extendedDynamicState3RasterizationStream;
         features->extendedDynamicState3ConservativeRasterizationMode = pdevice->supported_features.extendedDynamicState3ConservativeRasterizationMode;
         features->extendedDynamicState3ExtraPrimitiveOverestimationSize = pdevice->supported_features.extendedDynamicState3ExtraPrimitiveOverestimationSize;
         features->extendedDynamicState3DepthClipEnable = pdevice->supported_features.extendedDynamicState3DepthClipEnable;
         features->extendedDynamicState3SampleLocationsEnable = pdevice->supported_features.extendedDynamicState3SampleLocationsEnable;
         features->extendedDynamicState3ColorBlendAdvanced = pdevice->supported_features.extendedDynamicState3ColorBlendAdvanced;
         features->extendedDynamicState3ProvokingVertexMode = pdevice->supported_features.extendedDynamicState3ProvokingVertexMode;
         features->extendedDynamicState3LineRasterizationMode = pdevice->supported_features.extendedDynamicState3LineRasterizationMode;
         features->extendedDynamicState3LineStippleEnable = pdevice->supported_features.extendedDynamicState3LineStippleEnable;
         features->extendedDynamicState3DepthClipNegativeOneToOne = pdevice->supported_features.extendedDynamicState3DepthClipNegativeOneToOne;
         features->extendedDynamicState3ViewportWScalingEnable = pdevice->supported_features.extendedDynamicState3ViewportWScalingEnable;
         features->extendedDynamicState3ViewportSwizzle = pdevice->supported_features.extendedDynamicState3ViewportSwizzle;
         features->extendedDynamicState3CoverageToColorEnable = pdevice->supported_features.extendedDynamicState3CoverageToColorEnable;
         features->extendedDynamicState3CoverageToColorLocation = pdevice->supported_features.extendedDynamicState3CoverageToColorLocation;
         features->extendedDynamicState3CoverageModulationMode = pdevice->supported_features.extendedDynamicState3CoverageModulationMode;
         features->extendedDynamicState3CoverageModulationTableEnable = pdevice->supported_features.extendedDynamicState3CoverageModulationTableEnable;
         features->extendedDynamicState3CoverageModulationTable = pdevice->supported_features.extendedDynamicState3CoverageModulationTable;
         features->extendedDynamicState3CoverageReductionMode = pdevice->supported_features.extendedDynamicState3CoverageReductionMode;
         features->extendedDynamicState3RepresentativeFragmentTestEnable = pdevice->supported_features.extendedDynamicState3RepresentativeFragmentTestEnable;
         features->extendedDynamicState3ShadingRateImageEnable = pdevice->supported_features.extendedDynamicState3ShadingRateImageEnable;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_FLAGS_FEATURES_KHR: {
         VkPhysicalDeviceExtendedFlagsFeaturesKHR *features = ext;
         features->extendedFlags = pdevice->supported_features.extendedFlags;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV: {
         VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV *features = ext;
         features->partitionedAccelerationStructure = pdevice->supported_features.partitionedAccelerationStructure;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
         VkPhysicalDeviceDiagnosticsConfigFeaturesNV *features = ext;
         features->diagnosticsConfig = pdevice->supported_features.diagnosticsConfig;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: {
         VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *features = ext;
         features->shaderZeroInitializeWorkgroupMemory = pdevice->supported_features.shaderZeroInitializeWorkgroupMemory;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: {
         VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *features = ext;
         features->shaderSubgroupUniformControlFlow = pdevice->supported_features.shaderSubgroupUniformControlFlow;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR: {
         VkPhysicalDeviceRobustness2FeaturesKHR *features = ext;
         features->robustBufferAccess2 = pdevice->supported_features.robustBufferAccess2;
         features->robustImageAccess2 = pdevice->supported_features.robustImageAccess2;
         features->nullDescriptor = pdevice->supported_features.nullDescriptor;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: {
         VkPhysicalDeviceImageRobustnessFeatures *features = ext;
         features->robustImageAccess = pdevice->supported_features.robustImageAccess;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: {
         VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *features = ext;
         features->workgroupMemoryExplicitLayout = pdevice->supported_features.workgroupMemoryExplicitLayout;
         features->workgroupMemoryExplicitLayoutScalarBlockLayout = pdevice->supported_features.workgroupMemoryExplicitLayoutScalarBlockLayout;
         features->workgroupMemoryExplicitLayout8BitAccess = pdevice->supported_features.workgroupMemoryExplicitLayout8BitAccess;
         features->workgroupMemoryExplicitLayout16BitAccess = pdevice->supported_features.workgroupMemoryExplicitLayout16BitAccess;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: {
         VkPhysicalDevice4444FormatsFeaturesEXT *features = ext;
         features->formatA4R4G4B4 = pdevice->supported_features.formatA4R4G4B4;
         features->formatA4B4G4R4 = pdevice->supported_features.formatA4B4G4R4;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: {
         VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *features = ext;
         features->subpassShading = pdevice->supported_features.subpassShading;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: {
         VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *features = ext;
         features->clustercullingShader = pdevice->supported_features.clustercullingShader;
         features->multiviewClusterCullingShader = pdevice->supported_features.multiviewClusterCullingShader;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: {
         VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *features = ext;
         features->shaderImageInt64Atomics = pdevice->supported_features.shaderImageInt64Atomics;
         features->sparseImageInt64Atomics = pdevice->supported_features.sparseImageInt64Atomics;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: {
         VkPhysicalDeviceFragmentShadingRateFeaturesKHR *features = ext;
         features->pipelineFragmentShadingRate = pdevice->supported_features.pipelineFragmentShadingRate;
         features->primitiveFragmentShadingRate = pdevice->supported_features.primitiveFragmentShadingRate;
         features->attachmentFragmentShadingRate = pdevice->supported_features.attachmentFragmentShadingRate;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: {
         VkPhysicalDeviceShaderTerminateInvocationFeatures *features = ext;
         features->shaderTerminateInvocation = pdevice->supported_features.shaderTerminateInvocation;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: {
         VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *features = ext;
         features->fragmentShadingRateEnums = pdevice->supported_features.fragmentShadingRateEnums;
         features->supersampleFragmentShadingRates = pdevice->supported_features.supersampleFragmentShadingRates;
         features->noInvocationFragmentShadingRates = pdevice->supported_features.noInvocationFragmentShadingRates;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: {
         VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *features = ext;
         features->image2DViewOf3D = pdevice->supported_features.image2DViewOf3D;
         features->sampler2DViewOf3D = pdevice->supported_features.sampler2DViewOf3D;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: {
         VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *features = ext;
         features->imageSlicedViewOf3D = pdevice->supported_features.imageSlicedViewOf3D;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: {
         VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *features = ext;
         features->attachmentFeedbackLoopDynamicState = pdevice->supported_features.attachmentFeedbackLoopDynamicState;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT: {
         VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *features = ext;
         features->legacyVertexAttributes = pdevice->supported_features.legacyVertexAttributes;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: {
         VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *features = ext;
         features->mutableDescriptorType = pdevice->supported_features.mutableDescriptorType;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: {
         VkPhysicalDeviceDepthClipControlFeaturesEXT *features = ext;
         features->depthClipControl = pdevice->supported_features.depthClipControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT: {
         VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT *features = ext;
         features->zeroInitializeDeviceMemory = pdevice->supported_features.zeroInitializeDeviceMemory;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_RESOLVE_FEATURES_EXT: {
         VkPhysicalDeviceCustomResolveFeaturesEXT *features = ext;
         features->customResolve = pdevice->supported_features.customResolve;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT: {
         VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT *features = ext;
         features->deviceGeneratedCommands = pdevice->supported_features.deviceGeneratedCommands;
         features->dynamicGeneratedPipelineLayout = pdevice->supported_features.dynamicGeneratedPipelineLayout;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT: {
         VkPhysicalDeviceDepthClampControlFeaturesEXT *features = ext;
         features->depthClampControl = pdevice->supported_features.depthClampControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: {
         VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *features = ext;
         features->vertexInputDynamicState = pdevice->supported_features.vertexInputDynamicState;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: {
         VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *features = ext;
         features->externalMemoryRDMA = pdevice->supported_features.externalMemoryRDMA;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR: {
         VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *features = ext;
         features->shaderRelaxedExtendedInstruction = pdevice->supported_features.shaderRelaxedExtendedInstruction;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: {
         VkPhysicalDeviceColorWriteEnableFeaturesEXT *features = ext;
         features->colorWriteEnable = pdevice->supported_features.colorWriteEnable;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: {
         VkPhysicalDeviceSynchronization2Features *features = ext;
         features->synchronization2 = pdevice->supported_features.synchronization2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR: {
         VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR *features = ext;
         features->unifiedImageLayouts = pdevice->supported_features.unifiedImageLayouts;
         features->unifiedImageLayoutsVideo = pdevice->supported_features.unifiedImageLayoutsVideo;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES: {
         VkPhysicalDeviceHostImageCopyFeatures *features = ext;
         features->hostImageCopy = pdevice->supported_features.hostImageCopy;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: {
         VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *features = ext;
         features->primitivesGeneratedQuery = pdevice->supported_features.primitivesGeneratedQuery;
         features->primitivesGeneratedQueryWithRasterizerDiscard = pdevice->supported_features.primitivesGeneratedQueryWithRasterizerDiscard;
         features->primitivesGeneratedQueryWithNonZeroStreams = pdevice->supported_features.primitivesGeneratedQueryWithNonZeroStreams;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: {
         VkPhysicalDeviceLegacyDitheringFeaturesEXT *features = ext;
         features->legacyDithering = pdevice->supported_features.legacyDithering;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: {
         VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *features = ext;
         features->multisampledRenderToSingleSampled = pdevice->supported_features.multisampledRenderToSingleSampled;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SWAPCHAIN_FEATURES_EXT: {
         VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT *features = ext;
         features->multisampledRenderToSwapchain = pdevice->supported_features.multisampledRenderToSwapchain;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES: {
         VkPhysicalDevicePipelineProtectedAccessFeatures *features = ext;
         features->pipelineProtectedAccess = pdevice->supported_features.pipelineProtectedAccess;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR: {
         VkPhysicalDeviceVideoMaintenance1FeaturesKHR *features = ext;
         features->videoMaintenance1 = pdevice->supported_features.videoMaintenance1;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR: {
         VkPhysicalDeviceVideoMaintenance2FeaturesKHR *features = ext;
         features->videoMaintenance2 = pdevice->supported_features.videoMaintenance2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR: {
         VkPhysicalDeviceVideoDecodeVP9FeaturesKHR *features = ext;
         features->videoDecodeVP9 = pdevice->supported_features.videoDecodeVP9;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR: {
         VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR *features = ext;
         features->videoEncodeQuantizationMap = pdevice->supported_features.videoEncodeQuantizationMap;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_FEEDBACK_2_FEATURES_KHR: {
         VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR *features = ext;
         features->videoEncodeFeedback2 = pdevice->supported_features.videoEncodeFeedback2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR: {
         VkPhysicalDeviceVideoEncodeAV1FeaturesKHR *features = ext;
         features->videoEncodeAV1 = pdevice->supported_features.videoEncodeAV1;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: {
         VkPhysicalDeviceInheritedViewportScissorFeaturesNV *features = ext;
         features->inheritedViewportScissor2D = pdevice->supported_features.inheritedViewportScissor2D;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: {
         VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *features = ext;
         features->ycbcr2plane444Formats = pdevice->supported_features.ycbcr2plane444Formats;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: {
         VkPhysicalDeviceProvokingVertexFeaturesEXT *features = ext;
         features->provokingVertexLast = pdevice->supported_features.provokingVertexLast;
         features->transformFeedbackPreservesProvokingVertex = pdevice->supported_features.transformFeedbackPreservesProvokingVertex;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR: {
         VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR *features = ext;
         features->videoEncodeIntraRefresh = pdevice->supported_features.videoEncodeIntraRefresh;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: {
         VkPhysicalDeviceDescriptorBufferFeaturesEXT *features = ext;
         features->descriptorBuffer = pdevice->supported_features.descriptorBuffer;
         features->descriptorBufferCaptureReplay = pdevice->supported_features.descriptorBufferCaptureReplay;
         features->descriptorBufferImageLayoutIgnored = pdevice->supported_features.descriptorBufferImageLayoutIgnored;
         features->descriptorBufferPushDescriptors = pdevice->supported_features.descriptorBufferPushDescriptors;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: {
         VkPhysicalDeviceShaderIntegerDotProductFeatures *features = ext;
         features->shaderIntegerDotProduct = pdevice->supported_features.shaderIntegerDotProduct;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: {
         VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *features = ext;
         features->fragmentShaderBarycentric = pdevice->supported_features.fragmentShaderBarycentric;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR: {
         VkPhysicalDeviceShaderFmaFeaturesKHR *features = ext;
         features->shaderFmaFloat16 = pdevice->supported_features.shaderFmaFloat16;
         features->shaderFmaFloat32 = pdevice->supported_features.shaderFmaFloat32;
         features->shaderFmaFloat64 = pdevice->supported_features.shaderFmaFloat64;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: {
         VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *features = ext;
         features->rayTracingMotionBlur = pdevice->supported_features.rayTracingMotionBlur;
         features->rayTracingMotionBlurPipelineTraceRaysIndirect = pdevice->supported_features.rayTracingMotionBlurPipelineTraceRaysIndirect;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV: {
         VkPhysicalDeviceRayTracingValidationFeaturesNV *features = ext;
         features->rayTracingValidation = pdevice->supported_features.rayTracingValidation;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV: {
         VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV *features = ext;
         features->spheres = pdevice->supported_features.spheres;
         features->linearSweptSpheres = pdevice->supported_features.linearSweptSpheres;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: {
         VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *features = ext;
         features->formatRgba10x6WithoutYCbCrSampler = pdevice->supported_features.formatRgba10x6WithoutYCbCrSampler;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: {
         VkPhysicalDeviceDynamicRenderingFeatures *features = ext;
         features->dynamicRendering = pdevice->supported_features.dynamicRendering;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: {
         VkPhysicalDeviceImageViewMinLodFeaturesEXT *features = ext;
         features->minLod = pdevice->supported_features.minLod;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: {
         VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *features = ext;
         features->rasterizationOrderColorAttachmentAccess = pdevice->supported_features.rasterizationOrderColorAttachmentAccess;
         features->rasterizationOrderDepthAttachmentAccess = pdevice->supported_features.rasterizationOrderDepthAttachmentAccess;
         features->rasterizationOrderStencilAttachmentAccess = pdevice->supported_features.rasterizationOrderStencilAttachmentAccess;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: {
         VkPhysicalDeviceLinearColorAttachmentFeaturesNV *features = ext;
         features->linearColorAttachment = pdevice->supported_features.linearColorAttachment;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: {
         VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *features = ext;
         features->graphicsPipelineLibrary = pdevice->supported_features.graphicsPipelineLibrary;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR: {
         VkPhysicalDevicePipelineBinaryFeaturesKHR *features = ext;
         features->pipelineBinaries = pdevice->supported_features.pipelineBinaries;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_NEURAL_ACCELERATOR_STATISTICS_FEATURES_ARM: {
         VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM *features = ext;
         features->dataGraphNeuralAcceleratorStatistics = pdevice->supported_features.dataGraphNeuralAcceleratorStatistics;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: {
         VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *features = ext;
         features->descriptorSetHostMapping = pdevice->supported_features.descriptorSetHostMapping;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT: {
         VkPhysicalDeviceNestedCommandBufferFeaturesEXT *features = ext;
         features->nestedCommandBuffer = pdevice->supported_features.nestedCommandBuffer;
         features->nestedCommandBufferRendering = pdevice->supported_features.nestedCommandBufferRendering;
         features->nestedCommandBufferSimultaneousUse = pdevice->supported_features.nestedCommandBufferSimultaneousUse;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: {
         VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *features = ext;
         features->shaderModuleIdentifier = pdevice->supported_features.shaderModuleIdentifier;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: {
         VkPhysicalDeviceImageCompressionControlFeaturesEXT *features = ext;
         features->imageCompressionControl = pdevice->supported_features.imageCompressionControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: {
         VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *features = ext;
         features->imageCompressionControlSwapchain = pdevice->supported_features.imageCompressionControlSwapchain;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: {
         VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *features = ext;
         features->subpassMergeFeedback = pdevice->supported_features.subpassMergeFeedback;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_KHR: {
         VkPhysicalDeviceOpacityMicromapFeaturesKHR *features = ext;
         features->micromap = pdevice->supported_features.micromap;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: {
         VkPhysicalDeviceOpacityMicromapFeaturesEXT *features = ext;
         features->micromap = pdevice->supported_features.micromapEXT;
         features->micromapCaptureReplay = pdevice->supported_features.micromapCaptureReplay;
         features->micromapHostCommands = pdevice->supported_features.micromapHostCommands;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: {
         VkPhysicalDevicePipelinePropertiesFeaturesEXT *features = ext;
         features->pipelinePropertiesIdentifier = pdevice->supported_features.pipelinePropertiesIdentifier;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: {
         VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *features = ext;
         features->shaderEarlyAndLateFragmentTests = pdevice->supported_features.shaderEarlyAndLateFragmentTests;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: {
         VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *features = ext;
         features->nonSeamlessCubeMap = pdevice->supported_features.nonSeamlessCubeMap;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES: {
         VkPhysicalDevicePipelineRobustnessFeatures *features = ext;
         features->pipelineRobustness = pdevice->supported_features.pipelineRobustness;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MULTIPLE_WAIT_QUEUES_FEATURES_QCOM: {
         VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM *features = ext;
         features->shaderMultipleWaitQueues = pdevice->supported_features.shaderMultipleWaitQueues;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: {
         VkPhysicalDeviceImageProcessingFeaturesQCOM *features = ext;
         features->textureSampleWeighted = pdevice->supported_features.textureSampleWeighted;
         features->textureBoxFilter = pdevice->supported_features.textureBoxFilter;
         features->textureBlockMatch = pdevice->supported_features.textureBlockMatch;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: {
         VkPhysicalDeviceTilePropertiesFeaturesQCOM *features = ext;
         features->tileProperties = pdevice->supported_features.tileProperties;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: {
         VkPhysicalDeviceAmigoProfilingFeaturesSEC *features = ext;
         features->amigoProfiling = pdevice->supported_features.amigoProfiling;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: {
         VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *features = ext;
         features->attachmentFeedbackLoopLayout = pdevice->supported_features.attachmentFeedbackLoopLayout;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: {
         VkPhysicalDeviceAddressBindingReportFeaturesEXT *features = ext;
         features->reportAddressBinding = pdevice->supported_features.reportAddressBinding;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: {
         VkPhysicalDeviceOpticalFlowFeaturesNV *features = ext;
         features->opticalFlow = pdevice->supported_features.opticalFlow;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: {
         VkPhysicalDeviceFaultFeaturesEXT *features = ext;
         features->deviceFault = pdevice->supported_features.deviceFaultEXT;
         features->deviceFaultVendorBinary = pdevice->supported_features.deviceFaultVendorBinaryEXT;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_KHR: {
         VkPhysicalDeviceFaultFeaturesKHR *features = ext;
         features->deviceFault = pdevice->supported_features.deviceFault;
         features->deviceFaultVendorBinary = pdevice->supported_features.deviceFaultVendorBinary;
         features->deviceFaultReportMasked = pdevice->supported_features.deviceFaultReportMasked;
         features->deviceFaultDeviceLostOnMasked = pdevice->supported_features.deviceFaultDeviceLostOnMasked;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_KHR: {
         VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR *features = ext;
         features->pipelineLibraryGroupHandles = pdevice->supported_features.pipelineLibraryGroupHandles;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: {
         VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *features = ext;
         features->shaderCoreBuiltins = pdevice->supported_features.shaderCoreBuiltins;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: {
         VkPhysicalDeviceFrameBoundaryFeaturesEXT *features = ext;
         features->frameBoundary = pdevice->supported_features.frameBoundary;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: {
         VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *features = ext;
         features->dynamicRenderingUnusedAttachments = pdevice->supported_features.dynamicRenderingUnusedAttachments;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INTERNALLY_SYNCHRONIZED_QUEUES_FEATURES_KHR: {
         VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR *features = ext;
         features->internallySynchronizedQueues = pdevice->supported_features.internallySynchronizedQueues;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR: {
         VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR *features = ext;
         features->swapchainMaintenance1 = pdevice->supported_features.swapchainMaintenance1;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: {
         VkPhysicalDeviceDepthBiasControlFeaturesEXT *features = ext;
         features->depthBiasControl = pdevice->supported_features.depthBiasControl;
         features->leastRepresentableValueForceUnormRepresentation = pdevice->supported_features.leastRepresentableValueForceUnormRepresentation;
         features->floatRepresentation = pdevice->supported_features.floatRepresentation;
         features->depthBiasExact = pdevice->supported_features.depthBiasExact;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_EXT: {
         VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT *features = ext;
         features->rayTracingInvocationReorder = pdevice->supported_features.rayTracingInvocationReorder;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: {
         VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *features = ext;
         features->rayTracingInvocationReorder = pdevice->supported_features.rayTracingInvocationReorderNV;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV: {
         VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *features = ext;
         features->extendedSparseAddressSpace = pdevice->supported_features.extendedSparseAddressSpace;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: {
         VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *features = ext;
         features->multiviewPerViewViewports = pdevice->supported_features.multiviewPerViewViewports;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: {
         VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *features = ext;
         features->rayTracingPositionFetch = pdevice->supported_features.rayTracingPositionFetch;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: {
         VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *features = ext;
         features->multiviewPerViewRenderAreas = pdevice->supported_features.multiviewPerViewRenderAreas;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: {
         VkPhysicalDeviceShaderObjectFeaturesEXT *features = ext;
         features->shaderObject = pdevice->supported_features.shaderObject;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: {
         VkPhysicalDeviceShaderTileImageFeaturesEXT *features = ext;
         features->shaderTileImageColorReadAccess = pdevice->supported_features.shaderTileImageColorReadAccess;
         features->shaderTileImageDepthReadAccess = pdevice->supported_features.shaderTileImageDepthReadAccess;
         features->shaderTileImageStencilReadAccess = pdevice->supported_features.shaderTileImageStencilReadAccess;
         break;
      }

#ifdef VK_USE_PLATFORM_SCREEN_QNX
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: {
         VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *features = ext;
         features->screenBufferImport = pdevice->supported_features.screenBufferImport;
         break;
      }

#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: {
         VkPhysicalDeviceCooperativeMatrixFeaturesKHR *features = ext;
         features->cooperativeMatrix = pdevice->supported_features.cooperativeMatrix;
         features->cooperativeMatrixRobustBufferAccess = pdevice->supported_features.cooperativeMatrixRobustBufferAccess;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_CONVERSION_FEATURES_QCOM: {
         VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM *features = ext;
         features->cooperativeMatrixConversion = pdevice->supported_features.cooperativeMatrixConversion;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD: {
         VkPhysicalDeviceAntiLagFeaturesAMD *features = ext;
         features->antiLag = pdevice->supported_features.antiLag;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM: {
         VkPhysicalDeviceTileMemoryHeapFeaturesQCOM *features = ext;
         features->tileMemoryHeap = pdevice->supported_features.tileMemoryHeap;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: {
         VkPhysicalDeviceCubicClampFeaturesQCOM *features = ext;
         features->cubicRangeClamp = pdevice->supported_features.cubicRangeClamp;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: {
         VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *features = ext;
         features->ycbcrDegamma = pdevice->supported_features.ycbcrDegamma;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: {
         VkPhysicalDeviceCubicWeightsFeaturesQCOM *features = ext;
         features->selectableCubicWeights = pdevice->supported_features.selectableCubicWeights;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: {
         VkPhysicalDeviceImageProcessing2FeaturesQCOM *features = ext;
         features->textureBlockMatch2 = pdevice->supported_features.textureBlockMatch2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_3_FEATURES_QCOM: {
         VkPhysicalDeviceImageProcessing3FeaturesQCOM *features = ext;
         features->imageGatherLinear = pdevice->supported_features.imageGatherLinear;
         features->imageGatherExtendedModes = pdevice->supported_features.imageGatherExtendedModes;
         features->blockMatchExtendedClampToEdge = pdevice->supported_features.blockMatchExtendedClampToEdge;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: {
         VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *features = ext;
         features->descriptorPoolOverallocation = pdevice->supported_features.descriptorPoolOverallocation;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV: {
         VkPhysicalDevicePerStageDescriptorSetFeaturesNV *features = ext;
         features->perStageDescriptorSet = pdevice->supported_features.perStageDescriptorSet;
         features->dynamicPipelineLayout = pdevice->supported_features.dynamicPipelineLayout;
         break;
      }

#ifdef VK_USE_PLATFORM_ANDROID_KHR
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID: {
         VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *features = ext;
         features->externalFormatResolve = pdevice->supported_features.externalFormatResolve;
         break;
      }

#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM: {
         VkPhysicalDeviceSchedulingControlsFeaturesARM *features = ext;
         features->schedulingControls = pdevice->supported_features.schedulingControls;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG: {
         VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *features = ext;
         features->relaxedLineRasterization = pdevice->supported_features.relaxedLineRasterization;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM: {
         VkPhysicalDeviceRenderPassStripedFeaturesARM *features = ext;
         features->renderPassStriped = pdevice->supported_features.renderPassStriped;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM: {
         VkPhysicalDevicePipelineOpacityMicromapFeaturesARM *features = ext;
         features->pipelineOpacityMicromap = pdevice->supported_features.pipelineOpacityMicromap;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR: {
         VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *features = ext;
         features->shaderMaximalReconvergence = pdevice->supported_features.shaderMaximalReconvergence;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES: {
         VkPhysicalDeviceShaderSubgroupRotateFeatures *features = ext;
         features->shaderSubgroupRotate = pdevice->supported_features.shaderSubgroupRotate;
         features->shaderSubgroupRotateClustered = pdevice->supported_features.shaderSubgroupRotateClustered;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES: {
         VkPhysicalDeviceShaderExpectAssumeFeatures *features = ext;
         features->shaderExpectAssume = pdevice->supported_features.shaderExpectAssume;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES: {
         VkPhysicalDeviceShaderFloatControls2Features *features = ext;
         features->shaderFloatControls2 = pdevice->supported_features.shaderFloatControls2;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES: {
         VkPhysicalDeviceDynamicRenderingLocalReadFeatures *features = ext;
         features->dynamicRenderingLocalRead = pdevice->supported_features.dynamicRenderingLocalRead;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR: {
         VkPhysicalDeviceShaderQuadControlFeaturesKHR *features = ext;
         features->shaderQuadControl = pdevice->supported_features.shaderQuadControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV: {
         VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *features = ext;
         features->shaderFloat16VectorAtomics = pdevice->supported_features.shaderFloat16VectorAtomics;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT: {
         VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *features = ext;
         features->memoryMapPlaced = pdevice->supported_features.memoryMapPlaced;
         features->memoryMapRangePlaced = pdevice->supported_features.memoryMapRangePlaced;
         features->memoryUnmapReserve = pdevice->supported_features.memoryUnmapReserve;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR: {
         VkPhysicalDeviceShaderBfloat16FeaturesKHR *features = ext;
         features->shaderBFloat16Type = pdevice->supported_features.shaderBFloat16Type;
         features->shaderBFloat16DotProduct = pdevice->supported_features.shaderBFloat16DotProduct;
         features->shaderBFloat16CooperativeMatrix = pdevice->supported_features.shaderBFloat16CooperativeMatrix;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV: {
         VkPhysicalDeviceRawAccessChainsFeaturesNV *features = ext;
         features->shaderRawAccessChains = pdevice->supported_features.shaderRawAccessChains;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV: {
         VkPhysicalDeviceCommandBufferInheritanceFeaturesNV *features = ext;
         features->commandBufferInheritance = pdevice->supported_features.commandBufferInheritance;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA: {
         VkPhysicalDeviceImageAlignmentControlFeaturesMESA *features = ext;
         features->imageAlignmentControl = pdevice->supported_features.imageAlignmentControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT: {
         VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *features = ext;
         features->shaderReplicatedComposites = pdevice->supported_features.shaderReplicatedComposites;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR: {
         VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR *features = ext;
         features->presentModeFifoLatestReady = pdevice->supported_features.presentModeFifoLatestReady;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV: {
         VkPhysicalDeviceCooperativeMatrix2FeaturesNV *features = ext;
         features->cooperativeMatrixWorkgroupScope = pdevice->supported_features.cooperativeMatrixWorkgroupScope;
         features->cooperativeMatrixFlexibleDimensions = pdevice->supported_features.cooperativeMatrixFlexibleDimensions;
         features->cooperativeMatrixReductions = pdevice->supported_features.cooperativeMatrixReductionsNV;
         features->cooperativeMatrixConversions = pdevice->supported_features.cooperativeMatrixConversionsNV;
         features->cooperativeMatrixPerElementOperations = pdevice->supported_features.cooperativeMatrixPerElementOperationsNV;
         features->cooperativeMatrixTensorAddressing = pdevice->supported_features.cooperativeMatrixTensorAddressing;
         features->cooperativeMatrixBlockLoads = pdevice->supported_features.cooperativeMatrixBlockLoads;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_DECODE_VECTOR_FEATURES_NV: {
         VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV *features = ext;
         features->cooperativeMatrixDecodeVector = pdevice->supported_features.cooperativeMatrixDecodeVector;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI: {
         VkPhysicalDeviceHdrVividFeaturesHUAWEI *features = ext;
         features->hdrVivid = pdevice->supported_features.hdrVivid;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT: {
         VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT *features = ext;
         features->vertexAttributeRobustness = pdevice->supported_features.vertexAttributeRobustness;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR: {
         VkPhysicalDeviceDepthClampZeroOneFeaturesKHR *features = ext;
         features->depthClampZeroOne = pdevice->supported_features.depthClampZeroOne;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV: {
         VkPhysicalDeviceCooperativeVectorFeaturesNV *features = ext;
         features->cooperativeVector = pdevice->supported_features.cooperativeVector;
         features->cooperativeVectorTraining = pdevice->supported_features.cooperativeVectorTraining;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM: {
         VkPhysicalDeviceTileShadingFeaturesQCOM *features = ext;
         features->tileShading = pdevice->supported_features.tileShading;
         features->tileShadingFragmentStage = pdevice->supported_features.tileShadingFragmentStage;
         features->tileShadingColorAttachments = pdevice->supported_features.tileShadingColorAttachments;
         features->tileShadingDepthAttachments = pdevice->supported_features.tileShadingDepthAttachments;
         features->tileShadingStencilAttachments = pdevice->supported_features.tileShadingStencilAttachments;
         features->tileShadingInputAttachments = pdevice->supported_features.tileShadingInputAttachments;
         features->tileShadingSampledAttachments = pdevice->supported_features.tileShadingSampledAttachments;
         features->tileShadingPerTileDraw = pdevice->supported_features.tileShadingPerTileDraw;
         features->tileShadingPerTileDispatch = pdevice->supported_features.tileShadingPerTileDispatch;
         features->tileShadingDispatchTile = pdevice->supported_features.tileShadingDispatchTile;
         features->tileShadingApron = pdevice->supported_features.tileShadingApron;
         features->tileShadingAnisotropicApron = pdevice->supported_features.tileShadingAnisotropicApron;
         features->tileShadingAtomicOps = pdevice->supported_features.tileShadingAtomicOps;
         features->tileShadingImageProcessing = pdevice->supported_features.tileShadingImageProcessing;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE: {
         VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE *features = ext;
         features->fragmentDensityMapLayered = pdevice->supported_features.fragmentDensityMapLayered;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV: {
         VkPhysicalDevicePresentMeteringFeaturesNV *features = ext;
         features->presentMetering = pdevice->supported_features.presentMetering;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT: {
         VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT *features = ext;
         features->shaderUniformBufferUnsizedArray = pdevice->supported_features.shaderUniformBufferUnsizedArray;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MIXED_FLOAT_DOT_PRODUCT_FEATURES_VALVE: {
         VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE *features = ext;
         features->shaderMixedFloatDotProductFloat16AccFloat32 = pdevice->supported_features.shaderMixedFloatDotProductFloat16AccFloat32;
         features->shaderMixedFloatDotProductFloat16AccFloat16 = pdevice->supported_features.shaderMixedFloatDotProductFloat16AccFloat16;
         features->shaderMixedFloatDotProductBFloat16Acc = pdevice->supported_features.shaderMixedFloatDotProductBFloat16Acc;
         features->shaderMixedFloatDotProductFloat8AccFloat32 = pdevice->supported_features.shaderMixedFloatDotProductFloat8AccFloat32;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_RESTART_INDEX_FEATURES_EXT: {
         VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT *features = ext;
         features->primitiveRestartIndex = pdevice->supported_features.primitiveRestartIndex;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM: {
         VkPhysicalDeviceFormatPackFeaturesARM *features = ext;
         features->formatPack = pdevice->supported_features.formatPack;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_THROTTLE_HINT_FEATURES_SEC: {
         VkPhysicalDeviceThrottleHintFeaturesSEC *features = ext;
         features->throttleHint = pdevice->supported_features.throttleHint;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM: {
         VkPhysicalDeviceTensorFeaturesARM *features = ext;
         features->tensorNonPacked = pdevice->supported_features.tensorNonPacked;
         features->shaderTensorAccess = pdevice->supported_features.shaderTensorAccess;
         features->shaderStorageTensorArrayDynamicIndexing = pdevice->supported_features.shaderStorageTensorArrayDynamicIndexing;
         features->shaderStorageTensorArrayNonUniformIndexing = pdevice->supported_features.shaderStorageTensorArrayNonUniformIndexing;
         features->descriptorBindingStorageTensorUpdateAfterBind = pdevice->supported_features.descriptorBindingStorageTensorUpdateAfterBind;
         features->tensors = pdevice->supported_features.tensors;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM: {
         VkPhysicalDeviceDescriptorBufferTensorFeaturesARM *features = ext;
         features->descriptorBufferTensorDescriptors = pdevice->supported_features.descriptorBufferTensorDescriptors;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT: {
         VkPhysicalDeviceShaderFloat8FeaturesEXT *features = ext;
         features->shaderFloat8 = pdevice->supported_features.shaderFloat8;
         features->shaderFloat8CooperativeMatrix = pdevice->supported_features.shaderFloat8CooperativeMatrix;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM: {
         VkPhysicalDeviceDataGraphFeaturesARM *features = ext;
         features->dataGraph = pdevice->supported_features.dataGraph;
         features->dataGraphUpdateAfterBind = pdevice->supported_features.dataGraphUpdateAfterBind;
         features->dataGraphSpecializationConstants = pdevice->supported_features.dataGraphSpecializationConstants;
         features->dataGraphDescriptorBuffer = pdevice->supported_features.dataGraphDescriptorBuffer;
         features->dataGraphShaderModule = pdevice->supported_features.dataGraphShaderModule;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC: {
         VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC *features = ext;
         features->pipelineCacheIncrementalMode = pdevice->supported_features.pipelineCacheIncrementalMode;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_MODEL_FEATURES_QCOM: {
         VkPhysicalDeviceDataGraphModelFeaturesQCOM *features = ext;
         features->dataGraphModel = pdevice->supported_features.dataGraphModel;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR: {
         VkPhysicalDeviceShaderUntypedPointersFeaturesKHR *features = ext;
         features->shaderUntypedPointers = pdevice->supported_features.shaderUntypedPointers;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE: {
         VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE *features = ext;
         features->videoEncodeRgbConversion = pdevice->supported_features.videoEncodeRgbConversion;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT: {
         VkPhysicalDeviceShader64BitIndexingFeaturesEXT *features = ext;
         features->shader64BitIndexing = pdevice->supported_features.shader64BitIndexing;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_QUEUE_PERF_HINT_FEATURES_QCOM: {
         VkPhysicalDeviceQueuePerfHintFeaturesQCOM *features = ext;
         features->queuePerfHint = pdevice->supported_features.queuePerfHint;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_FEATURES_ARM: {
         VkPhysicalDevicePerformanceCountersByRegionFeaturesARM *features = ext;
         features->performanceCountersByRegion = pdevice->supported_features.performanceCountersByRegion;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_OCCUPANCY_PRIORITY_FEATURES_NV: {
         VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV *features = ext;
         features->computeOccupancyPriority = pdevice->supported_features.computeOccupancyPriority;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_FEATURES_EXT: {
         VkPhysicalDeviceShaderLongVectorFeaturesEXT *features = ext;
         features->longVector = pdevice->supported_features.longVector;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_3D_FEATURES_EXT: {
         VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT *features = ext;
         features->textureCompressionASTC_3D = pdevice->supported_features.textureCompressionASTC_3D;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_PARTITIONED_FEATURES_EXT: {
         VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT *features = ext;
         features->shaderSubgroupPartitioned = pdevice->supported_features.shaderSubgroupPartitioned;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SPLIT_BARRIER_FEATURES_EXT: {
         VkPhysicalDeviceShaderSplitBarrierFeaturesEXT *features = ext;
         features->shaderSplitBarrier = pdevice->supported_features.shaderSplitBarrier;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_FEATURES_EXT: {
         VkPhysicalDeviceDescriptorHeapFeaturesEXT *features = ext;
         features->descriptorHeap = pdevice->supported_features.descriptorHeap;
         features->descriptorHeapCaptureReplay = pdevice->supported_features.descriptorHeapCaptureReplay;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INSTRUMENTATION_FEATURES_ARM: {
         VkPhysicalDeviceShaderInstrumentationFeaturesARM *features = ext;
         features->shaderInstrumentation = pdevice->supported_features.shaderInstrumentation;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_ADDRESS_COMMANDS_FEATURES_KHR: {
         VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR *features = ext;
         features->deviceAddressCommands = pdevice->supported_features.deviceAddressCommands;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CONSTANT_DATA_FEATURES_KHR: {
         VkPhysicalDeviceShaderConstantDataFeaturesKHR *features = ext;
         features->shaderConstantData = pdevice->supported_features.shaderConstantData;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ABORT_FEATURES_KHR: {
         VkPhysicalDeviceShaderAbortFeaturesKHR *features = ext;
         features->shaderAbort = pdevice->supported_features.shaderAbort;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_OPTICAL_FLOW_FEATURES_ARM: {
         VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM *features = ext;
         features->dataGraphOpticalFlow = pdevice->supported_features.dataGraphOpticalFlow;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_TILING_CONTROL_FEATURES_EXT: {
         VkPhysicalDeviceImageTilingControlFeaturesEXT *features = ext;
         features->imageTilingControl = pdevice->supported_features.imageTilingControl;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OCP_MICROSCALING_TYPES_FEATURES_EXT: {
         VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT *features = ext;
         features->shaderFloat4 = pdevice->supported_features.shaderFloat4;
         features->shaderFloat6 = pdevice->supported_features.shaderFloat6;
         features->shaderFloat8UnsignedE8M0 = pdevice->supported_features.shaderFloat8UnsignedE8M0;
         features->shaderMXInt8 = pdevice->supported_features.shaderMXInt8;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_MAINTENANCE_1_FEATURES_EXT: {
         VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT *features = ext;
         features->cooperativeMatrixProperties2 = pdevice->supported_features.cooperativeMatrixProperties2;
         features->cooperativeMatrixReductions = pdevice->supported_features.cooperativeMatrixReductions;
         features->cooperativeMatrixConversions = pdevice->supported_features.cooperativeMatrixConversions;
         features->cooperativeMatrixPerElementOperations = pdevice->supported_features.cooperativeMatrixPerElementOperations;
         features->cooperativeMatrixGetCoordinate = pdevice->supported_features.cooperativeMatrixGetCoordinate;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_ALLOCATION_ALIGNMENT_FEATURES_VALVE: {
         VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE *features = ext;
         features->bufferDeviceAddressAllocationAlignment = pdevice->supported_features.bufferDeviceAddressAllocationAlignment;
         break;
      }

      default:
         break;
      }
   }
}

void
vk_set_physical_device_features(struct vk_features *all_features,
                                const VkPhysicalDeviceFeatures2 *pFeatures)
{
   vk_foreach_struct_const(sType, ext, pFeatures) {
      switch (sType) {
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
         const VkPhysicalDeviceFeatures2 *features = (const void *) ext;
         vk_set_physical_device_features_1_0(all_features, &features->features);
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *features = ext;
         if (features->deviceGeneratedCommands)
            all_features->deviceGeneratedCommandsNV = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_CONSTANT_BANK_FEATURES_NV: {
         const VkPhysicalDevicePushConstantBankFeaturesNV *features = ext;
         if (features->pushConstantBank)
            all_features->pushConstantBank = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: {
         const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *features = ext;
         if (features->deviceGeneratedCompute)
            all_features->deviceGeneratedCompute = true;
         if (features->deviceGeneratedComputePipelines)
            all_features->deviceGeneratedComputePipelines = true;
         if (features->deviceGeneratedComputeCaptureReplay)
            all_features->deviceGeneratedComputeCaptureReplay = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: {
         const VkPhysicalDevicePrivateDataFeatures *features = ext;
         if (features->privateData)
            all_features->privateData = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_BASE_HANDLE_FEATURES_NV: {
         const VkPhysicalDevicePrivateDataBaseHandleFeaturesNV *features = ext;
         if (features->privateDataBaseHandle)
            all_features->privateDataBaseHandle = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV: {
         const VkPhysicalDeviceClusterAccelerationStructureFeaturesNV *features = ext;
         if (features->clusterAccelerationStructure)
            all_features->clusterAccelerationStructure = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
         const VkPhysicalDeviceVariablePointersFeatures *features = ext;
         if (features->variablePointersStorageBuffer)
            all_features->variablePointersStorageBuffer = true;
         if (features->variablePointers)
            all_features->variablePointers = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
         const VkPhysicalDeviceMultiviewFeatures *features = ext;
         if (features->multiview)
            all_features->multiview = true;
         if (features->multiviewGeometryShader)
            all_features->multiviewGeometryShader = true;
         if (features->multiviewTessellationShader)
            all_features->multiviewTessellationShader = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: {
         const VkPhysicalDevicePresentIdFeaturesKHR *features = ext;
         if (features->presentId)
            all_features->presentId = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR: {
         const VkPhysicalDevicePresentId2FeaturesKHR *features = ext;
         if (features->presentId2)
            all_features->presentId2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: {
         const VkPhysicalDevicePresentWaitFeaturesKHR *features = ext;
         if (features->presentWait)
            all_features->presentWait = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR: {
         const VkPhysicalDevicePresentWait2FeaturesKHR *features = ext;
         if (features->presentWait2)
            all_features->presentWait2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_TIMING_FEATURES_EXT: {
         const VkPhysicalDevicePresentTimingFeaturesEXT *features = ext;
         if (features->presentTiming)
            all_features->presentTiming = true;
         if (features->presentAtAbsoluteTime)
            all_features->presentAtAbsoluteTime = true;
         if (features->presentAtRelativeTime)
            all_features->presentAtRelativeTime = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
         const VkPhysicalDevice16BitStorageFeatures *features = ext;
         if (features->storageBuffer16BitAccess)
            all_features->storageBuffer16BitAccess = true;
         if (features->uniformAndStorageBuffer16BitAccess)
            all_features->uniformAndStorageBuffer16BitAccess = true;
         if (features->storagePushConstant16)
            all_features->storagePushConstant16 = true;
         if (features->storageInputOutput16)
            all_features->storageInputOutput16 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
         const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *features = ext;
         if (features->shaderSubgroupExtendedTypes)
            all_features->shaderSubgroupExtendedTypes = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
         const VkPhysicalDeviceSamplerYcbcrConversionFeatures *features = ext;
         if (features->samplerYcbcrConversion)
            all_features->samplerYcbcrConversion = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
         const VkPhysicalDeviceProtectedMemoryFeatures *features = ext;
         if (features->protectedMemory)
            all_features->protectedMemory = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
         const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *features = ext;
         if (features->advancedBlendCoherentOperations)
            all_features->advancedBlendCoherentOperations = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: {
         const VkPhysicalDeviceMultiDrawFeaturesEXT *features = ext;
         if (features->multiDraw)
            all_features->multiDraw = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: {
         const VkPhysicalDeviceInlineUniformBlockFeatures *features = ext;
         if (features->inlineUniformBlock)
            all_features->inlineUniformBlock = true;
         if (features->descriptorBindingInlineUniformBlockUpdateAfterBind)
            all_features->descriptorBindingInlineUniformBlockUpdateAfterBind = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: {
         const VkPhysicalDeviceMaintenance4Features *features = ext;
         if (features->maintenance4)
            all_features->maintenance4 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES: {
         const VkPhysicalDeviceMaintenance5Features *features = ext;
         if (features->maintenance5)
            all_features->maintenance5 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES: {
         const VkPhysicalDeviceMaintenance6Features *features = ext;
         if (features->maintenance6)
            all_features->maintenance6 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR: {
         const VkPhysicalDeviceMaintenance7FeaturesKHR *features = ext;
         if (features->maintenance7)
            all_features->maintenance7 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR: {
         const VkPhysicalDeviceMaintenance8FeaturesKHR *features = ext;
         if (features->maintenance8)
            all_features->maintenance8 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR: {
         const VkPhysicalDeviceMaintenance9FeaturesKHR *features = ext;
         if (features->maintenance9)
            all_features->maintenance9 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_11_FEATURES_KHR: {
         const VkPhysicalDeviceMaintenance11FeaturesKHR *features = ext;
         if (features->maintenance11)
            all_features->maintenance11 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR: {
         const VkPhysicalDeviceMaintenance10FeaturesKHR *features = ext;
         if (features->maintenance10)
            all_features->maintenance10 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
         const VkPhysicalDeviceShaderDrawParametersFeatures *features = ext;
         if (features->shaderDrawParameters)
            all_features->shaderDrawParameters = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
         const VkPhysicalDeviceShaderFloat16Int8Features *features = ext;
         if (features->shaderFloat16)
            all_features->shaderFloat16 = true;
         if (features->shaderInt8)
            all_features->shaderInt8 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
         const VkPhysicalDeviceHostQueryResetFeatures *features = ext;
         if (features->hostQueryReset)
            all_features->hostQueryReset = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ELAPSED_TIMER_QUERY_FEATURES_QCOM: {
         const VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM *features = ext;
         if (features->elapsedTimerQuery)
            all_features->elapsedTimerQuery = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES: {
         const VkPhysicalDeviceGlobalPriorityQueryFeatures *features = ext;
         if (features->globalPriorityQuery)
            all_features->globalPriorityQuery = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: {
         const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *features = ext;
         if (features->deviceMemoryReport)
            all_features->deviceMemoryReport = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
         const VkPhysicalDeviceDescriptorIndexingFeatures *features = ext;
         if (features->shaderInputAttachmentArrayDynamicIndexing)
            all_features->shaderInputAttachmentArrayDynamicIndexing = true;
         if (features->shaderUniformTexelBufferArrayDynamicIndexing)
            all_features->shaderUniformTexelBufferArrayDynamicIndexing = true;
         if (features->shaderStorageTexelBufferArrayDynamicIndexing)
            all_features->shaderStorageTexelBufferArrayDynamicIndexing = true;
         if (features->shaderUniformBufferArrayNonUniformIndexing)
            all_features->shaderUniformBufferArrayNonUniformIndexing = true;
         if (features->shaderSampledImageArrayNonUniformIndexing)
            all_features->shaderSampledImageArrayNonUniformIndexing = true;
         if (features->shaderStorageBufferArrayNonUniformIndexing)
            all_features->shaderStorageBufferArrayNonUniformIndexing = true;
         if (features->shaderStorageImageArrayNonUniformIndexing)
            all_features->shaderStorageImageArrayNonUniformIndexing = true;
         if (features->shaderInputAttachmentArrayNonUniformIndexing)
            all_features->shaderInputAttachmentArrayNonUniformIndexing = true;
         if (features->shaderUniformTexelBufferArrayNonUniformIndexing)
            all_features->shaderUniformTexelBufferArrayNonUniformIndexing = true;
         if (features->shaderStorageTexelBufferArrayNonUniformIndexing)
            all_features->shaderStorageTexelBufferArrayNonUniformIndexing = true;
         if (features->descriptorBindingUniformBufferUpdateAfterBind)
            all_features->descriptorBindingUniformBufferUpdateAfterBind = true;
         if (features->descriptorBindingSampledImageUpdateAfterBind)
            all_features->descriptorBindingSampledImageUpdateAfterBind = true;
         if (features->descriptorBindingStorageImageUpdateAfterBind)
            all_features->descriptorBindingStorageImageUpdateAfterBind = true;
         if (features->descriptorBindingStorageBufferUpdateAfterBind)
            all_features->descriptorBindingStorageBufferUpdateAfterBind = true;
         if (features->descriptorBindingUniformTexelBufferUpdateAfterBind)
            all_features->descriptorBindingUniformTexelBufferUpdateAfterBind = true;
         if (features->descriptorBindingStorageTexelBufferUpdateAfterBind)
            all_features->descriptorBindingStorageTexelBufferUpdateAfterBind = true;
         if (features->descriptorBindingUpdateUnusedWhilePending)
            all_features->descriptorBindingUpdateUnusedWhilePending = true;
         if (features->descriptorBindingPartiallyBound)
            all_features->descriptorBindingPartiallyBound = true;
         if (features->descriptorBindingVariableDescriptorCount)
            all_features->descriptorBindingVariableDescriptorCount = true;
         if (features->runtimeDescriptorArray)
            all_features->runtimeDescriptorArray = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
         const VkPhysicalDeviceTimelineSemaphoreFeatures *features = ext;
         if (features->timelineSemaphore)
            all_features->timelineSemaphore = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
         const VkPhysicalDevice8BitStorageFeatures *features = ext;
         if (features->storageBuffer8BitAccess)
            all_features->storageBuffer8BitAccess = true;
         if (features->uniformAndStorageBuffer8BitAccess)
            all_features->uniformAndStorageBuffer8BitAccess = true;
         if (features->storagePushConstant8)
            all_features->storagePushConstant8 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
         const VkPhysicalDeviceConditionalRenderingFeaturesEXT *features = ext;
         if (features->conditionalRendering)
            all_features->conditionalRendering = true;
         if (features->inheritedConditionalRendering)
            all_features->inheritedConditionalRendering = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
         const VkPhysicalDeviceVulkanMemoryModelFeatures *features = ext;
         if (features->vulkanMemoryModel)
            all_features->vulkanMemoryModel = true;
         if (features->vulkanMemoryModelDeviceScope)
            all_features->vulkanMemoryModelDeviceScope = true;
         if (features->vulkanMemoryModelAvailabilityVisibilityChains)
            all_features->vulkanMemoryModelAvailabilityVisibilityChains = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
         const VkPhysicalDeviceShaderAtomicInt64Features *features = ext;
         if (features->shaderBufferInt64Atomics)
            all_features->shaderBufferInt64Atomics = true;
         if (features->shaderSharedInt64Atomics)
            all_features->shaderSharedInt64Atomics = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
         const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *features = ext;
         if (features->shaderBufferFloat32Atomics)
            all_features->shaderBufferFloat32Atomics = true;
         if (features->shaderBufferFloat32AtomicAdd)
            all_features->shaderBufferFloat32AtomicAdd = true;
         if (features->shaderBufferFloat64Atomics)
            all_features->shaderBufferFloat64Atomics = true;
         if (features->shaderBufferFloat64AtomicAdd)
            all_features->shaderBufferFloat64AtomicAdd = true;
         if (features->shaderSharedFloat32Atomics)
            all_features->shaderSharedFloat32Atomics = true;
         if (features->shaderSharedFloat32AtomicAdd)
            all_features->shaderSharedFloat32AtomicAdd = true;
         if (features->shaderSharedFloat64Atomics)
            all_features->shaderSharedFloat64Atomics = true;
         if (features->shaderSharedFloat64AtomicAdd)
            all_features->shaderSharedFloat64AtomicAdd = true;
         if (features->shaderImageFloat32Atomics)
            all_features->shaderImageFloat32Atomics = true;
         if (features->shaderImageFloat32AtomicAdd)
            all_features->shaderImageFloat32AtomicAdd = true;
         if (features->sparseImageFloat32Atomics)
            all_features->sparseImageFloat32Atomics = true;
         if (features->sparseImageFloat32AtomicAdd)
            all_features->sparseImageFloat32AtomicAdd = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: {
         const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *features = ext;
         if (features->shaderBufferFloat16Atomics)
            all_features->shaderBufferFloat16Atomics = true;
         if (features->shaderBufferFloat16AtomicAdd)
            all_features->shaderBufferFloat16AtomicAdd = true;
         if (features->shaderBufferFloat16AtomicMinMax)
            all_features->shaderBufferFloat16AtomicMinMax = true;
         if (features->shaderBufferFloat32AtomicMinMax)
            all_features->shaderBufferFloat32AtomicMinMax = true;
         if (features->shaderBufferFloat64AtomicMinMax)
            all_features->shaderBufferFloat64AtomicMinMax = true;
         if (features->shaderSharedFloat16Atomics)
            all_features->shaderSharedFloat16Atomics = true;
         if (features->shaderSharedFloat16AtomicAdd)
            all_features->shaderSharedFloat16AtomicAdd = true;
         if (features->shaderSharedFloat16AtomicMinMax)
            all_features->shaderSharedFloat16AtomicMinMax = true;
         if (features->shaderSharedFloat32AtomicMinMax)
            all_features->shaderSharedFloat32AtomicMinMax = true;
         if (features->shaderSharedFloat64AtomicMinMax)
            all_features->shaderSharedFloat64AtomicMinMax = true;
         if (features->shaderImageFloat32AtomicMinMax)
            all_features->shaderImageFloat32AtomicMinMax = true;
         if (features->sparseImageFloat32AtomicMinMax)
            all_features->sparseImageFloat32AtomicMinMax = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES: {
         const VkPhysicalDeviceVertexAttributeDivisorFeatures *features = ext;
         if (features->vertexAttributeInstanceRateDivisor)
            all_features->vertexAttributeInstanceRateDivisor = true;
         if (features->vertexAttributeInstanceRateZeroDivisor)
            all_features->vertexAttributeInstanceRateZeroDivisor = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
         const VkPhysicalDeviceASTCDecodeFeaturesEXT *features = ext;
         if (features->decodeModeSharedExponent)
            all_features->decodeModeSharedExponent = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
         const VkPhysicalDeviceTransformFeedbackFeaturesEXT *features = ext;
         if (features->transformFeedback)
            all_features->transformFeedback = true;
         if (features->geometryStreams)
            all_features->geometryStreams = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
         const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *features = ext;
         if (features->representativeFragmentTest)
            all_features->representativeFragmentTest = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
         const VkPhysicalDeviceExclusiveScissorFeaturesNV *features = ext;
         if (features->exclusiveScissor)
            all_features->exclusiveScissor = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
         const VkPhysicalDeviceCornerSampledImageFeaturesNV *features = ext;
         if (features->cornerSampledImage)
            all_features->cornerSampledImage = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR: {
         const VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR *features = ext;
         if (features->computeDerivativeGroupQuads)
            all_features->computeDerivativeGroupQuads = true;
         if (features->computeDerivativeGroupLinear)
            all_features->computeDerivativeGroupLinear = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
         const VkPhysicalDeviceShaderImageFootprintFeaturesNV *features = ext;
         if (features->imageFootprint)
            all_features->imageFootprint = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
         const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *features = ext;
         if (features->dedicatedAllocationImageAliasing)
            all_features->dedicatedAllocationImageAliasing = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR: {
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR *features = ext;
         if (features->indirectMemoryCopy)
            all_features->indirectMemoryCopy = true;
         if (features->indirectMemoryToImageCopy)
            all_features->indirectMemoryToImageCopy = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: {
         const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *features = ext;
         if (features->indirectCopy)
            all_features->indirectCopy = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT: {
         const VkPhysicalDeviceMemoryDecompressionFeaturesEXT *features = ext;
         if (features->memoryDecompression)
            all_features->memoryDecompression = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
         const VkPhysicalDeviceShadingRateImageFeaturesNV *features = ext;
         if (features->shadingRateImage)
            all_features->shadingRateImage = true;
         if (features->shadingRateCoarseSampleOrder)
            all_features->shadingRateCoarseSampleOrder = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: {
         const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *features = ext;
         if (features->invocationMask)
            all_features->invocationMask = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
         const VkPhysicalDeviceMeshShaderFeaturesNV *features = ext;
         if (features->taskShader)
            all_features->taskShaderNV = true;
         if (features->meshShader)
            all_features->meshShaderNV = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: {
         const VkPhysicalDeviceMeshShaderFeaturesEXT *features = ext;
         if (features->taskShader)
            all_features->taskShader = true;
         if (features->meshShader)
            all_features->meshShader = true;
         if (features->multiviewMeshShader)
            all_features->multiviewMeshShader = true;
         if (features->primitiveFragmentShadingRateMeshShader)
            all_features->primitiveFragmentShadingRateMeshShader = true;
         if (features->meshShaderQueries)
            all_features->meshShaderQueries = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: {
         const VkPhysicalDeviceAccelerationStructureFeaturesKHR *features = ext;
         if (features->accelerationStructure)
            all_features->accelerationStructure = true;
         if (features->accelerationStructureCaptureReplay)
            all_features->accelerationStructureCaptureReplay = true;
         if (features->accelerationStructureIndirectBuild)
            all_features->accelerationStructureIndirectBuild = true;
         if (features->accelerationStructureHostCommands)
            all_features->accelerationStructureHostCommands = true;
         if (features->descriptorBindingAccelerationStructureUpdateAfterBind)
            all_features->descriptorBindingAccelerationStructureUpdateAfterBind = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: {
         const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *features = ext;
         if (features->rayTracingPipeline)
            all_features->rayTracingPipeline = true;
         if (features->rayTracingPipelineShaderGroupHandleCaptureReplay)
            all_features->rayTracingPipelineShaderGroupHandleCaptureReplay = true;
         if (features->rayTracingPipelineShaderGroupHandleCaptureReplayMixed)
            all_features->rayTracingPipelineShaderGroupHandleCaptureReplayMixed = true;
         if (features->rayTracingPipelineTraceRaysIndirect)
            all_features->rayTracingPipelineTraceRaysIndirect = true;
         if (features->rayTraversalPrimitiveCulling)
            all_features->rayTraversalPrimitiveCulling = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: {
         const VkPhysicalDeviceRayQueryFeaturesKHR *features = ext;
         if (features->rayQuery)
            all_features->rayQuery = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: {
         const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *features = ext;
         if (features->rayTracingMaintenance1)
            all_features->rayTracingMaintenance1 = true;
         if (features->rayTracingPipelineTraceRaysIndirect2)
            all_features->rayTracingPipelineTraceRaysIndirect2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
         const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *features = ext;
         if (features->fragmentDensityMap)
            all_features->fragmentDensityMap = true;
         if (features->fragmentDensityMapDynamic)
            all_features->fragmentDensityMapDynamic = true;
         if (features->fragmentDensityMapNonSubsampledImages)
            all_features->fragmentDensityMapNonSubsampledImages = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
         const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *features = ext;
         if (features->fragmentDensityMapDeferred)
            all_features->fragmentDensityMapDeferred = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT: {
         const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT *features = ext;
         if (features->fragmentDensityMapOffset)
            all_features->fragmentDensityMapOffset = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
         const VkPhysicalDeviceScalarBlockLayoutFeatures *features = ext;
         if (features->scalarBlockLayout)
            all_features->scalarBlockLayout = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
         const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *features = ext;
         if (features->uniformBufferStandardLayout)
            all_features->uniformBufferStandardLayout = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
         const VkPhysicalDeviceDepthClipEnableFeaturesEXT *features = ext;
         if (features->depthClipEnable)
            all_features->depthClipEnable = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
         const VkPhysicalDeviceMemoryPriorityFeaturesEXT *features = ext;
         if (features->memoryPriority)
            all_features->memoryPriority = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: {
         const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *features = ext;
         if (features->pageableDeviceLocalMemory)
            all_features->pageableDeviceLocalMemory = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
         const VkPhysicalDeviceBufferDeviceAddressFeatures *features = ext;
         if (features->bufferDeviceAddress)
            all_features->bufferDeviceAddress = true;
         if (features->bufferDeviceAddressCaptureReplay)
            all_features->bufferDeviceAddressCaptureReplay = true;
         if (features->bufferDeviceAddressMultiDevice)
            all_features->bufferDeviceAddressMultiDevice = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
         const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *features = ext;
         if (features->bufferDeviceAddress)
            all_features->bufferDeviceAddress = true;
         if (features->bufferDeviceAddressCaptureReplay)
            all_features->bufferDeviceAddressCaptureReplayEXT = true;
         if (features->bufferDeviceAddressMultiDevice)
            all_features->bufferDeviceAddressMultiDevice = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
         const VkPhysicalDeviceImagelessFramebufferFeatures *features = ext;
         if (features->imagelessFramebuffer)
            all_features->imagelessFramebuffer = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: {
         const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *features = ext;
         if (features->textureCompressionASTC_HDR)
            all_features->textureCompressionASTC_HDR = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
         const VkPhysicalDeviceCooperativeMatrixFeaturesNV *features = ext;
         if (features->cooperativeMatrix)
            all_features->cooperativeMatrixNV = true;
         if (features->cooperativeMatrixRobustBufferAccess)
            all_features->cooperativeMatrixRobustBufferAccessNV = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
         const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *features = ext;
         if (features->ycbcrImageArrays)
            all_features->ycbcrImageArrays = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: {
         const VkPhysicalDevicePresentBarrierFeaturesNV *features = ext;
         if (features->presentBarrier)
            all_features->presentBarrier = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
         const VkPhysicalDevicePerformanceQueryFeaturesKHR *features = ext;
         if (features->performanceCounterQueryPools)
            all_features->performanceCounterQueryPools = true;
         if (features->performanceCounterMultipleQueryPools)
            all_features->performanceCounterMultipleQueryPools = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
         const VkPhysicalDeviceCoverageReductionModeFeaturesNV *features = ext;
         if (features->coverageReductionMode)
            all_features->coverageReductionMode = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
         const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *features = ext;
         if (features->shaderIntegerFunctions2)
            all_features->shaderIntegerFunctions2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
         const VkPhysicalDeviceShaderClockFeaturesKHR *features = ext;
         if (features->shaderSubgroupClock)
            all_features->shaderSubgroupClock = true;
         if (features->shaderDeviceClock)
            all_features->shaderDeviceClock = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES: {
         const VkPhysicalDeviceIndexTypeUint8Features *features = ext;
         if (features->indexTypeUint8)
            all_features->indexTypeUint8 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
         const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *features = ext;
         if (features->shaderSMBuiltins)
            all_features->shaderSMBuiltins = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
         const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *features = ext;
         if (features->fragmentShaderSampleInterlock)
            all_features->fragmentShaderSampleInterlock = true;
         if (features->fragmentShaderPixelInterlock)
            all_features->fragmentShaderPixelInterlock = true;
         if (features->fragmentShaderShadingRateInterlock)
            all_features->fragmentShaderShadingRateInterlock = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
         const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *features = ext;
         if (features->separateDepthStencilLayouts)
            all_features->separateDepthStencilLayouts = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: {
         const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *features = ext;
         if (features->primitiveTopologyListRestart)
            all_features->primitiveTopologyListRestart = true;
         if (features->primitiveTopologyPatchListRestart)
            all_features->primitiveTopologyPatchListRestart = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
         const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *features = ext;
         if (features->pipelineExecutableInfo)
            all_features->pipelineExecutableInfo = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: {
         const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *features = ext;
         if (features->shaderDemoteToHelperInvocation)
            all_features->shaderDemoteToHelperInvocation = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
         const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *features = ext;
         if (features->texelBufferAlignment)
            all_features->texelBufferAlignment = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: {
         const VkPhysicalDeviceSubgroupSizeControlFeatures *features = ext;
         if (features->subgroupSizeControl)
            all_features->subgroupSizeControl = true;
         if (features->computeFullSubgroups)
            all_features->computeFullSubgroups = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES: {
         const VkPhysicalDeviceLineRasterizationFeatures *features = ext;
         if (features->rectangularLines)
            all_features->rectangularLines = true;
         if (features->bresenhamLines)
            all_features->bresenhamLines = true;
         if (features->smoothLines)
            all_features->smoothLines = true;
         if (features->stippledRectangularLines)
            all_features->stippledRectangularLines = true;
         if (features->stippledBresenhamLines)
            all_features->stippledBresenhamLines = true;
         if (features->stippledSmoothLines)
            all_features->stippledSmoothLines = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: {
         const VkPhysicalDevicePipelineCreationCacheControlFeatures *features = ext;
         if (features->pipelineCreationCacheControl)
            all_features->pipelineCreationCacheControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
         const VkPhysicalDeviceVulkan11Features *features = ext;
         if (features->storageBuffer16BitAccess)
            all_features->storageBuffer16BitAccess = true;
         if (features->uniformAndStorageBuffer16BitAccess)
            all_features->uniformAndStorageBuffer16BitAccess = true;
         if (features->storagePushConstant16)
            all_features->storagePushConstant16 = true;
         if (features->storageInputOutput16)
            all_features->storageInputOutput16 = true;
         if (features->multiview)
            all_features->multiview = true;
         if (features->multiviewGeometryShader)
            all_features->multiviewGeometryShader = true;
         if (features->multiviewTessellationShader)
            all_features->multiviewTessellationShader = true;
         if (features->variablePointersStorageBuffer)
            all_features->variablePointersStorageBuffer = true;
         if (features->variablePointers)
            all_features->variablePointers = true;
         if (features->protectedMemory)
            all_features->protectedMemory = true;
         if (features->samplerYcbcrConversion)
            all_features->samplerYcbcrConversion = true;
         if (features->shaderDrawParameters)
            all_features->shaderDrawParameters = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
         const VkPhysicalDeviceVulkan12Features *features = ext;
         if (features->samplerMirrorClampToEdge)
            all_features->samplerMirrorClampToEdge = true;
         if (features->drawIndirectCount)
            all_features->drawIndirectCount = true;
         if (features->storageBuffer8BitAccess)
            all_features->storageBuffer8BitAccess = true;
         if (features->uniformAndStorageBuffer8BitAccess)
            all_features->uniformAndStorageBuffer8BitAccess = true;
         if (features->storagePushConstant8)
            all_features->storagePushConstant8 = true;
         if (features->shaderBufferInt64Atomics)
            all_features->shaderBufferInt64Atomics = true;
         if (features->shaderSharedInt64Atomics)
            all_features->shaderSharedInt64Atomics = true;
         if (features->shaderFloat16)
            all_features->shaderFloat16 = true;
         if (features->shaderInt8)
            all_features->shaderInt8 = true;
         if (features->descriptorIndexing)
            all_features->descriptorIndexing = true;
         if (features->shaderInputAttachmentArrayDynamicIndexing)
            all_features->shaderInputAttachmentArrayDynamicIndexing = true;
         if (features->shaderUniformTexelBufferArrayDynamicIndexing)
            all_features->shaderUniformTexelBufferArrayDynamicIndexing = true;
         if (features->shaderStorageTexelBufferArrayDynamicIndexing)
            all_features->shaderStorageTexelBufferArrayDynamicIndexing = true;
         if (features->shaderUniformBufferArrayNonUniformIndexing)
            all_features->shaderUniformBufferArrayNonUniformIndexing = true;
         if (features->shaderSampledImageArrayNonUniformIndexing)
            all_features->shaderSampledImageArrayNonUniformIndexing = true;
         if (features->shaderStorageBufferArrayNonUniformIndexing)
            all_features->shaderStorageBufferArrayNonUniformIndexing = true;
         if (features->shaderStorageImageArrayNonUniformIndexing)
            all_features->shaderStorageImageArrayNonUniformIndexing = true;
         if (features->shaderInputAttachmentArrayNonUniformIndexing)
            all_features->shaderInputAttachmentArrayNonUniformIndexing = true;
         if (features->shaderUniformTexelBufferArrayNonUniformIndexing)
            all_features->shaderUniformTexelBufferArrayNonUniformIndexing = true;
         if (features->shaderStorageTexelBufferArrayNonUniformIndexing)
            all_features->shaderStorageTexelBufferArrayNonUniformIndexing = true;
         if (features->descriptorBindingUniformBufferUpdateAfterBind)
            all_features->descriptorBindingUniformBufferUpdateAfterBind = true;
         if (features->descriptorBindingSampledImageUpdateAfterBind)
            all_features->descriptorBindingSampledImageUpdateAfterBind = true;
         if (features->descriptorBindingStorageImageUpdateAfterBind)
            all_features->descriptorBindingStorageImageUpdateAfterBind = true;
         if (features->descriptorBindingStorageBufferUpdateAfterBind)
            all_features->descriptorBindingStorageBufferUpdateAfterBind = true;
         if (features->descriptorBindingUniformTexelBufferUpdateAfterBind)
            all_features->descriptorBindingUniformTexelBufferUpdateAfterBind = true;
         if (features->descriptorBindingStorageTexelBufferUpdateAfterBind)
            all_features->descriptorBindingStorageTexelBufferUpdateAfterBind = true;
         if (features->descriptorBindingUpdateUnusedWhilePending)
            all_features->descriptorBindingUpdateUnusedWhilePending = true;
         if (features->descriptorBindingPartiallyBound)
            all_features->descriptorBindingPartiallyBound = true;
         if (features->descriptorBindingVariableDescriptorCount)
            all_features->descriptorBindingVariableDescriptorCount = true;
         if (features->runtimeDescriptorArray)
            all_features->runtimeDescriptorArray = true;
         if (features->samplerFilterMinmax)
            all_features->samplerFilterMinmax = true;
         if (features->scalarBlockLayout)
            all_features->scalarBlockLayout = true;
         if (features->imagelessFramebuffer)
            all_features->imagelessFramebuffer = true;
         if (features->uniformBufferStandardLayout)
            all_features->uniformBufferStandardLayout = true;
         if (features->shaderSubgroupExtendedTypes)
            all_features->shaderSubgroupExtendedTypes = true;
         if (features->separateDepthStencilLayouts)
            all_features->separateDepthStencilLayouts = true;
         if (features->hostQueryReset)
            all_features->hostQueryReset = true;
         if (features->timelineSemaphore)
            all_features->timelineSemaphore = true;
         if (features->bufferDeviceAddress)
            all_features->bufferDeviceAddress = true;
         if (features->bufferDeviceAddressCaptureReplay)
            all_features->bufferDeviceAddressCaptureReplay = true;
         if (features->bufferDeviceAddressMultiDevice)
            all_features->bufferDeviceAddressMultiDevice = true;
         if (features->vulkanMemoryModel)
            all_features->vulkanMemoryModel = true;
         if (features->vulkanMemoryModelDeviceScope)
            all_features->vulkanMemoryModelDeviceScope = true;
         if (features->vulkanMemoryModelAvailabilityVisibilityChains)
            all_features->vulkanMemoryModelAvailabilityVisibilityChains = true;
         if (features->shaderOutputViewportIndex)
            all_features->shaderOutputViewportIndex = true;
         if (features->shaderOutputLayer)
            all_features->shaderOutputLayer = true;
         if (features->subgroupBroadcastDynamicId)
            all_features->subgroupBroadcastDynamicId = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
         const VkPhysicalDeviceVulkan13Features *features = ext;
         if (features->robustImageAccess)
            all_features->robustImageAccess = true;
         if (features->inlineUniformBlock)
            all_features->inlineUniformBlock = true;
         if (features->descriptorBindingInlineUniformBlockUpdateAfterBind)
            all_features->descriptorBindingInlineUniformBlockUpdateAfterBind = true;
         if (features->pipelineCreationCacheControl)
            all_features->pipelineCreationCacheControl = true;
         if (features->privateData)
            all_features->privateData = true;
         if (features->shaderDemoteToHelperInvocation)
            all_features->shaderDemoteToHelperInvocation = true;
         if (features->shaderTerminateInvocation)
            all_features->shaderTerminateInvocation = true;
         if (features->subgroupSizeControl)
            all_features->subgroupSizeControl = true;
         if (features->computeFullSubgroups)
            all_features->computeFullSubgroups = true;
         if (features->synchronization2)
            all_features->synchronization2 = true;
         if (features->textureCompressionASTC_HDR)
            all_features->textureCompressionASTC_HDR = true;
         if (features->shaderZeroInitializeWorkgroupMemory)
            all_features->shaderZeroInitializeWorkgroupMemory = true;
         if (features->dynamicRendering)
            all_features->dynamicRendering = true;
         if (features->shaderIntegerDotProduct)
            all_features->shaderIntegerDotProduct = true;
         if (features->maintenance4)
            all_features->maintenance4 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES: {
         const VkPhysicalDeviceVulkan14Features *features = ext;
         if (features->globalPriorityQuery)
            all_features->globalPriorityQuery = true;
         if (features->shaderSubgroupRotate)
            all_features->shaderSubgroupRotate = true;
         if (features->shaderSubgroupRotateClustered)
            all_features->shaderSubgroupRotateClustered = true;
         if (features->shaderFloatControls2)
            all_features->shaderFloatControls2 = true;
         if (features->shaderExpectAssume)
            all_features->shaderExpectAssume = true;
         if (features->rectangularLines)
            all_features->rectangularLines = true;
         if (features->bresenhamLines)
            all_features->bresenhamLines = true;
         if (features->smoothLines)
            all_features->smoothLines = true;
         if (features->stippledRectangularLines)
            all_features->stippledRectangularLines = true;
         if (features->stippledBresenhamLines)
            all_features->stippledBresenhamLines = true;
         if (features->stippledSmoothLines)
            all_features->stippledSmoothLines = true;
         if (features->vertexAttributeInstanceRateDivisor)
            all_features->vertexAttributeInstanceRateDivisor = true;
         if (features->vertexAttributeInstanceRateZeroDivisor)
            all_features->vertexAttributeInstanceRateZeroDivisor = true;
         if (features->indexTypeUint8)
            all_features->indexTypeUint8 = true;
         if (features->dynamicRenderingLocalRead)
            all_features->dynamicRenderingLocalRead = true;
         if (features->maintenance5)
            all_features->maintenance5 = true;
         if (features->maintenance6)
            all_features->maintenance6 = true;
         if (features->pipelineProtectedAccess)
            all_features->pipelineProtectedAccess = true;
         if (features->pipelineRobustness)
            all_features->pipelineRobustness = true;
         if (features->hostImageCopy)
            all_features->hostImageCopy = true;
         if (features->pushDescriptor)
            all_features->pushDescriptor = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
         const VkPhysicalDeviceCoherentMemoryFeaturesAMD *features = ext;
         if (features->deviceCoherentMemory)
            all_features->deviceCoherentMemory = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GPA_FEATURES_AMD: {
         const VkPhysicalDeviceGpaFeaturesAMD *features = ext;
         if (features->perfCounters)
            all_features->perfCounters = true;
         if (features->streamingPerfCounters)
            all_features->streamingPerfCounters = true;
         if (features->sqThreadTracing)
            all_features->sqThreadTracing = true;
         if (features->clockModes)
            all_features->clockModes = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
         const VkPhysicalDeviceCustomBorderColorFeaturesEXT *features = ext;
         if (features->customBorderColors)
            all_features->customBorderColors = true;
         if (features->customBorderColorWithoutFormat)
            all_features->customBorderColorWithoutFormat = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: {
         const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *features = ext;
         if (features->borderColorSwizzle)
            all_features->borderColorSwizzle = true;
         if (features->borderColorSwizzleFromImage)
            all_features->borderColorSwizzleFromImage = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
         const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *features = ext;
         if (features->extendedDynamicState)
            all_features->extendedDynamicState = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: {
         const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *features = ext;
         if (features->extendedDynamicState2)
            all_features->extendedDynamicState2 = true;
         if (features->extendedDynamicState2LogicOp)
            all_features->extendedDynamicState2LogicOp = true;
         if (features->extendedDynamicState2PatchControlPoints)
            all_features->extendedDynamicState2PatchControlPoints = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: {
         const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *features = ext;
         if (features->extendedDynamicState3TessellationDomainOrigin)
            all_features->extendedDynamicState3TessellationDomainOrigin = true;
         if (features->extendedDynamicState3DepthClampEnable)
            all_features->extendedDynamicState3DepthClampEnable = true;
         if (features->extendedDynamicState3PolygonMode)
            all_features->extendedDynamicState3PolygonMode = true;
         if (features->extendedDynamicState3RasterizationSamples)
            all_features->extendedDynamicState3RasterizationSamples = true;
         if (features->extendedDynamicState3SampleMask)
            all_features->extendedDynamicState3SampleMask = true;
         if (features->extendedDynamicState3AlphaToCoverageEnable)
            all_features->extendedDynamicState3AlphaToCoverageEnable = true;
         if (features->extendedDynamicState3AlphaToOneEnable)
            all_features->extendedDynamicState3AlphaToOneEnable = true;
         if (features->extendedDynamicState3LogicOpEnable)
            all_features->extendedDynamicState3LogicOpEnable = true;
         if (features->extendedDynamicState3ColorBlendEnable)
            all_features->extendedDynamicState3ColorBlendEnable = true;
         if (features->extendedDynamicState3ColorBlendEquation)
            all_features->extendedDynamicState3ColorBlendEquation = true;
         if (features->extendedDynamicState3ColorWriteMask)
            all_features->extendedDynamicState3ColorWriteMask = true;
         if (features->extendedDynamicState3RasterizationStream)
            all_features->extendedDynamicState3RasterizationStream = true;
         if (features->extendedDynamicState3ConservativeRasterizationMode)
            all_features->extendedDynamicState3ConservativeRasterizationMode = true;
         if (features->extendedDynamicState3ExtraPrimitiveOverestimationSize)
            all_features->extendedDynamicState3ExtraPrimitiveOverestimationSize = true;
         if (features->extendedDynamicState3DepthClipEnable)
            all_features->extendedDynamicState3DepthClipEnable = true;
         if (features->extendedDynamicState3SampleLocationsEnable)
            all_features->extendedDynamicState3SampleLocationsEnable = true;
         if (features->extendedDynamicState3ColorBlendAdvanced)
            all_features->extendedDynamicState3ColorBlendAdvanced = true;
         if (features->extendedDynamicState3ProvokingVertexMode)
            all_features->extendedDynamicState3ProvokingVertexMode = true;
         if (features->extendedDynamicState3LineRasterizationMode)
            all_features->extendedDynamicState3LineRasterizationMode = true;
         if (features->extendedDynamicState3LineStippleEnable)
            all_features->extendedDynamicState3LineStippleEnable = true;
         if (features->extendedDynamicState3DepthClipNegativeOneToOne)
            all_features->extendedDynamicState3DepthClipNegativeOneToOne = true;
         if (features->extendedDynamicState3ViewportWScalingEnable)
            all_features->extendedDynamicState3ViewportWScalingEnable = true;
         if (features->extendedDynamicState3ViewportSwizzle)
            all_features->extendedDynamicState3ViewportSwizzle = true;
         if (features->extendedDynamicState3CoverageToColorEnable)
            all_features->extendedDynamicState3CoverageToColorEnable = true;
         if (features->extendedDynamicState3CoverageToColorLocation)
            all_features->extendedDynamicState3CoverageToColorLocation = true;
         if (features->extendedDynamicState3CoverageModulationMode)
            all_features->extendedDynamicState3CoverageModulationMode = true;
         if (features->extendedDynamicState3CoverageModulationTableEnable)
            all_features->extendedDynamicState3CoverageModulationTableEnable = true;
         if (features->extendedDynamicState3CoverageModulationTable)
            all_features->extendedDynamicState3CoverageModulationTable = true;
         if (features->extendedDynamicState3CoverageReductionMode)
            all_features->extendedDynamicState3CoverageReductionMode = true;
         if (features->extendedDynamicState3RepresentativeFragmentTestEnable)
            all_features->extendedDynamicState3RepresentativeFragmentTestEnable = true;
         if (features->extendedDynamicState3ShadingRateImageEnable)
            all_features->extendedDynamicState3ShadingRateImageEnable = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_FLAGS_FEATURES_KHR: {
         const VkPhysicalDeviceExtendedFlagsFeaturesKHR *features = ext;
         if (features->extendedFlags)
            all_features->extendedFlags = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV: {
         const VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV *features = ext;
         if (features->partitionedAccelerationStructure)
            all_features->partitionedAccelerationStructure = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
         const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *features = ext;
         if (features->diagnosticsConfig)
            all_features->diagnosticsConfig = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: {
         const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *features = ext;
         if (features->shaderZeroInitializeWorkgroupMemory)
            all_features->shaderZeroInitializeWorkgroupMemory = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: {
         const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *features = ext;
         if (features->shaderSubgroupUniformControlFlow)
            all_features->shaderSubgroupUniformControlFlow = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR: {
         const VkPhysicalDeviceRobustness2FeaturesKHR *features = ext;
         if (features->robustBufferAccess2)
            all_features->robustBufferAccess2 = true;
         if (features->robustImageAccess2)
            all_features->robustImageAccess2 = true;
         if (features->nullDescriptor)
            all_features->nullDescriptor = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: {
         const VkPhysicalDeviceImageRobustnessFeatures *features = ext;
         if (features->robustImageAccess)
            all_features->robustImageAccess = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: {
         const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *features = ext;
         if (features->workgroupMemoryExplicitLayout)
            all_features->workgroupMemoryExplicitLayout = true;
         if (features->workgroupMemoryExplicitLayoutScalarBlockLayout)
            all_features->workgroupMemoryExplicitLayoutScalarBlockLayout = true;
         if (features->workgroupMemoryExplicitLayout8BitAccess)
            all_features->workgroupMemoryExplicitLayout8BitAccess = true;
         if (features->workgroupMemoryExplicitLayout16BitAccess)
            all_features->workgroupMemoryExplicitLayout16BitAccess = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: {
         const VkPhysicalDevice4444FormatsFeaturesEXT *features = ext;
         if (features->formatA4R4G4B4)
            all_features->formatA4R4G4B4 = true;
         if (features->formatA4B4G4R4)
            all_features->formatA4B4G4R4 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: {
         const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *features = ext;
         if (features->subpassShading)
            all_features->subpassShading = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: {
         const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *features = ext;
         if (features->clustercullingShader)
            all_features->clustercullingShader = true;
         if (features->multiviewClusterCullingShader)
            all_features->multiviewClusterCullingShader = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: {
         const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *features = ext;
         if (features->shaderImageInt64Atomics)
            all_features->shaderImageInt64Atomics = true;
         if (features->sparseImageInt64Atomics)
            all_features->sparseImageInt64Atomics = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: {
         const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *features = ext;
         if (features->pipelineFragmentShadingRate)
            all_features->pipelineFragmentShadingRate = true;
         if (features->primitiveFragmentShadingRate)
            all_features->primitiveFragmentShadingRate = true;
         if (features->attachmentFragmentShadingRate)
            all_features->attachmentFragmentShadingRate = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: {
         const VkPhysicalDeviceShaderTerminateInvocationFeatures *features = ext;
         if (features->shaderTerminateInvocation)
            all_features->shaderTerminateInvocation = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: {
         const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *features = ext;
         if (features->fragmentShadingRateEnums)
            all_features->fragmentShadingRateEnums = true;
         if (features->supersampleFragmentShadingRates)
            all_features->supersampleFragmentShadingRates = true;
         if (features->noInvocationFragmentShadingRates)
            all_features->noInvocationFragmentShadingRates = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: {
         const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *features = ext;
         if (features->image2DViewOf3D)
            all_features->image2DViewOf3D = true;
         if (features->sampler2DViewOf3D)
            all_features->sampler2DViewOf3D = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: {
         const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *features = ext;
         if (features->imageSlicedViewOf3D)
            all_features->imageSlicedViewOf3D = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: {
         const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *features = ext;
         if (features->attachmentFeedbackLoopDynamicState)
            all_features->attachmentFeedbackLoopDynamicState = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT: {
         const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *features = ext;
         if (features->legacyVertexAttributes)
            all_features->legacyVertexAttributes = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: {
         const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *features = ext;
         if (features->mutableDescriptorType)
            all_features->mutableDescriptorType = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: {
         const VkPhysicalDeviceDepthClipControlFeaturesEXT *features = ext;
         if (features->depthClipControl)
            all_features->depthClipControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT: {
         const VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT *features = ext;
         if (features->zeroInitializeDeviceMemory)
            all_features->zeroInitializeDeviceMemory = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_RESOLVE_FEATURES_EXT: {
         const VkPhysicalDeviceCustomResolveFeaturesEXT *features = ext;
         if (features->customResolve)
            all_features->customResolve = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT: {
         const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT *features = ext;
         if (features->deviceGeneratedCommands)
            all_features->deviceGeneratedCommands = true;
         if (features->dynamicGeneratedPipelineLayout)
            all_features->dynamicGeneratedPipelineLayout = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT: {
         const VkPhysicalDeviceDepthClampControlFeaturesEXT *features = ext;
         if (features->depthClampControl)
            all_features->depthClampControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: {
         const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *features = ext;
         if (features->vertexInputDynamicState)
            all_features->vertexInputDynamicState = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: {
         const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *features = ext;
         if (features->externalMemoryRDMA)
            all_features->externalMemoryRDMA = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR: {
         const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *features = ext;
         if (features->shaderRelaxedExtendedInstruction)
            all_features->shaderRelaxedExtendedInstruction = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: {
         const VkPhysicalDeviceColorWriteEnableFeaturesEXT *features = ext;
         if (features->colorWriteEnable)
            all_features->colorWriteEnable = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: {
         const VkPhysicalDeviceSynchronization2Features *features = ext;
         if (features->synchronization2)
            all_features->synchronization2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR: {
         const VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR *features = ext;
         if (features->unifiedImageLayouts)
            all_features->unifiedImageLayouts = true;
         if (features->unifiedImageLayoutsVideo)
            all_features->unifiedImageLayoutsVideo = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES: {
         const VkPhysicalDeviceHostImageCopyFeatures *features = ext;
         if (features->hostImageCopy)
            all_features->hostImageCopy = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: {
         const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *features = ext;
         if (features->primitivesGeneratedQuery)
            all_features->primitivesGeneratedQuery = true;
         if (features->primitivesGeneratedQueryWithRasterizerDiscard)
            all_features->primitivesGeneratedQueryWithRasterizerDiscard = true;
         if (features->primitivesGeneratedQueryWithNonZeroStreams)
            all_features->primitivesGeneratedQueryWithNonZeroStreams = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: {
         const VkPhysicalDeviceLegacyDitheringFeaturesEXT *features = ext;
         if (features->legacyDithering)
            all_features->legacyDithering = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: {
         const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *features = ext;
         if (features->multisampledRenderToSingleSampled)
            all_features->multisampledRenderToSingleSampled = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SWAPCHAIN_FEATURES_EXT: {
         const VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT *features = ext;
         if (features->multisampledRenderToSwapchain)
            all_features->multisampledRenderToSwapchain = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES: {
         const VkPhysicalDevicePipelineProtectedAccessFeatures *features = ext;
         if (features->pipelineProtectedAccess)
            all_features->pipelineProtectedAccess = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR: {
         const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *features = ext;
         if (features->videoMaintenance1)
            all_features->videoMaintenance1 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR: {
         const VkPhysicalDeviceVideoMaintenance2FeaturesKHR *features = ext;
         if (features->videoMaintenance2)
            all_features->videoMaintenance2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR: {
         const VkPhysicalDeviceVideoDecodeVP9FeaturesKHR *features = ext;
         if (features->videoDecodeVP9)
            all_features->videoDecodeVP9 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR: {
         const VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR *features = ext;
         if (features->videoEncodeQuantizationMap)
            all_features->videoEncodeQuantizationMap = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_FEEDBACK_2_FEATURES_KHR: {
         const VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR *features = ext;
         if (features->videoEncodeFeedback2)
            all_features->videoEncodeFeedback2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR: {
         const VkPhysicalDeviceVideoEncodeAV1FeaturesKHR *features = ext;
         if (features->videoEncodeAV1)
            all_features->videoEncodeAV1 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: {
         const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *features = ext;
         if (features->inheritedViewportScissor2D)
            all_features->inheritedViewportScissor2D = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: {
         const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *features = ext;
         if (features->ycbcr2plane444Formats)
            all_features->ycbcr2plane444Formats = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: {
         const VkPhysicalDeviceProvokingVertexFeaturesEXT *features = ext;
         if (features->provokingVertexLast)
            all_features->provokingVertexLast = true;
         if (features->transformFeedbackPreservesProvokingVertex)
            all_features->transformFeedbackPreservesProvokingVertex = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR: {
         const VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR *features = ext;
         if (features->videoEncodeIntraRefresh)
            all_features->videoEncodeIntraRefresh = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: {
         const VkPhysicalDeviceDescriptorBufferFeaturesEXT *features = ext;
         if (features->descriptorBuffer)
            all_features->descriptorBuffer = true;
         if (features->descriptorBufferCaptureReplay)
            all_features->descriptorBufferCaptureReplay = true;
         if (features->descriptorBufferImageLayoutIgnored)
            all_features->descriptorBufferImageLayoutIgnored = true;
         if (features->descriptorBufferPushDescriptors)
            all_features->descriptorBufferPushDescriptors = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: {
         const VkPhysicalDeviceShaderIntegerDotProductFeatures *features = ext;
         if (features->shaderIntegerDotProduct)
            all_features->shaderIntegerDotProduct = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: {
         const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *features = ext;
         if (features->fragmentShaderBarycentric)
            all_features->fragmentShaderBarycentric = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR: {
         const VkPhysicalDeviceShaderFmaFeaturesKHR *features = ext;
         if (features->shaderFmaFloat16)
            all_features->shaderFmaFloat16 = true;
         if (features->shaderFmaFloat32)
            all_features->shaderFmaFloat32 = true;
         if (features->shaderFmaFloat64)
            all_features->shaderFmaFloat64 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: {
         const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *features = ext;
         if (features->rayTracingMotionBlur)
            all_features->rayTracingMotionBlur = true;
         if (features->rayTracingMotionBlurPipelineTraceRaysIndirect)
            all_features->rayTracingMotionBlurPipelineTraceRaysIndirect = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV: {
         const VkPhysicalDeviceRayTracingValidationFeaturesNV *features = ext;
         if (features->rayTracingValidation)
            all_features->rayTracingValidation = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV: {
         const VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV *features = ext;
         if (features->spheres)
            all_features->spheres = true;
         if (features->linearSweptSpheres)
            all_features->linearSweptSpheres = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: {
         const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *features = ext;
         if (features->formatRgba10x6WithoutYCbCrSampler)
            all_features->formatRgba10x6WithoutYCbCrSampler = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: {
         const VkPhysicalDeviceDynamicRenderingFeatures *features = ext;
         if (features->dynamicRendering)
            all_features->dynamicRendering = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: {
         const VkPhysicalDeviceImageViewMinLodFeaturesEXT *features = ext;
         if (features->minLod)
            all_features->minLod = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: {
         const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *features = ext;
         if (features->rasterizationOrderColorAttachmentAccess)
            all_features->rasterizationOrderColorAttachmentAccess = true;
         if (features->rasterizationOrderDepthAttachmentAccess)
            all_features->rasterizationOrderDepthAttachmentAccess = true;
         if (features->rasterizationOrderStencilAttachmentAccess)
            all_features->rasterizationOrderStencilAttachmentAccess = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: {
         const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *features = ext;
         if (features->linearColorAttachment)
            all_features->linearColorAttachment = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: {
         const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *features = ext;
         if (features->graphicsPipelineLibrary)
            all_features->graphicsPipelineLibrary = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR: {
         const VkPhysicalDevicePipelineBinaryFeaturesKHR *features = ext;
         if (features->pipelineBinaries)
            all_features->pipelineBinaries = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_NEURAL_ACCELERATOR_STATISTICS_FEATURES_ARM: {
         const VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM *features = ext;
         if (features->dataGraphNeuralAcceleratorStatistics)
            all_features->dataGraphNeuralAcceleratorStatistics = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: {
         const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *features = ext;
         if (features->descriptorSetHostMapping)
            all_features->descriptorSetHostMapping = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT: {
         const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *features = ext;
         if (features->nestedCommandBuffer)
            all_features->nestedCommandBuffer = true;
         if (features->nestedCommandBufferRendering)
            all_features->nestedCommandBufferRendering = true;
         if (features->nestedCommandBufferSimultaneousUse)
            all_features->nestedCommandBufferSimultaneousUse = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: {
         const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *features = ext;
         if (features->shaderModuleIdentifier)
            all_features->shaderModuleIdentifier = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: {
         const VkPhysicalDeviceImageCompressionControlFeaturesEXT *features = ext;
         if (features->imageCompressionControl)
            all_features->imageCompressionControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: {
         const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *features = ext;
         if (features->imageCompressionControlSwapchain)
            all_features->imageCompressionControlSwapchain = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: {
         const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *features = ext;
         if (features->subpassMergeFeedback)
            all_features->subpassMergeFeedback = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_KHR: {
         const VkPhysicalDeviceOpacityMicromapFeaturesKHR *features = ext;
         if (features->micromap)
            all_features->micromap = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: {
         const VkPhysicalDeviceOpacityMicromapFeaturesEXT *features = ext;
         if (features->micromap)
            all_features->micromapEXT = true;
         if (features->micromapCaptureReplay)
            all_features->micromapCaptureReplay = true;
         if (features->micromapHostCommands)
            all_features->micromapHostCommands = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: {
         const VkPhysicalDevicePipelinePropertiesFeaturesEXT *features = ext;
         if (features->pipelinePropertiesIdentifier)
            all_features->pipelinePropertiesIdentifier = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: {
         const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *features = ext;
         if (features->shaderEarlyAndLateFragmentTests)
            all_features->shaderEarlyAndLateFragmentTests = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: {
         const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *features = ext;
         if (features->nonSeamlessCubeMap)
            all_features->nonSeamlessCubeMap = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES: {
         const VkPhysicalDevicePipelineRobustnessFeatures *features = ext;
         if (features->pipelineRobustness)
            all_features->pipelineRobustness = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MULTIPLE_WAIT_QUEUES_FEATURES_QCOM: {
         const VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM *features = ext;
         if (features->shaderMultipleWaitQueues)
            all_features->shaderMultipleWaitQueues = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: {
         const VkPhysicalDeviceImageProcessingFeaturesQCOM *features = ext;
         if (features->textureSampleWeighted)
            all_features->textureSampleWeighted = true;
         if (features->textureBoxFilter)
            all_features->textureBoxFilter = true;
         if (features->textureBlockMatch)
            all_features->textureBlockMatch = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: {
         const VkPhysicalDeviceTilePropertiesFeaturesQCOM *features = ext;
         if (features->tileProperties)
            all_features->tileProperties = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: {
         const VkPhysicalDeviceAmigoProfilingFeaturesSEC *features = ext;
         if (features->amigoProfiling)
            all_features->amigoProfiling = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: {
         const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *features = ext;
         if (features->attachmentFeedbackLoopLayout)
            all_features->attachmentFeedbackLoopLayout = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: {
         const VkPhysicalDeviceAddressBindingReportFeaturesEXT *features = ext;
         if (features->reportAddressBinding)
            all_features->reportAddressBinding = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: {
         const VkPhysicalDeviceOpticalFlowFeaturesNV *features = ext;
         if (features->opticalFlow)
            all_features->opticalFlow = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: {
         const VkPhysicalDeviceFaultFeaturesEXT *features = ext;
         if (features->deviceFault)
            all_features->deviceFaultEXT = true;
         if (features->deviceFaultVendorBinary)
            all_features->deviceFaultVendorBinaryEXT = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_KHR: {
         const VkPhysicalDeviceFaultFeaturesKHR *features = ext;
         if (features->deviceFault)
            all_features->deviceFault = true;
         if (features->deviceFaultVendorBinary)
            all_features->deviceFaultVendorBinary = true;
         if (features->deviceFaultReportMasked)
            all_features->deviceFaultReportMasked = true;
         if (features->deviceFaultDeviceLostOnMasked)
            all_features->deviceFaultDeviceLostOnMasked = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_KHR: {
         const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesKHR *features = ext;
         if (features->pipelineLibraryGroupHandles)
            all_features->pipelineLibraryGroupHandles = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: {
         const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *features = ext;
         if (features->shaderCoreBuiltins)
            all_features->shaderCoreBuiltins = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: {
         const VkPhysicalDeviceFrameBoundaryFeaturesEXT *features = ext;
         if (features->frameBoundary)
            all_features->frameBoundary = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: {
         const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *features = ext;
         if (features->dynamicRenderingUnusedAttachments)
            all_features->dynamicRenderingUnusedAttachments = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INTERNALLY_SYNCHRONIZED_QUEUES_FEATURES_KHR: {
         const VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR *features = ext;
         if (features->internallySynchronizedQueues)
            all_features->internallySynchronizedQueues = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR: {
         const VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR *features = ext;
         if (features->swapchainMaintenance1)
            all_features->swapchainMaintenance1 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: {
         const VkPhysicalDeviceDepthBiasControlFeaturesEXT *features = ext;
         if (features->depthBiasControl)
            all_features->depthBiasControl = true;
         if (features->leastRepresentableValueForceUnormRepresentation)
            all_features->leastRepresentableValueForceUnormRepresentation = true;
         if (features->floatRepresentation)
            all_features->floatRepresentation = true;
         if (features->depthBiasExact)
            all_features->depthBiasExact = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_EXT: {
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT *features = ext;
         if (features->rayTracingInvocationReorder)
            all_features->rayTracingInvocationReorder = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: {
         const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *features = ext;
         if (features->rayTracingInvocationReorder)
            all_features->rayTracingInvocationReorderNV = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV: {
         const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *features = ext;
         if (features->extendedSparseAddressSpace)
            all_features->extendedSparseAddressSpace = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: {
         const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *features = ext;
         if (features->multiviewPerViewViewports)
            all_features->multiviewPerViewViewports = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: {
         const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *features = ext;
         if (features->rayTracingPositionFetch)
            all_features->rayTracingPositionFetch = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: {
         const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *features = ext;
         if (features->multiviewPerViewRenderAreas)
            all_features->multiviewPerViewRenderAreas = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: {
         const VkPhysicalDeviceShaderObjectFeaturesEXT *features = ext;
         if (features->shaderObject)
            all_features->shaderObject = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: {
         const VkPhysicalDeviceShaderTileImageFeaturesEXT *features = ext;
         if (features->shaderTileImageColorReadAccess)
            all_features->shaderTileImageColorReadAccess = true;
         if (features->shaderTileImageDepthReadAccess)
            all_features->shaderTileImageDepthReadAccess = true;
         if (features->shaderTileImageStencilReadAccess)
            all_features->shaderTileImageStencilReadAccess = true;
         break;
      }

#ifdef VK_USE_PLATFORM_SCREEN_QNX
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: {
         const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *features = ext;
         if (features->screenBufferImport)
            all_features->screenBufferImport = true;
         break;
      }

#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: {
         const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *features = ext;
         if (features->cooperativeMatrix)
            all_features->cooperativeMatrix = true;
         if (features->cooperativeMatrixRobustBufferAccess)
            all_features->cooperativeMatrixRobustBufferAccess = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_CONVERSION_FEATURES_QCOM: {
         const VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM *features = ext;
         if (features->cooperativeMatrixConversion)
            all_features->cooperativeMatrixConversion = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD: {
         const VkPhysicalDeviceAntiLagFeaturesAMD *features = ext;
         if (features->antiLag)
            all_features->antiLag = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM: {
         const VkPhysicalDeviceTileMemoryHeapFeaturesQCOM *features = ext;
         if (features->tileMemoryHeap)
            all_features->tileMemoryHeap = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: {
         const VkPhysicalDeviceCubicClampFeaturesQCOM *features = ext;
         if (features->cubicRangeClamp)
            all_features->cubicRangeClamp = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: {
         const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *features = ext;
         if (features->ycbcrDegamma)
            all_features->ycbcrDegamma = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: {
         const VkPhysicalDeviceCubicWeightsFeaturesQCOM *features = ext;
         if (features->selectableCubicWeights)
            all_features->selectableCubicWeights = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: {
         const VkPhysicalDeviceImageProcessing2FeaturesQCOM *features = ext;
         if (features->textureBlockMatch2)
            all_features->textureBlockMatch2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_3_FEATURES_QCOM: {
         const VkPhysicalDeviceImageProcessing3FeaturesQCOM *features = ext;
         if (features->imageGatherLinear)
            all_features->imageGatherLinear = true;
         if (features->imageGatherExtendedModes)
            all_features->imageGatherExtendedModes = true;
         if (features->blockMatchExtendedClampToEdge)
            all_features->blockMatchExtendedClampToEdge = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: {
         const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *features = ext;
         if (features->descriptorPoolOverallocation)
            all_features->descriptorPoolOverallocation = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV: {
         const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *features = ext;
         if (features->perStageDescriptorSet)
            all_features->perStageDescriptorSet = true;
         if (features->dynamicPipelineLayout)
            all_features->dynamicPipelineLayout = true;
         break;
      }

#ifdef VK_USE_PLATFORM_ANDROID_KHR
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID: {
         const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *features = ext;
         if (features->externalFormatResolve)
            all_features->externalFormatResolve = true;
         break;
      }

#endif
      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM: {
         const VkPhysicalDeviceSchedulingControlsFeaturesARM *features = ext;
         if (features->schedulingControls)
            all_features->schedulingControls = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG: {
         const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *features = ext;
         if (features->relaxedLineRasterization)
            all_features->relaxedLineRasterization = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM: {
         const VkPhysicalDeviceRenderPassStripedFeaturesARM *features = ext;
         if (features->renderPassStriped)
            all_features->renderPassStriped = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM: {
         const VkPhysicalDevicePipelineOpacityMicromapFeaturesARM *features = ext;
         if (features->pipelineOpacityMicromap)
            all_features->pipelineOpacityMicromap = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR: {
         const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *features = ext;
         if (features->shaderMaximalReconvergence)
            all_features->shaderMaximalReconvergence = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES: {
         const VkPhysicalDeviceShaderSubgroupRotateFeatures *features = ext;
         if (features->shaderSubgroupRotate)
            all_features->shaderSubgroupRotate = true;
         if (features->shaderSubgroupRotateClustered)
            all_features->shaderSubgroupRotateClustered = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES: {
         const VkPhysicalDeviceShaderExpectAssumeFeatures *features = ext;
         if (features->shaderExpectAssume)
            all_features->shaderExpectAssume = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES: {
         const VkPhysicalDeviceShaderFloatControls2Features *features = ext;
         if (features->shaderFloatControls2)
            all_features->shaderFloatControls2 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES: {
         const VkPhysicalDeviceDynamicRenderingLocalReadFeatures *features = ext;
         if (features->dynamicRenderingLocalRead)
            all_features->dynamicRenderingLocalRead = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR: {
         const VkPhysicalDeviceShaderQuadControlFeaturesKHR *features = ext;
         if (features->shaderQuadControl)
            all_features->shaderQuadControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV: {
         const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *features = ext;
         if (features->shaderFloat16VectorAtomics)
            all_features->shaderFloat16VectorAtomics = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT: {
         const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *features = ext;
         if (features->memoryMapPlaced)
            all_features->memoryMapPlaced = true;
         if (features->memoryMapRangePlaced)
            all_features->memoryMapRangePlaced = true;
         if (features->memoryUnmapReserve)
            all_features->memoryUnmapReserve = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR: {
         const VkPhysicalDeviceShaderBfloat16FeaturesKHR *features = ext;
         if (features->shaderBFloat16Type)
            all_features->shaderBFloat16Type = true;
         if (features->shaderBFloat16DotProduct)
            all_features->shaderBFloat16DotProduct = true;
         if (features->shaderBFloat16CooperativeMatrix)
            all_features->shaderBFloat16CooperativeMatrix = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV: {
         const VkPhysicalDeviceRawAccessChainsFeaturesNV *features = ext;
         if (features->shaderRawAccessChains)
            all_features->shaderRawAccessChains = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV: {
         const VkPhysicalDeviceCommandBufferInheritanceFeaturesNV *features = ext;
         if (features->commandBufferInheritance)
            all_features->commandBufferInheritance = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA: {
         const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *features = ext;
         if (features->imageAlignmentControl)
            all_features->imageAlignmentControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT: {
         const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *features = ext;
         if (features->shaderReplicatedComposites)
            all_features->shaderReplicatedComposites = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR: {
         const VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR *features = ext;
         if (features->presentModeFifoLatestReady)
            all_features->presentModeFifoLatestReady = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV: {
         const VkPhysicalDeviceCooperativeMatrix2FeaturesNV *features = ext;
         if (features->cooperativeMatrixWorkgroupScope)
            all_features->cooperativeMatrixWorkgroupScope = true;
         if (features->cooperativeMatrixFlexibleDimensions)
            all_features->cooperativeMatrixFlexibleDimensions = true;
         if (features->cooperativeMatrixReductions)
            all_features->cooperativeMatrixReductionsNV = true;
         if (features->cooperativeMatrixConversions)
            all_features->cooperativeMatrixConversionsNV = true;
         if (features->cooperativeMatrixPerElementOperations)
            all_features->cooperativeMatrixPerElementOperationsNV = true;
         if (features->cooperativeMatrixTensorAddressing)
            all_features->cooperativeMatrixTensorAddressing = true;
         if (features->cooperativeMatrixBlockLoads)
            all_features->cooperativeMatrixBlockLoads = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_DECODE_VECTOR_FEATURES_NV: {
         const VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV *features = ext;
         if (features->cooperativeMatrixDecodeVector)
            all_features->cooperativeMatrixDecodeVector = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI: {
         const VkPhysicalDeviceHdrVividFeaturesHUAWEI *features = ext;
         if (features->hdrVivid)
            all_features->hdrVivid = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT: {
         const VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT *features = ext;
         if (features->vertexAttributeRobustness)
            all_features->vertexAttributeRobustness = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR: {
         const VkPhysicalDeviceDepthClampZeroOneFeaturesKHR *features = ext;
         if (features->depthClampZeroOne)
            all_features->depthClampZeroOne = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV: {
         const VkPhysicalDeviceCooperativeVectorFeaturesNV *features = ext;
         if (features->cooperativeVector)
            all_features->cooperativeVector = true;
         if (features->cooperativeVectorTraining)
            all_features->cooperativeVectorTraining = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM: {
         const VkPhysicalDeviceTileShadingFeaturesQCOM *features = ext;
         if (features->tileShading)
            all_features->tileShading = true;
         if (features->tileShadingFragmentStage)
            all_features->tileShadingFragmentStage = true;
         if (features->tileShadingColorAttachments)
            all_features->tileShadingColorAttachments = true;
         if (features->tileShadingDepthAttachments)
            all_features->tileShadingDepthAttachments = true;
         if (features->tileShadingStencilAttachments)
            all_features->tileShadingStencilAttachments = true;
         if (features->tileShadingInputAttachments)
            all_features->tileShadingInputAttachments = true;
         if (features->tileShadingSampledAttachments)
            all_features->tileShadingSampledAttachments = true;
         if (features->tileShadingPerTileDraw)
            all_features->tileShadingPerTileDraw = true;
         if (features->tileShadingPerTileDispatch)
            all_features->tileShadingPerTileDispatch = true;
         if (features->tileShadingDispatchTile)
            all_features->tileShadingDispatchTile = true;
         if (features->tileShadingApron)
            all_features->tileShadingApron = true;
         if (features->tileShadingAnisotropicApron)
            all_features->tileShadingAnisotropicApron = true;
         if (features->tileShadingAtomicOps)
            all_features->tileShadingAtomicOps = true;
         if (features->tileShadingImageProcessing)
            all_features->tileShadingImageProcessing = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE: {
         const VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE *features = ext;
         if (features->fragmentDensityMapLayered)
            all_features->fragmentDensityMapLayered = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV: {
         const VkPhysicalDevicePresentMeteringFeaturesNV *features = ext;
         if (features->presentMetering)
            all_features->presentMetering = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT: {
         const VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT *features = ext;
         if (features->shaderUniformBufferUnsizedArray)
            all_features->shaderUniformBufferUnsizedArray = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MIXED_FLOAT_DOT_PRODUCT_FEATURES_VALVE: {
         const VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE *features = ext;
         if (features->shaderMixedFloatDotProductFloat16AccFloat32)
            all_features->shaderMixedFloatDotProductFloat16AccFloat32 = true;
         if (features->shaderMixedFloatDotProductFloat16AccFloat16)
            all_features->shaderMixedFloatDotProductFloat16AccFloat16 = true;
         if (features->shaderMixedFloatDotProductBFloat16Acc)
            all_features->shaderMixedFloatDotProductBFloat16Acc = true;
         if (features->shaderMixedFloatDotProductFloat8AccFloat32)
            all_features->shaderMixedFloatDotProductFloat8AccFloat32 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_RESTART_INDEX_FEATURES_EXT: {
         const VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT *features = ext;
         if (features->primitiveRestartIndex)
            all_features->primitiveRestartIndex = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM: {
         const VkPhysicalDeviceFormatPackFeaturesARM *features = ext;
         if (features->formatPack)
            all_features->formatPack = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_THROTTLE_HINT_FEATURES_SEC: {
         const VkPhysicalDeviceThrottleHintFeaturesSEC *features = ext;
         if (features->throttleHint)
            all_features->throttleHint = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM: {
         const VkPhysicalDeviceTensorFeaturesARM *features = ext;
         if (features->tensorNonPacked)
            all_features->tensorNonPacked = true;
         if (features->shaderTensorAccess)
            all_features->shaderTensorAccess = true;
         if (features->shaderStorageTensorArrayDynamicIndexing)
            all_features->shaderStorageTensorArrayDynamicIndexing = true;
         if (features->shaderStorageTensorArrayNonUniformIndexing)
            all_features->shaderStorageTensorArrayNonUniformIndexing = true;
         if (features->descriptorBindingStorageTensorUpdateAfterBind)
            all_features->descriptorBindingStorageTensorUpdateAfterBind = true;
         if (features->tensors)
            all_features->tensors = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM: {
         const VkPhysicalDeviceDescriptorBufferTensorFeaturesARM *features = ext;
         if (features->descriptorBufferTensorDescriptors)
            all_features->descriptorBufferTensorDescriptors = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT: {
         const VkPhysicalDeviceShaderFloat8FeaturesEXT *features = ext;
         if (features->shaderFloat8)
            all_features->shaderFloat8 = true;
         if (features->shaderFloat8CooperativeMatrix)
            all_features->shaderFloat8CooperativeMatrix = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM: {
         const VkPhysicalDeviceDataGraphFeaturesARM *features = ext;
         if (features->dataGraph)
            all_features->dataGraph = true;
         if (features->dataGraphUpdateAfterBind)
            all_features->dataGraphUpdateAfterBind = true;
         if (features->dataGraphSpecializationConstants)
            all_features->dataGraphSpecializationConstants = true;
         if (features->dataGraphDescriptorBuffer)
            all_features->dataGraphDescriptorBuffer = true;
         if (features->dataGraphShaderModule)
            all_features->dataGraphShaderModule = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC: {
         const VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC *features = ext;
         if (features->pipelineCacheIncrementalMode)
            all_features->pipelineCacheIncrementalMode = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_MODEL_FEATURES_QCOM: {
         const VkPhysicalDeviceDataGraphModelFeaturesQCOM *features = ext;
         if (features->dataGraphModel)
            all_features->dataGraphModel = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR: {
         const VkPhysicalDeviceShaderUntypedPointersFeaturesKHR *features = ext;
         if (features->shaderUntypedPointers)
            all_features->shaderUntypedPointers = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE: {
         const VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE *features = ext;
         if (features->videoEncodeRgbConversion)
            all_features->videoEncodeRgbConversion = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT: {
         const VkPhysicalDeviceShader64BitIndexingFeaturesEXT *features = ext;
         if (features->shader64BitIndexing)
            all_features->shader64BitIndexing = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_QUEUE_PERF_HINT_FEATURES_QCOM: {
         const VkPhysicalDeviceQueuePerfHintFeaturesQCOM *features = ext;
         if (features->queuePerfHint)
            all_features->queuePerfHint = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_COUNTERS_BY_REGION_FEATURES_ARM: {
         const VkPhysicalDevicePerformanceCountersByRegionFeaturesARM *features = ext;
         if (features->performanceCountersByRegion)
            all_features->performanceCountersByRegion = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_OCCUPANCY_PRIORITY_FEATURES_NV: {
         const VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV *features = ext;
         if (features->computeOccupancyPriority)
            all_features->computeOccupancyPriority = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_LONG_VECTOR_FEATURES_EXT: {
         const VkPhysicalDeviceShaderLongVectorFeaturesEXT *features = ext;
         if (features->longVector)
            all_features->longVector = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_3D_FEATURES_EXT: {
         const VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT *features = ext;
         if (features->textureCompressionASTC_3D)
            all_features->textureCompressionASTC_3D = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_PARTITIONED_FEATURES_EXT: {
         const VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT *features = ext;
         if (features->shaderSubgroupPartitioned)
            all_features->shaderSubgroupPartitioned = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SPLIT_BARRIER_FEATURES_EXT: {
         const VkPhysicalDeviceShaderSplitBarrierFeaturesEXT *features = ext;
         if (features->shaderSplitBarrier)
            all_features->shaderSplitBarrier = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_HEAP_FEATURES_EXT: {
         const VkPhysicalDeviceDescriptorHeapFeaturesEXT *features = ext;
         if (features->descriptorHeap)
            all_features->descriptorHeap = true;
         if (features->descriptorHeapCaptureReplay)
            all_features->descriptorHeapCaptureReplay = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INSTRUMENTATION_FEATURES_ARM: {
         const VkPhysicalDeviceShaderInstrumentationFeaturesARM *features = ext;
         if (features->shaderInstrumentation)
            all_features->shaderInstrumentation = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_ADDRESS_COMMANDS_FEATURES_KHR: {
         const VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR *features = ext;
         if (features->deviceAddressCommands)
            all_features->deviceAddressCommands = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CONSTANT_DATA_FEATURES_KHR: {
         const VkPhysicalDeviceShaderConstantDataFeaturesKHR *features = ext;
         if (features->shaderConstantData)
            all_features->shaderConstantData = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ABORT_FEATURES_KHR: {
         const VkPhysicalDeviceShaderAbortFeaturesKHR *features = ext;
         if (features->shaderAbort)
            all_features->shaderAbort = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_OPTICAL_FLOW_FEATURES_ARM: {
         const VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM *features = ext;
         if (features->dataGraphOpticalFlow)
            all_features->dataGraphOpticalFlow = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_TILING_CONTROL_FEATURES_EXT: {
         const VkPhysicalDeviceImageTilingControlFeaturesEXT *features = ext;
         if (features->imageTilingControl)
            all_features->imageTilingControl = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OCP_MICROSCALING_TYPES_FEATURES_EXT: {
         const VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT *features = ext;
         if (features->shaderFloat4)
            all_features->shaderFloat4 = true;
         if (features->shaderFloat6)
            all_features->shaderFloat6 = true;
         if (features->shaderFloat8UnsignedE8M0)
            all_features->shaderFloat8UnsignedE8M0 = true;
         if (features->shaderMXInt8)
            all_features->shaderMXInt8 = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_MAINTENANCE_1_FEATURES_EXT: {
         const VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT *features = ext;
         if (features->cooperativeMatrixProperties2)
            all_features->cooperativeMatrixProperties2 = true;
         if (features->cooperativeMatrixReductions)
            all_features->cooperativeMatrixReductions = true;
         if (features->cooperativeMatrixConversions)
            all_features->cooperativeMatrixConversions = true;
         if (features->cooperativeMatrixPerElementOperations)
            all_features->cooperativeMatrixPerElementOperations = true;
         if (features->cooperativeMatrixGetCoordinate)
            all_features->cooperativeMatrixGetCoordinate = true;
         break;
      }

      case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_ALLOCATION_ALIGNMENT_FEATURES_VALVE: {
         const VkPhysicalDeviceBufferDeviceAddressAllocationAlignmentFeaturesVALVE *features = ext;
         if (features->bufferDeviceAddressAllocationAlignment)
            all_features->bufferDeviceAddressAllocationAlignment = true;
         break;
      }

      default:
         break;
      }
   }
}

void
vk_set_physical_device_features_1_0(struct vk_features *all_features,
                                    const VkPhysicalDeviceFeatures *pFeatures)
{
   if (pFeatures->robustBufferAccess)
      all_features->robustBufferAccess = true;
   if (pFeatures->fullDrawIndexUint32)
      all_features->fullDrawIndexUint32 = true;
   if (pFeatures->imageCubeArray)
      all_features->imageCubeArray = true;
   if (pFeatures->independentBlend)
      all_features->independentBlend = true;
   if (pFeatures->geometryShader)
      all_features->geometryShader = true;
   if (pFeatures->tessellationShader)
      all_features->tessellationShader = true;
   if (pFeatures->sampleRateShading)
      all_features->sampleRateShading = true;
   if (pFeatures->dualSrcBlend)
      all_features->dualSrcBlend = true;
   if (pFeatures->logicOp)
      all_features->logicOp = true;
   if (pFeatures->multiDrawIndirect)
      all_features->multiDrawIndirect = true;
   if (pFeatures->drawIndirectFirstInstance)
      all_features->drawIndirectFirstInstance = true;
   if (pFeatures->depthClamp)
      all_features->depthClamp = true;
   if (pFeatures->depthBiasClamp)
      all_features->depthBiasClamp = true;
   if (pFeatures->fillModeNonSolid)
      all_features->fillModeNonSolid = true;
   if (pFeatures->depthBounds)
      all_features->depthBounds = true;
   if (pFeatures->wideLines)
      all_features->wideLines = true;
   if (pFeatures->largePoints)
      all_features->largePoints = true;
   if (pFeatures->alphaToOne)
      all_features->alphaToOne = true;
   if (pFeatures->multiViewport)
      all_features->multiViewport = true;
   if (pFeatures->samplerAnisotropy)
      all_features->samplerAnisotropy = true;
   if (pFeatures->textureCompressionETC2)
      all_features->textureCompressionETC2 = true;
   if (pFeatures->textureCompressionASTC_LDR)
      all_features->textureCompressionASTC_LDR = true;
   if (pFeatures->textureCompressionBC)
      all_features->textureCompressionBC = true;
   if (pFeatures->occlusionQueryPrecise)
      all_features->occlusionQueryPrecise = true;
   if (pFeatures->pipelineStatisticsQuery)
      all_features->pipelineStatisticsQuery = true;
   if (pFeatures->vertexPipelineStoresAndAtomics)
      all_features->vertexPipelineStoresAndAtomics = true;
   if (pFeatures->fragmentStoresAndAtomics)
      all_features->fragmentStoresAndAtomics = true;
   if (pFeatures->shaderTessellationAndGeometryPointSize)
      all_features->shaderTessellationAndGeometryPointSize = true;
   if (pFeatures->shaderImageGatherExtended)
      all_features->shaderImageGatherExtended = true;
   if (pFeatures->shaderStorageImageExtendedFormats)
      all_features->shaderStorageImageExtendedFormats = true;
   if (pFeatures->shaderStorageImageMultisample)
      all_features->shaderStorageImageMultisample = true;
   if (pFeatures->shaderStorageImageReadWithoutFormat)
      all_features->shaderStorageImageReadWithoutFormat = true;
   if (pFeatures->shaderStorageImageWriteWithoutFormat)
      all_features->shaderStorageImageWriteWithoutFormat = true;
   if (pFeatures->shaderUniformBufferArrayDynamicIndexing)
      all_features->shaderUniformBufferArrayDynamicIndexing = true;
   if (pFeatures->shaderSampledImageArrayDynamicIndexing)
      all_features->shaderSampledImageArrayDynamicIndexing = true;
   if (pFeatures->shaderStorageBufferArrayDynamicIndexing)
      all_features->shaderStorageBufferArrayDynamicIndexing = true;
   if (pFeatures->shaderStorageImageArrayDynamicIndexing)
      all_features->shaderStorageImageArrayDynamicIndexing = true;
   if (pFeatures->shaderClipDistance)
      all_features->shaderClipDistance = true;
   if (pFeatures->shaderCullDistance)
      all_features->shaderCullDistance = true;
   if (pFeatures->shaderFloat64)
      all_features->shaderFloat64 = true;
   if (pFeatures->shaderInt64)
      all_features->shaderInt64 = true;
   if (pFeatures->shaderInt16)
      all_features->shaderInt16 = true;
   if (pFeatures->shaderResourceResidency)
      all_features->shaderResourceResidency = true;
   if (pFeatures->shaderResourceMinLod)
      all_features->shaderResourceMinLod = true;
   if (pFeatures->sparseBinding)
      all_features->sparseBinding = true;
   if (pFeatures->sparseResidencyBuffer)
      all_features->sparseResidencyBuffer = true;
   if (pFeatures->sparseResidencyImage2D)
      all_features->sparseResidencyImage2D = true;
   if (pFeatures->sparseResidencyImage3D)
      all_features->sparseResidencyImage3D = true;
   if (pFeatures->sparseResidency2Samples)
      all_features->sparseResidency2Samples = true;
   if (pFeatures->sparseResidency4Samples)
      all_features->sparseResidency4Samples = true;
   if (pFeatures->sparseResidency8Samples)
      all_features->sparseResidency8Samples = true;
   if (pFeatures->sparseResidency16Samples)
      all_features->sparseResidency16Samples = true;
   if (pFeatures->sparseResidencyAliased)
      all_features->sparseResidencyAliased = true;
   if (pFeatures->variableMultisampleRate)
      all_features->variableMultisampleRate = true;
   if (pFeatures->inheritedQueries)
      all_features->inheritedQueries = true;
}
