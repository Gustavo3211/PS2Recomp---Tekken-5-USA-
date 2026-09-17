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

// Function: sub_002E2008
// Address: 0x2e2008 - 0x2e20a8
void sub_002E2008_0x2e2008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2008_0x2e2008");
#endif

    switch (ctx->pc) {
        case 0x2e205cu: goto label_2e205c;
        case 0x2e2068u: goto label_2e2068;
        case 0x2e2080u: goto label_2e2080;
        default: break;
    }

    ctx->pc = 0x2e2008u;

    // 0x2e2008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e200c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2014: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e2014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2018: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e2018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e201c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e201cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2024: 0x26510084  addiu       $s1, $s2, 0x84
    ctx->pc = 0x2e2024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x2e2028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e202c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e202cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2030: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2030u;
    {
        const bool branch_taken_0x2e2030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2030) {
            ctx->pc = 0x2E2034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2030u;
            // 0x2e2034: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E204Cu;
            goto label_2e204c;
        }
    }
    ctx->pc = 0x2E2038u;
    // 0x2e2038: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e203c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e2040: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2040u;
    {
        const bool branch_taken_0x2e2040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2040) {
            ctx->pc = 0x2E2054u;
            goto label_2e2054;
        }
    }
    ctx->pc = 0x2E2048u;
    // 0x2e2048: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e2048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e204c:
    // 0x2e204c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2050: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e2050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e2054:
    // 0x2e2054: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E2054u;
    SET_GPR_U32(ctx, 31, 0x2E205Cu);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E2054u, 0x2E205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E205Cu;
label_2e205c:
    // 0x2e205c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2060: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E2060u;
    SET_GPR_U32(ctx, 31, 0x2E2068u);
    ctx->pc = 0x2E2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2060u;
    // 0x2e2064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E2060u, 0x2E2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2068u;
label_2e2068:
    // 0x2e2068: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2e206c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2070: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e2070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2078: 0xc0b8f3a  jal         func_2E3CE8
    ctx->pc = 0x2E2078u;
    SET_GPR_U32(ctx, 31, 0x2E2080u);
    ctx->pc = 0x2E207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2078u;
    // 0x2e207c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CE8u, 0x2E2078u, 0x2E2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2080u;
label_2e2080:
    // 0x2e2080: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e2080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e2084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2088: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e208c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e208cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2090: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e2090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e2094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e209c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e20a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E20A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20A0u;
        // 0x2e20a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E20A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E20A8u;
}
