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

// Function: sub_0010E868
// Address: 0x10e868 - 0x10e8d8
void sub_0010E868_0x10e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E868_0x10e868");
#endif

    switch (ctx->pc) {
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8bcu: goto label_10e8bc;
        default: break;
    }

    ctx->pc = 0x10e868u;

    // 0x10e868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e86c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e870: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x10e874: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e878: 0x822210d8  lb          $v0, 0x10D8($s1)
    ctx->pc = 0x10e878u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x1310D8u));
    // 0x10e87c: 0x263210d8  addiu       $s2, $s1, 0x10D8
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4312));
    // 0x10e880: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e884: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10E884u;
    {
        const bool branch_taken_0x10e884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e884) {
            ctx->pc = 0x10E8BCu;
            goto label_10e8bc;
        }
    }
    ctx->pc = 0x10E88Cu;
    // 0x10e88c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x10e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x10e890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e894: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x10E894u;
    SET_GPR_U32(ctx, 31, 0x10E89Cu);
    ctx->pc = 0x10E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E894u;
    // 0x10e898: 0x2484dec8  addiu       $a0, $a0, -0x2138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x10E894u, 0x10E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E89Cu;
label_10e89c:
    // 0x10e89c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8a0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E8A0u;
    {
        const bool branch_taken_0x10e8a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A0u;
        // 0x10e8a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8a0) {
            ctx->pc = 0x10E8BCu;
            goto label_10e8bc;
        }
    }
    ctx->pc = 0x10E8A8u;
    // 0x10e8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8ac: 0xc0452ce  jal         func_114B38
    ctx->pc = 0x10E8ACu;
    SET_GPR_U32(ctx, 31, 0x10E8B4u);
    ctx->pc = 0x10E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8ACu;
    // 0x10e8b0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0x10E8ACu, 0x10E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8B4u;
label_10e8b4:
    // 0x10e8b4: 0xc0451e0  jal         func_114780
    ctx->pc = 0x10E8B4u;
    SET_GPR_U32(ctx, 31, 0x10E8BCu);
    ctx->pc = 0x10E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8B4u;
    // 0x10e8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114780u, 0x10E8B4u, 0x10E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8BCu;
label_10e8bc:
    // 0x10e8bc: 0x262210d8  addiu       $v0, $s1, 0x10D8
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4312));
    // 0x10e8c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e8c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e8c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8D0u;
        // 0x10e8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E8D8u;
}
