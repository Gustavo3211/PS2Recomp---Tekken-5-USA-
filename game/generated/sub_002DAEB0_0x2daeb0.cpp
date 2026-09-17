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

// Function: sub_002DAEB0
// Address: 0x2daeb0 - 0x2daf30
void sub_002DAEB0_0x2daeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAEB0_0x2daeb0");
#endif

    switch (ctx->pc) {
        case 0x2daee8u: goto label_2daee8;
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf18u: goto label_2daf18;
        default: break;
    }

    ctx->pc = 0x2daeb0u;

    // 0x2daeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daeb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2daeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2daeb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2daeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2daebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2daebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2daec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daec4: 0x24a5f2f0  addiu       $a1, $a1, -0xD10
    ctx->pc = 0x2daec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963952));
    // 0x2daec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2daec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2daecc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2daeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2daed0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x2daed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2daed4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2daed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2daed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAED8u;
    {
        const bool branch_taken_0x2daed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAED8u;
        // 0x2daedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daed8) {
            ctx->pc = 0x2DAEF0u;
            goto label_2daef0;
        }
    }
    ctx->pc = 0x2DAEE0u;
    // 0x2daee0: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DAEE0u;
    SET_GPR_U32(ctx, 31, 0x2DAEE8u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DAEE0u, 0x2DAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEE8u;
label_2daee8:
    // 0x2daee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAEE8u;
    {
        const bool branch_taken_0x2daee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEE8u;
        // 0x2daeec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daee8) {
            ctx->pc = 0x2DAEF4u;
            goto label_2daef4;
        }
    }
    ctx->pc = 0x2DAEF0u;
label_2daef0:
    // 0x2daef0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2daef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2daef4:
    // 0x2daef4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAEF4u;
    {
        const bool branch_taken_0x2daef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEF4u;
        // 0x2daef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daef4) {
            ctx->pc = 0x2DAF18u;
            goto label_2daf18;
        }
    }
    ctx->pc = 0x2DAEFCu;
    // 0x2daefc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2daefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf00: 0xc0b6cf4  jal         func_2DB3D0
    ctx->pc = 0x2DAF00u;
    SET_GPR_U32(ctx, 31, 0x2DAF08u);
    ctx->pc = 0x2DAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF00u;
    // 0x2daf04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3D0u, 0x2DAF00u, 0x2DAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF08u;
label_2daf08:
    // 0x2daf08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2daf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2daf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf10: 0xc0b6cfe  jal         func_2DB3F8
    ctx->pc = 0x2DAF10u;
    SET_GPR_U32(ctx, 31, 0x2DAF18u);
    ctx->pc = 0x2DAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF10u;
    // 0x2daf14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3F8u, 0x2DAF10u, 0x2DAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF18u;
label_2daf18:
    // 0x2daf18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2daf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daf1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2daf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2daf20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2daf20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2daf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2daf28: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF28u;
        // 0x2daf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF30u;
}
