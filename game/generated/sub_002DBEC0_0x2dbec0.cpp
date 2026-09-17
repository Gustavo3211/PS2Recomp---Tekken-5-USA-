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

// Function: sub_002DBEC0
// Address: 0x2dbec0 - 0x2dbf08
void sub_002DBEC0_0x2dbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBEC0_0x2dbec0");
#endif

    switch (ctx->pc) {
        case 0x2dbedcu: goto label_2dbedc;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbef4u: goto label_2dbef4;
        default: break;
    }

    ctx->pc = 0x2dbec0u;

    // 0x2dbec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dbed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dbed4: 0xc0b6ebe  jal         func_2DBAF8
    ctx->pc = 0x2DBED4u;
    SET_GPR_U32(ctx, 31, 0x2DBEDCu);
    ctx->pc = 0x2DBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBED4u;
    // 0x2dbed8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBAF8u, 0x2DBED4u, 0x2DBEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEDCu;
label_2dbedc:
    // 0x2dbedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbee0: 0xc0b6ef2  jal         func_2DBBC8
    ctx->pc = 0x2DBEE0u;
    SET_GPR_U32(ctx, 31, 0x2DBEE8u);
    ctx->pc = 0x2DBEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEE0u;
    // 0x2dbee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBBC8u, 0x2DBEE0u, 0x2DBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEE8u;
label_2dbee8:
    // 0x2dbee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbeec: 0xc0b6f6a  jal         func_2DBDA8
    ctx->pc = 0x2DBEECu;
    SET_GPR_U32(ctx, 31, 0x2DBEF4u);
    ctx->pc = 0x2DBEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEECu;
    // 0x2dbef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBDA8u, 0x2DBEECu, 0x2DBEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEF4u;
label_2dbef4:
    // 0x2dbef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbefc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dbefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbf00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF00u;
        // 0x2dbf04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBF08u;
}
