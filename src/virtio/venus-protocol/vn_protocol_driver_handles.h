/* This file is generated by venus-protocol git-2564dba1. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_DRIVER_HANDLES_H
#define VN_PROTOCOL_DRIVER_HANDLES_H

#include "vn_protocol_driver_types.h"

/* VK_DEFINE_HANDLE(VkInstance) */

static inline size_t
vn_sizeof_VkInstance(const VkInstance *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkInstance(struct vn_cs_encoder *enc, const VkInstance *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_INSTANCE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkInstance(struct vn_cs_decoder *dec, VkInstance *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_INSTANCE);
}

/* VK_DEFINE_HANDLE(VkPhysicalDevice) */

static inline size_t
vn_sizeof_VkPhysicalDevice(const VkPhysicalDevice *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkPhysicalDevice(struct vn_cs_encoder *enc, const VkPhysicalDevice *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PHYSICAL_DEVICE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPhysicalDevice(struct vn_cs_decoder *dec, VkPhysicalDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PHYSICAL_DEVICE);
}

/* VK_DEFINE_HANDLE(VkDevice) */

static inline size_t
vn_sizeof_VkDevice(const VkDevice *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDevice(struct vn_cs_encoder *enc, const VkDevice *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DEVICE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDevice(struct vn_cs_decoder *dec, VkDevice *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DEVICE);
}

/* VK_DEFINE_HANDLE(VkQueue) */

static inline size_t
vn_sizeof_VkQueue(const VkQueue *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkQueue(struct vn_cs_encoder *enc, const VkQueue *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_QUEUE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkQueue(struct vn_cs_decoder *dec, VkQueue *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_QUEUE);
}

/* VK_DEFINE_HANDLE(VkCommandBuffer) */

static inline size_t
vn_sizeof_VkCommandBuffer(const VkCommandBuffer *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkCommandBuffer(struct vn_cs_encoder *enc, const VkCommandBuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_COMMAND_BUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkCommandBuffer(struct vn_cs_decoder *dec, VkCommandBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_COMMAND_BUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeviceMemory) */

static inline size_t
vn_sizeof_VkDeviceMemory(const VkDeviceMemory *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDeviceMemory(struct vn_cs_encoder *enc, const VkDeviceMemory *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DEVICE_MEMORY);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDeviceMemory(struct vn_cs_decoder *dec, VkDeviceMemory *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DEVICE_MEMORY);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCommandPool) */

static inline size_t
vn_sizeof_VkCommandPool(const VkCommandPool *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkCommandPool(struct vn_cs_encoder *enc, const VkCommandPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_COMMAND_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkCommandPool(struct vn_cs_decoder *dec, VkCommandPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_COMMAND_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBuffer) */

static inline size_t
vn_sizeof_VkBuffer(const VkBuffer *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkBuffer(struct vn_cs_encoder *enc, const VkBuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_BUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkBuffer(struct vn_cs_decoder *dec, VkBuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_BUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBufferView) */

static inline size_t
vn_sizeof_VkBufferView(const VkBufferView *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkBufferView(struct vn_cs_encoder *enc, const VkBufferView *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_BUFFER_VIEW);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkBufferView(struct vn_cs_decoder *dec, VkBufferView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_BUFFER_VIEW);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImage) */

static inline size_t
vn_sizeof_VkImage(const VkImage *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkImage(struct vn_cs_encoder *enc, const VkImage *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_IMAGE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkImage(struct vn_cs_decoder *dec, VkImage *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_IMAGE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImageView) */

static inline size_t
vn_sizeof_VkImageView(const VkImageView *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkImageView(struct vn_cs_encoder *enc, const VkImageView *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_IMAGE_VIEW);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkImageView(struct vn_cs_decoder *dec, VkImageView *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_IMAGE_VIEW);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkShaderModule) */

static inline size_t
vn_sizeof_VkShaderModule(const VkShaderModule *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkShaderModule(struct vn_cs_encoder *enc, const VkShaderModule *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SHADER_MODULE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkShaderModule(struct vn_cs_decoder *dec, VkShaderModule *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SHADER_MODULE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipeline) */

static inline size_t
vn_sizeof_VkPipeline(const VkPipeline *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkPipeline(struct vn_cs_encoder *enc, const VkPipeline *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipeline(struct vn_cs_decoder *dec, VkPipeline *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineLayout) */

static inline size_t
vn_sizeof_VkPipelineLayout(const VkPipelineLayout *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkPipelineLayout(struct vn_cs_encoder *enc, const VkPipelineLayout *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE_LAYOUT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipelineLayout(struct vn_cs_decoder *dec, VkPipelineLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE_LAYOUT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSampler) */

static inline size_t
vn_sizeof_VkSampler(const VkSampler *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkSampler(struct vn_cs_encoder *enc, const VkSampler *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SAMPLER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSampler(struct vn_cs_decoder *dec, VkSampler *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SAMPLER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSet) */

static inline size_t
vn_sizeof_VkDescriptorSet(const VkDescriptorSet *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDescriptorSet(struct vn_cs_encoder *enc, const VkDescriptorSet *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorSet(struct vn_cs_decoder *dec, VkDescriptorSet *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_SET);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSetLayout) */

static inline size_t
vn_sizeof_VkDescriptorSetLayout(const VkDescriptorSetLayout *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDescriptorSetLayout(struct vn_cs_encoder *enc, const VkDescriptorSetLayout *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorSetLayout(struct vn_cs_decoder *dec, VkDescriptorSetLayout *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorPool) */

static inline size_t
vn_sizeof_VkDescriptorPool(const VkDescriptorPool *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDescriptorPool(struct vn_cs_encoder *enc, const VkDescriptorPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorPool(struct vn_cs_decoder *dec, VkDescriptorPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFence) */

static inline size_t
vn_sizeof_VkFence(const VkFence *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkFence(struct vn_cs_encoder *enc, const VkFence *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_FENCE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkFence(struct vn_cs_decoder *dec, VkFence *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_FENCE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSemaphore) */

static inline size_t
vn_sizeof_VkSemaphore(const VkSemaphore *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkSemaphore(struct vn_cs_encoder *enc, const VkSemaphore *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SEMAPHORE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSemaphore(struct vn_cs_decoder *dec, VkSemaphore *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SEMAPHORE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkEvent) */

static inline size_t
vn_sizeof_VkEvent(const VkEvent *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkEvent(struct vn_cs_encoder *enc, const VkEvent *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_EVENT);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkEvent(struct vn_cs_decoder *dec, VkEvent *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_EVENT);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkQueryPool) */

static inline size_t
vn_sizeof_VkQueryPool(const VkQueryPool *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkQueryPool(struct vn_cs_encoder *enc, const VkQueryPool *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_QUERY_POOL);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkQueryPool(struct vn_cs_decoder *dec, VkQueryPool *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_QUERY_POOL);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFramebuffer) */

static inline size_t
vn_sizeof_VkFramebuffer(const VkFramebuffer *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkFramebuffer(struct vn_cs_encoder *enc, const VkFramebuffer *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_FRAMEBUFFER);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkFramebuffer(struct vn_cs_decoder *dec, VkFramebuffer *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_FRAMEBUFFER);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkRenderPass) */

static inline size_t
vn_sizeof_VkRenderPass(const VkRenderPass *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkRenderPass(struct vn_cs_encoder *enc, const VkRenderPass *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_RENDER_PASS);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkRenderPass(struct vn_cs_decoder *dec, VkRenderPass *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_RENDER_PASS);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineCache) */

static inline size_t
vn_sizeof_VkPipelineCache(const VkPipelineCache *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkPipelineCache(struct vn_cs_encoder *enc, const VkPipelineCache *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_PIPELINE_CACHE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkPipelineCache(struct vn_cs_decoder *dec, VkPipelineCache *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_PIPELINE_CACHE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorUpdateTemplate) */

static inline size_t
vn_sizeof_VkDescriptorUpdateTemplate(const VkDescriptorUpdateTemplate *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkDescriptorUpdateTemplate(struct vn_cs_encoder *enc, const VkDescriptorUpdateTemplate *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkDescriptorUpdateTemplate(struct vn_cs_decoder *dec, VkDescriptorUpdateTemplate *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE);
}

/* VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSamplerYcbcrConversion) */

static inline size_t
vn_sizeof_VkSamplerYcbcrConversion(const VkSamplerYcbcrConversion *val)
{
    return sizeof(uint64_t);
}

static inline void
vn_encode_VkSamplerYcbcrConversion(struct vn_cs_encoder *enc, const VkSamplerYcbcrConversion *val)
{
    const uint64_t id = vn_cs_handle_load_id((const void **)val, VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION);
    vn_encode_uint64_t(enc, &id);
}

static inline void
vn_decode_VkSamplerYcbcrConversion(struct vn_cs_decoder *dec, VkSamplerYcbcrConversion *val)
{
    uint64_t id;
    vn_decode_uint64_t(dec, &id);
    vn_cs_handle_store_id((void **)val, id, VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION);
}

#endif /* VN_PROTOCOL_DRIVER_HANDLES_H */