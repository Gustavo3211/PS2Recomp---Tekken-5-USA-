#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004931C8
// Address: 0x4931c8 - 0x4931f0
void sub_004931C8_0x4931c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004931C8_0x4931c8");
#endif

    ctx->pc = 0x4931c8u;

    // 0x4931c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4931c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4931cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4931ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4931d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4931d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4931d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4931d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4931d8: 0x24427c08  addiu       $v0, $v0, 0x7C08
    ctx->pc = 0x4931d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31752));
    // 0x4931dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4931dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4931e0: 0xac62f928  sw          $v0, -0x6D8($v1)
    ctx->pc = 0x4931e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F928u, _value); } while (0);
    // 0x4931e4: 0x81298fa  j           func_4A63E8
    ctx->pc = 0x4931E4u;
    ctx->pc = 0x4931E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4931E4u;
    // 0x4931e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A63E8u;
    sub_004A63E8_0x4a63e8(rdram, ctx, runtime); return;
    ctx->pc = 0x4931ECu;
    // 0x4931ec: 0x0  nop
    ctx->pc = 0x4931ecu;
    // NOP
    ctx->pc = 0x4931f0u;
}
