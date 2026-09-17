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

// Function: sub_002DF798
// Address: 0x2df798 - 0x2df840
void sub_002DF798_0x2df798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF798_0x2df798");
#endif

    switch (ctx->pc) {
        case 0x2df7e8u: goto label_2df7e8;
        case 0x2df7f0u: goto label_2df7f0;
        case 0x2df830u: goto label_2df830;
        default: break;
    }

    ctx->pc = 0x2df798u;

    // 0x2df798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2df7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2df7a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2df7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2df7ac: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x2df7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2df7b0: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x2df7b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2df7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2df7b8: 0x3c0357ff  lui         $v1, 0x57FF
    ctx->pc = 0x2df7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22527 << 16));
    // 0x2df7bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2df7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2df7c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2df7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2df7c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2df7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2df7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7cc: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2df7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7d4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2df7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df7d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2df7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2df7dc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2df7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2df7e0: 0xc0b7e10  jal         func_2DF840
    ctx->pc = 0x2DF7E0u;
    SET_GPR_U32(ctx, 31, 0x2DF7E8u);
    ctx->pc = 0x2DF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7E0u;
    // 0x2df7e4: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF840u, 0x2DF7E0u, 0x2DF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7E8u;
label_2df7e8:
    // 0x2df7e8: 0xc0b7e80  jal         func_2DFA00
    ctx->pc = 0x2DF7E8u;
    SET_GPR_U32(ctx, 31, 0x2DF7F0u);
    ctx->pc = 0x2DF7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7E8u;
    // 0x2df7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFA00u, 0x2DF7E8u, 0x2DF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7F0u;
label_2df7f0:
    // 0x2df7f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2df7f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df7f8: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x2df7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x2df7fc: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x2df7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df800: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2df800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2df804: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2df804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df808: 0xa2000052  sb          $zero, 0x52($s0)
    ctx->pc = 0x2df808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df80c: 0xa2000053  sb          $zero, 0x53($s0)
    ctx->pc = 0x2df80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF810u;
    {
        const bool branch_taken_0x2df810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF810u;
        // 0x2df814: 0xa2000055  sb          $zero, 0x55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df810) {
            ctx->pc = 0x2DF830u;
            goto label_2df830;
        }
    }
    ctx->pc = 0x2DF818u;
    // 0x2df818: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2df818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2df81c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2df81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2df820: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2df820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2df824: 0x248402f4  addiu       $a0, $a0, 0x2F4
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 756));
    // 0x2df828: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2DF828u;
    SET_GPR_U32(ctx, 31, 0x2DF830u);
    ctx->pc = 0x2DF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF828u;
    // 0x2df82c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2DF828u, 0x2DF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF830u;
label_2df830:
    // 0x2df830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df834: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2df834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df838: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF838u;
        // 0x2df83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF840u;
}
