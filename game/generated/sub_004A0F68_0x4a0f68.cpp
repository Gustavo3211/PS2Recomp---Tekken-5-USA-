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

// Function: sub_004A0F68
// Address: 0x4a0f68 - 0x4a0f88
void sub_004A0F68_0x4a0f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0F68_0x4a0f68");
#endif

    ctx->pc = 0x4a0f68u;

    // 0x4a0f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a0f6c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a0f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0f74: 0xa440d718  sh          $zero, -0x28E8($v0)
    ctx->pc = 0x4a0f74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D718u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D718u, _value); } while (0);
    // 0x4a0f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0f7c: 0x8128592  j           func_4A1648
    ctx->pc = 0x4A0F7Cu;
    ctx->pc = 0x4A0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0F7Cu;
    // 0x4a0f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1648u, 0x4A0F7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A0F84u;
    // 0x4a0f84: 0x0  nop
    ctx->pc = 0x4a0f84u;
    // NOP
    ctx->pc = 0x4a0f88u;
}
