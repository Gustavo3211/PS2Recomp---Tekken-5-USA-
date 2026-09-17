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

// Function: sub_002E5050
// Address: 0x2e5050 - 0x2e50d0
void sub_002E5050_0x2e5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5050_0x2e5050");
#endif

    switch (ctx->pc) {
        case 0x2e5074u: goto label_2e5074;
        case 0x2e5088u: goto label_2e5088;
        case 0x2e509cu: goto label_2e509c;
        case 0x2e50acu: goto label_2e50ac;
        case 0x2e50b4u: goto label_2e50b4;
        default: break;
    }

    ctx->pc = 0x2e5050u;

    // 0x2e5050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e505c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e5060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e5064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e5064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e5068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e5068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e506c: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x2E506Cu;
    SET_GPR_U32(ctx, 31, 0x2E5074u);
    ctx->pc = 0x2E5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E506Cu;
    // 0x2e5070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x2E506Cu, 0x2E5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5074u;
label_2e5074:
    // 0x2e5074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e507c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5080: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x2E5080u;
    SET_GPR_U32(ctx, 31, 0x2E5088u);
    ctx->pc = 0x2E5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5080u;
    // 0x2e5084: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x2E5080u, 0x2E5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5088u;
label_2e5088:
    // 0x2e5088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e508c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5094: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x2E5094u;
    SET_GPR_U32(ctx, 31, 0x2E509Cu);
    ctx->pc = 0x2E5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5094u;
    // 0x2e5098: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x2E5094u, 0x2E509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E509Cu;
label_2e509c:
    // 0x2e509c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e50a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e50a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50a4: 0xc0452ce  jal         func_114B38
    ctx->pc = 0x2E50A4u;
    SET_GPR_U32(ctx, 31, 0x2E50ACu);
    ctx->pc = 0x2E50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50A4u;
    // 0x2e50a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0x2E50A4u, 0x2E50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50ACu;
label_2e50ac:
    // 0x2e50ac: 0xc0451e0  jal         func_114780
    ctx->pc = 0x2E50ACu;
    SET_GPR_U32(ctx, 31, 0x2E50B4u);
    ctx->pc = 0x2E50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50ACu;
    // 0x2e50b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114780u, 0x2E50ACu, 0x2E50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50B4u;
label_2e50b4:
    // 0x2e50b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e50b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e50b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e50b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e50bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e50bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e50c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e50c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e50c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E50C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50C4u;
        // 0x2e50c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E50C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E50CCu;
    // 0x2e50cc: 0x0  nop
    ctx->pc = 0x2e50ccu;
    // NOP
    ctx->pc = 0x2e50d0u;
}
