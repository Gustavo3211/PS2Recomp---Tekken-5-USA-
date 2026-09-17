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

// Function: sub_00123800
// Address: 0x123800 - 0x123858
void sub_00123800_0x123800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123800_0x123800");
#endif

    switch (ctx->pc) {
        case 0x123818u: goto label_123818;
        case 0x123848u: goto label_123848;
        default: break;
    }

    ctx->pc = 0x123800u;

    // 0x123800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x123804: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x123804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x123808: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12380c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123810: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123810u;
    SET_GPR_U32(ctx, 31, 0x123818u);
    ctx->pc = 0x123814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123810u;
    // 0x123814: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123810u, 0x123818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123818u;
label_123818:
    // 0x123818: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x123818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x12381c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x12381cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x123820: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123824: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x123824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123828: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x123828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x12382c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12382cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x123830: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x123830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x123834: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x123834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x123838: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12383c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123840: 0xc049c62  jal         func_127188
    ctx->pc = 0x123840u;
    SET_GPR_U32(ctx, 31, 0x123848u);
    ctx->pc = 0x123844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123840u;
    // 0x123844: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127188u, 0x123840u, 0x123848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123848u;
label_123848:
    // 0x123848: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12384c: 0x3e00008  jr          $ra
    ctx->pc = 0x12384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12384Cu;
        // 0x123850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123854u;
    // 0x123854: 0x0  nop
    ctx->pc = 0x123854u;
    // NOP
    ctx->pc = 0x123858u;
}
