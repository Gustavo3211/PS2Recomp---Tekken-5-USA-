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

// Function: sub_002CE170
// Address: 0x2ce170 - 0x2ce1e8
void sub_002CE170_0x2ce170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE170_0x2ce170");
#endif

    switch (ctx->pc) {
        case 0x2ce184u: goto label_2ce184;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce1c8u: goto label_2ce1c8;
        default: break;
    }

    ctx->pc = 0x2ce170u;

    // 0x2ce170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ce178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ce17c: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CE17Cu;
    SET_GPR_U32(ctx, 31, 0x2CE184u);
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CE17Cu, 0x2CE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE184u;
label_2ce184:
    // 0x2ce184: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CE184u;
    SET_GPR_U32(ctx, 31, 0x2CE18Cu);
    ctx->pc = 0x2CE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE184u;
    // 0x2ce188: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CE184u, 0x2CE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE18Cu;
label_2ce18c:
    // 0x2ce18c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce190: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2ce190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ce194: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce198: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ce198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce19c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ce19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ce1a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ce1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ce1a4: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE1A4u;
    {
        const bool branch_taken_0x2ce1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1A4u;
        // 0x2ce1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1a4) {
            ctx->pc = 0x2CE1D4u;
            goto label_2ce1d4;
        }
    }
    ctx->pc = 0x2CE1ACu;
    // 0x2ce1ac: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CE1ACu;
    SET_GPR_U32(ctx, 31, 0x2CE1B4u);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CE1ACu, 0x2CE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1B4u;
label_2ce1b4:
    // 0x2ce1b4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2ce1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce1b8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ce1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ce1bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ce1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ce1c0: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2CE1C0u;
    SET_GPR_U32(ctx, 31, 0x2CE1C8u);
    ctx->pc = 0x2CE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE1C0u;
    // 0x2ce1c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2CE1C0u, 0x2CE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1C8u;
label_2ce1c8:
    // 0x2ce1c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE1C8u;
    {
        const bool branch_taken_0x2ce1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1C8u;
        // 0x2ce1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1c8) {
            ctx->pc = 0x2CE1D4u;
            goto label_2ce1d4;
        }
    }
    ctx->pc = 0x2CE1D0u;
    // 0x2ce1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce1d4:
    // 0x2ce1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce1d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ce1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE1DCu;
        // 0x2ce1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE1E4u;
    // 0x2ce1e4: 0x0  nop
    ctx->pc = 0x2ce1e4u;
    // NOP
    ctx->pc = 0x2ce1e8u;
}
