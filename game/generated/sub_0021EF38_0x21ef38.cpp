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

// Function: sub_0021EF38
// Address: 0x21ef38 - 0x21f008
void sub_0021EF38_0x21ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF38_0x21ef38");
#endif

    switch (ctx->pc) {
        case 0x21ef70u: goto label_21ef70;
        case 0x21ef78u: goto label_21ef78;
        default: break;
    }

    ctx->pc = 0x21ef38u;

    // 0x21ef38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ef3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ef40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ef40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ef48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ef48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ef50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x21ef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ef58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21ef58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21ef60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21ef60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef64: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x21EF64u;
    {
        const bool branch_taken_0x21ef64 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x21EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF64u;
        // 0x21ef68: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef64) {
            ctx->pc = 0x21EFE4u;
            goto label_21efe4;
        }
    }
    ctx->pc = 0x21EF6Cu;
    // 0x21ef6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ef70:
    // 0x21ef70: 0xc087b72  jal         func_21EDC8
    ctx->pc = 0x21EF70u;
    SET_GPR_U32(ctx, 31, 0x21EF78u);
    ctx->pc = 0x21EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF70u;
    // 0x21ef74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EDC8u, 0x21EF70u, 0x21EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF78u;
label_21ef78:
    // 0x21ef78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EF78u;
    {
        const bool branch_taken_0x21ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ef78) {
            ctx->pc = 0x21EF88u;
            goto label_21ef88;
        }
    }
    ctx->pc = 0x21EF80u;
    // 0x21ef80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21EF80u;
    {
        const bool branch_taken_0x21ef80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF80u;
        // 0x21ef84: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef80) {
            ctx->pc = 0x21EFD8u;
            goto label_21efd8;
        }
    }
    ctx->pc = 0x21EF88u;
label_21ef88:
    // 0x21ef88: 0x12110011  beq         $s0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21EF88u;
    {
        const bool branch_taken_0x21ef88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x21EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF88u;
        // 0x21ef8c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef88) {
            ctx->pc = 0x21EFD0u;
            goto label_21efd0;
        }
    }
    ctx->pc = 0x21EF90u;
    // 0x21ef90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ef90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ef94: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x21ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x21ef98: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x21ef98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ef9c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x21ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x21efa0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x21efa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21efa4: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x21efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x21efa8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x21efa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21efac: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x21efacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x21efb0: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x21efb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21efb4: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x21efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x21efb8: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x21efb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21efbc: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x21efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x21efc0: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x21efc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21efc4: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x21efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x21efc8: 0xde030038  ld          $v1, 0x38($s0)
    ctx->pc = 0x21efc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21efcc: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x21efccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
label_21efd0:
    // 0x21efd0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21efd4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x21efd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_21efd8:
    // 0x21efd8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x21efdc: 0x1e40ffe4  bgtz        $s2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x21EFDCu;
    {
        const bool branch_taken_0x21efdc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x21EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFDCu;
        // 0x21efe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efdc) {
            ctx->pc = 0x21EF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ef70;
        }
    }
    ctx->pc = 0x21EFE4u;
label_21efe4:
    // 0x21efe4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21efe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21efec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21eff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eff4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21eff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21eff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21effc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f000: 0x3e00008  jr          $ra
    ctx->pc = 0x21F000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F000u;
        // 0x21f004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F008u;
}
