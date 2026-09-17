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

// Function: sub_002E1F68
// Address: 0x2e1f68 - 0x2e2008
void sub_002E1F68_0x2e1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F68_0x2e1f68");
#endif

    switch (ctx->pc) {
        case 0x2e1fbcu: goto label_2e1fbc;
        case 0x2e1fc8u: goto label_2e1fc8;
        case 0x2e1fe0u: goto label_2e1fe0;
        default: break;
    }

    ctx->pc = 0x2e1f68u;

    // 0x2e1f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1f70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1f74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e1f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e1f7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e1f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1f84: 0x2651007c  addiu       $s1, $s2, 0x7C
    ctx->pc = 0x2e1f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x2e1f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1f8c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e1f90: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1F90u;
    {
        const bool branch_taken_0x2e1f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f90) {
            ctx->pc = 0x2E1F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F90u;
            // 0x2e1f94: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1FACu;
            goto label_2e1fac;
        }
    }
    ctx->pc = 0x2E1F98u;
    // 0x2e1f98: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e1f9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e1fa0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1FA0u;
    {
        const bool branch_taken_0x2e1fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1fa0) {
            ctx->pc = 0x2E1FB4u;
            goto label_2e1fb4;
        }
    }
    ctx->pc = 0x2E1FA8u;
    // 0x2e1fa8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e1fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e1fac:
    // 0x2e1fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fb0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e1fb4:
    // 0x2e1fb4: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E1FB4u;
    SET_GPR_U32(ctx, 31, 0x2E1FBCu);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E1FB4u, 0x2E1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1FBCu;
label_2e1fbc:
    // 0x2e1fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fc0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E1FC0u;
    SET_GPR_U32(ctx, 31, 0x2E1FC8u);
    ctx->pc = 0x2E1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1FC0u;
    // 0x2e1fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E1FC0u, 0x2E1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1FC8u;
label_2e1fc8:
    // 0x2e1fc8: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x2e1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2e1fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e1fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fd8: 0xc0b8e7a  jal         func_2E39E8
    ctx->pc = 0x2E1FD8u;
    SET_GPR_U32(ctx, 31, 0x2E1FE0u);
    ctx->pc = 0x2E1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1FD8u;
    // 0x2e1fdc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E39E8u, 0x2E1FD8u, 0x2E1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1FE0u;
label_2e1fe0:
    // 0x2e1fe0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e1fe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1fe8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e1fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e1fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1ff0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e1ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2000: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2000u;
        // 0x2e2004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2008u;
}
