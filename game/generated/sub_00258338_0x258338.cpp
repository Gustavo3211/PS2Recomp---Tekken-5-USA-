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

// Function: sub_00258338
// Address: 0x258338 - 0x2583b0
void sub_00258338_0x258338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258338_0x258338");
#endif

    switch (ctx->pc) {
        case 0x258378u: goto label_258378;
        default: break;
    }

    ctx->pc = 0x258338u;

    // 0x258338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25833c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x258344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x258348: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x258348u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x25834c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258350: 0x26310cc0  addiu       $s1, $s1, 0xCC0
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3264));
    // 0x258354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x258354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258358: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x258358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25835c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x25835cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258360: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258364: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x258368: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25836c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25836cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x258370: 0xc095c90  jal         func_257240
    ctx->pc = 0x258370u;
    SET_GPR_U32(ctx, 31, 0x258378u);
    ctx->pc = 0x258374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258370u;
    // 0x258374: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257240u, 0x258370u, 0x258378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258378u;
label_258378:
    // 0x258378: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x258378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25837c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x258380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258384: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x258384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x258388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25838c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258394: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x258394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258398: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25839c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2583a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2583a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2583a4: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x2583a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x2583a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2583A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2583ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583A8u;
        // 0x2583ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583B0u;
}
