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

// Function: sub_00262A68
// Address: 0x262a68 - 0x262ad0
void sub_00262A68_0x262a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A68_0x262a68");
#endif

    ctx->pc = 0x262a68u;

    // 0x262a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262a6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x262a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a70: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x262a70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262a74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x262a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a78: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x262a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x262a7c: 0x22342  srl         $a0, $v0, 13
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x262a80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x262a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x262a84: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x262a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x262a88: 0x2463ff90  addiu       $v1, $v1, -0x70
    ctx->pc = 0x262a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
    // 0x262a8c: 0x22bc0  sll         $a1, $v0, 15
    ctx->pc = 0x262a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x262a90: 0x308403ff  andi        $a0, $a0, 0x3FF
    ctx->pc = 0x262a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x262a94: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262A94u;
    {
        const bool branch_taken_0x262a94 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x262A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A94u;
        // 0x262a98: 0x28620020  slti        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a94) {
            ctx->pc = 0x262AA8u;
            goto label_262aa8;
        }
    }
    ctx->pc = 0x262A9Cu;
    // 0x262a9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x262a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262aa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262AA0u;
    {
        const bool branch_taken_0x262aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AA0u;
        // 0x262aa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aa0) {
            ctx->pc = 0x262AB8u;
            goto label_262ab8;
        }
    }
    ctx->pc = 0x262AA8u;
label_262aa8:
    // 0x262aa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262AA8u;
    {
        const bool branch_taken_0x262aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AA8u;
        // 0x262aac: 0x31280  sll         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aa8) {
            ctx->pc = 0x262ABCu;
            goto label_262abc;
        }
    }
    ctx->pc = 0x262AB0u;
    // 0x262ab0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x262ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x262ab4: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_262ab8:
    // 0x262ab8: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_262abc:
    // 0x262abc: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x262abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x262ac0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x262ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x262ac4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x262ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x262ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x262AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AC8u;
        // 0x262acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262AD0u;
}
