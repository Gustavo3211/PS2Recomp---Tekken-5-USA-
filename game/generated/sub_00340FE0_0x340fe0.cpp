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

// Function: sub_00340FE0
// Address: 0x340fe0 - 0x341040
void sub_00340FE0_0x340fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340FE0_0x340fe0");
#endif

    switch (ctx->pc) {
        case 0x340ff4u: goto label_340ff4;
        case 0x34100cu: goto label_34100c;
        case 0x34101cu: goto label_34101c;
        default: break;
    }

    ctx->pc = 0x340fe0u;

    // 0x340fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x340fec: 0xc0d0410  jal         func_341040
    ctx->pc = 0x340FECu;
    SET_GPR_U32(ctx, 31, 0x340FF4u);
    ctx->pc = 0x340FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340FECu;
    // 0x340ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341040u, 0x340FECu, 0x340FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340FF4u;
label_340ff4:
    // 0x340ff4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x340ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x340ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ffc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x340FFCu;
    {
        const bool branch_taken_0x340ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340FFCu;
        // 0x341000: 0x24a51078  addiu       $a1, $a1, 0x1078 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ffc) {
            ctx->pc = 0x341030u;
            goto label_341030;
        }
    }
    ctx->pc = 0x341004u;
    // 0x341004: 0xc0d03ca  jal         func_340F28
    ctx->pc = 0x341004u;
    SET_GPR_U32(ctx, 31, 0x34100Cu);
    ctx->pc = 0x340F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F28u, 0x341004u, 0x34100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34100Cu;
label_34100c:
    // 0x34100c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34100cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341014: 0xc0d03ca  jal         func_340F28
    ctx->pc = 0x341014u;
    SET_GPR_U32(ctx, 31, 0x34101Cu);
    ctx->pc = 0x341018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341014u;
    // 0x341018: 0x24a510b8  addiu       $a1, $a1, 0x10B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F28u, 0x341014u, 0x34101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34101Cu;
label_34101c:
    // 0x34101c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341028: 0x80d0534  j           func_3414D0
    ctx->pc = 0x341028u;
    ctx->pc = 0x34102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341028u;
    // 0x34102c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414D0u;
    sub_003414D0_0x3414d0(rdram, ctx, runtime); return;
    ctx->pc = 0x341030u;
label_341030:
    // 0x341030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341038: 0x3e00008  jr          $ra
    ctx->pc = 0x341038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341038u;
        // 0x34103c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341040u;
}
