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

// Function: sub_004AA750
// Address: 0x4aa750 - 0x4aa7b0
void sub_004AA750_0x4aa750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA750_0x4aa750");
#endif

    switch (ctx->pc) {
        case 0x4aa7a4u: goto label_4aa7a4;
        default: break;
    }

    ctx->pc = 0x4aa750u;

    // 0x4aa750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aa754: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4aa754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aa758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aa75c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4aa75cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa760: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4aa760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa764: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4aa764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa768: 0x84c90012  lh          $t1, 0x12($a2)
    ctx->pc = 0x4aa768u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4aa76c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4aa76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa770: 0x84c20010  lh          $v0, 0x10($a2)
    ctx->pc = 0x4aa770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4aa774: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4aa774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa778: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa77c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x4aa77cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x4aa780: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4aa780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4aa784: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aa784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aa788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa78c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aa78cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aa790: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4aa790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4aa794: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4aa794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aa798: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aa798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aa79c: 0xc12a71c  jal         func_4A9C70
    ctx->pc = 0x4AA79Cu;
    SET_GPR_U32(ctx, 31, 0x4AA7A4u);
    ctx->pc = 0x4AA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA79Cu;
    // 0x4aa7a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C70u, 0x4AA79Cu, 0x4AA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA7A4u;
label_4aa7a4:
    // 0x4aa7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aa7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA7A8u;
        // 0x4aa7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA7B0u;
}
