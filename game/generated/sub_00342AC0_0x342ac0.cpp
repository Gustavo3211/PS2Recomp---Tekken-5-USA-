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

// Function: sub_00342AC0
// Address: 0x342ac0 - 0x342b20
void sub_00342AC0_0x342ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342AC0_0x342ac0");
#endif

    switch (ctx->pc) {
        case 0x342ad4u: goto label_342ad4;
        case 0x342adcu: goto label_342adc;
        case 0x342ae4u: goto label_342ae4;
        case 0x342aecu: goto label_342aec;
        case 0x342af4u: goto label_342af4;
        case 0x342afcu: goto label_342afc;
        case 0x342b04u: goto label_342b04;
        case 0x342b0cu: goto label_342b0c;
        default: break;
    }

    ctx->pc = 0x342ac0u;

    // 0x342ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342acc: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342ACCu;
    SET_GPR_U32(ctx, 31, 0x342AD4u);
    ctx->pc = 0x342AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ACCu;
    // 0x342ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342ACCu, 0x342AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AD4u;
label_342ad4:
    // 0x342ad4: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342AD4u;
    SET_GPR_U32(ctx, 31, 0x342ADCu);
    ctx->pc = 0x342AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AD4u;
    // 0x342ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342AD4u, 0x342ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342ADCu;
label_342adc:
    // 0x342adc: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342ADCu;
    SET_GPR_U32(ctx, 31, 0x342AE4u);
    ctx->pc = 0x342AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ADCu;
    // 0x342ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342ADCu, 0x342AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AE4u;
label_342ae4:
    // 0x342ae4: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342AE4u;
    SET_GPR_U32(ctx, 31, 0x342AECu);
    ctx->pc = 0x342AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AE4u;
    // 0x342ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342AE4u, 0x342AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AECu;
label_342aec:
    // 0x342aec: 0xc0d0964  jal         func_342590
    ctx->pc = 0x342AECu;
    SET_GPR_U32(ctx, 31, 0x342AF4u);
    ctx->pc = 0x342AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AECu;
    // 0x342af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x342AECu, 0x342AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AF4u;
label_342af4:
    // 0x342af4: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x342AF4u;
    SET_GPR_U32(ctx, 31, 0x342AFCu);
    ctx->pc = 0x342AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AF4u;
    // 0x342af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x342AF4u, 0x342AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AFCu;
label_342afc:
    // 0x342afc: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x342AFCu;
    SET_GPR_U32(ctx, 31, 0x342B04u);
    ctx->pc = 0x342B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AFCu;
    // 0x342b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x342AFCu, 0x342B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B04u;
label_342b04:
    // 0x342b04: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342B04u;
    SET_GPR_U32(ctx, 31, 0x342B0Cu);
    ctx->pc = 0x342B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B04u;
    // 0x342b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342B04u, 0x342B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B0Cu;
label_342b0c:
    // 0x342b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342b10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342b14: 0x3e00008  jr          $ra
    ctx->pc = 0x342B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B14u;
        // 0x342b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B1Cu;
    // 0x342b1c: 0x0  nop
    ctx->pc = 0x342b1cu;
    // NOP
    ctx->pc = 0x342b20u;
}
