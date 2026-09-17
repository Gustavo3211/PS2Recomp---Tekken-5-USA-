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

// Function: sub_004A3640
// Address: 0x4a3640 - 0x4a3678
void sub_004A3640_0x4a3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3640_0x4a3640");
#endif

    switch (ctx->pc) {
        case 0x4a3650u: goto label_4a3650;
        case 0x4a3658u: goto label_4a3658;
        case 0x4a3664u: goto label_4a3664;
        default: break;
    }

    ctx->pc = 0x4a3640u;

    // 0x4a3640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3648: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x4A3648u;
    SET_GPR_U32(ctx, 31, 0x4A3650u);
    ctx->pc = 0x4A364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3648u;
    // 0x4a364c: 0x240400d5  addiu       $a0, $zero, 0xD5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x4A3648u, 0x4A3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3650u;
label_4a3650:
    // 0x4a3650: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3650u;
    SET_GPR_U32(ctx, 31, 0x4A3658u);
    ctx->pc = 0x4A3654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3650u;
    // 0x4a3654: 0x3c040005  lui         $a0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3650u, 0x4A3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3658u;
label_4a3658:
    // 0x4a3658: 0x3c04000e  lui         $a0, 0xE
    ctx->pc = 0x4a3658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14 << 16));
    // 0x4a365c: 0xc124910  jal         func_492440
    ctx->pc = 0x4A365Cu;
    SET_GPR_U32(ctx, 31, 0x4A3664u);
    ctx->pc = 0x4A3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A365Cu;
    // 0x4a3660: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A365Cu, 0x4A3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3664u;
label_4a3664:
    // 0x4a3664: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a3664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a3668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a366c: 0x248489b0  addiu       $a0, $a0, -0x7650
    ctx->pc = 0x4a366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937008));
    // 0x4a3670: 0x8123bf2  j           func_48EFC8
    ctx->pc = 0x4A3670u;
    ctx->pc = 0x4A3674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3670u;
    // 0x4a3674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    sub_0048EFC8_0x48efc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4A3678u;
}
