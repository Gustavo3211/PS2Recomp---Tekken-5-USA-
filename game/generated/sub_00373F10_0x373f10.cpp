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

// Function: sub_00373F10
// Address: 0x373f10 - 0x374030
void sub_00373F10_0x373f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373F10_0x373f10");
#endif

    switch (ctx->pc) {
        case 0x373f38u: goto label_373f38;
        case 0x374000u: goto label_374000;
        case 0x374018u: goto label_374018;
        default: break;
    }

    ctx->pc = 0x373f10u;

    // 0x373f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373f14: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x373f18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x373f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x373f1c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373f1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f20: 0xafc40004  sw          $a0, 0x4($fp)
    ctx->pc = 0x373f20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
    // 0x373f24: 0xafc50008  sw          $a1, 0x8($fp)
    ctx->pc = 0x373f24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 5));
    // 0x373f28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x373f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f2c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x373f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373f30: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x373f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x373f34: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x373f34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_373f38:
    // 0x373f38: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373f3c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373f40: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x373f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x373f44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x373f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x373f48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373F48u;
    {
        const bool branch_taken_0x373f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373f48) {
            ctx->pc = 0x373F58u;
            goto label_373f58;
        }
    }
    ctx->pc = 0x373F50u;
    // 0x373f50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x373F50u;
    {
        const bool branch_taken_0x373f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f50) {
            ctx->pc = 0x373FECu;
            goto label_373fec;
        }
    }
    ctx->pc = 0x373F58u;
label_373f58:
    // 0x373f58: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373f5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x373f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x373f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373f6c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x373f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x373f70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x373f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373f74: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373f78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x373f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f7c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x373f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373f88: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x373f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x373f8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373f90: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x373f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x373f94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x373f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x373f98: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373f9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x373f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373fa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x373fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373fac: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x373facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x373fb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x373fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373fb4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x373fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373fb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x373fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x373fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373fc8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x373fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x373fcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373fd0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x373fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x373fd4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x373fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x373fd8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373fe0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x373fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x373fe4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x373FE4u;
    {
        const bool branch_taken_0x373fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373fe4) {
            ctx->pc = 0x373F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373f38;
        }
    }
    ctx->pc = 0x373FECu;
label_373fec:
    // 0x373fec: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x373fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x373ff0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x373ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x373ff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ff8: 0xc0dd067  jal         func_37419C
    ctx->pc = 0x373FF8u;
    SET_GPR_U32(ctx, 31, 0x374000u);
    ctx->pc = 0x37419Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37419Cu, 0x373FF8u, 0x374000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374000u;
label_374000:
    // 0x374000: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x374000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x374004: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x374004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x374008: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x374008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x37400c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x37400cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x374010: 0xc0dd074  jal         func_3741D0
    ctx->pc = 0x374010u;
    SET_GPR_U32(ctx, 31, 0x374018u);
    ctx->pc = 0x3741D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D0u, 0x374010u, 0x374018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374018u;
label_374018:
    // 0x374018: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374018u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37401c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x37401cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374020: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x374020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374024: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374028: 0x3e00008  jr          $ra
    ctx->pc = 0x374028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374030u;
}
