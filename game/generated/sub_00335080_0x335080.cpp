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

// Function: sub_00335080
// Address: 0x335080 - 0x335110
void sub_00335080_0x335080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335080_0x335080");
#endif

    switch (ctx->pc) {
        case 0x335080u: goto label_335080;
        case 0x335084u: goto label_335084;
        case 0x335088u: goto label_335088;
        case 0x33508cu: goto label_33508c;
        case 0x335090u: goto label_335090;
        case 0x335094u: goto label_335094;
        case 0x335098u: goto label_335098;
        case 0x33509cu: goto label_33509c;
        case 0x3350a0u: goto label_3350a0;
        case 0x3350a4u: goto label_3350a4;
        case 0x3350a8u: goto label_3350a8;
        case 0x3350acu: goto label_3350ac;
        case 0x3350b0u: goto label_3350b0;
        case 0x3350b4u: goto label_3350b4;
        case 0x3350b8u: goto label_3350b8;
        case 0x3350bcu: goto label_3350bc;
        case 0x3350c0u: goto label_3350c0;
        case 0x3350c4u: goto label_3350c4;
        case 0x3350c8u: goto label_3350c8;
        case 0x3350ccu: goto label_3350cc;
        case 0x3350d0u: goto label_3350d0;
        case 0x3350d4u: goto label_3350d4;
        case 0x3350d8u: goto label_3350d8;
        case 0x3350dcu: goto label_3350dc;
        case 0x3350e0u: goto label_3350e0;
        case 0x3350e4u: goto label_3350e4;
        case 0x3350e8u: goto label_3350e8;
        case 0x3350ecu: goto label_3350ec;
        case 0x3350f0u: goto label_3350f0;
        case 0x3350f4u: goto label_3350f4;
        case 0x3350f8u: goto label_3350f8;
        case 0x3350fcu: goto label_3350fc;
        case 0x335100u: goto label_335100;
        case 0x335104u: goto label_335104;
        case 0x335108u: goto label_335108;
        case 0x33510cu: goto label_33510c;
        default: break;
    }

    ctx->pc = 0x335080u;

label_335080:
    // 0x335080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_335084:
    // 0x335084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335088:
    // 0x335088: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33508c:
    // 0x33508c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_335090:
    // 0x335090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_335094:
    // 0x335094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x335094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335098:
    // 0x335098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33509c:
    // 0x33509c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x33509cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_3350a0:
    // 0x3350a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3350a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3350a4:
    // 0x3350a4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3350a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3350a8:
    // 0x3350a8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3350a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3350ac:
    // 0x3350ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3350acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3350b0:
    // 0x3350b0: 0x40f809  jalr        $v0
label_3350b4:
    if (ctx->pc == 0x3350B4u) {
        ctx->pc = 0x3350B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350B0u;
        // 0x3350b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350B8u;
        goto label_3350b8;
    }
    ctx->pc = 0x3350B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3350B8u);
        ctx->pc = 0x3350B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350B0u;
        // 0x3350b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350B0u, 0x3350B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3350B8u;
label_3350b8:
    // 0x3350b8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3350b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_3350bc:
    // 0x3350bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3350bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3350c0:
    // 0x3350c0: 0x24a54e88  addiu       $a1, $a1, 0x4E88
    ctx->pc = 0x3350c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20104));
label_3350c4:
    // 0x3350c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3350c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3350c8:
    // 0x3350c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3350c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3350cc:
    // 0x3350cc: 0xc043c30  jal         func_10F0C0
label_3350d0:
    if (ctx->pc == 0x3350D0u) {
        ctx->pc = 0x3350D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350CCu;
        // 0x3350d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350D4u;
        goto label_3350d4;
    }
    ctx->pc = 0x3350CCu;
    SET_GPR_U32(ctx, 31, 0x3350D4u);
    ctx->pc = 0x3350D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350CCu;
    // 0x3350d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0C0u, 0x3350CCu, 0x3350D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350D4u;
label_3350d4:
    // 0x3350d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3350d8:
    if (ctx->pc == 0x3350D8u) {
        ctx->pc = 0x3350D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350D4u;
        // 0x3350d8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350DCu;
        goto label_3350dc;
    }
    ctx->pc = 0x3350D4u;
    {
        const bool branch_taken_0x3350d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3350D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350D4u;
        // 0x3350d8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350d4) {
            ctx->pc = 0x3350F4u;
            goto label_3350f4;
        }
    }
    ctx->pc = 0x3350DCu;
label_3350dc:
    // 0x3350dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3350dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3350e0:
    // 0x3350e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3350e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3350e4:
    // 0x3350e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3350e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3350e8:
    // 0x3350e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3350ec:
    // 0x3350ec: 0x60f809  jalr        $v1
label_3350f0:
    if (ctx->pc == 0x3350F0u) {
        ctx->pc = 0x3350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350ECu;
        // 0x3350f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350F4u;
        goto label_3350f4;
    }
    ctx->pc = 0x3350ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3350F4u);
        ctx->pc = 0x3350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350ECu;
        // 0x3350f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350ECu, 0x3350F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3350F4u;
label_3350f4:
    // 0x3350f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3350f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3350f8:
    // 0x3350f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3350f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3350fc:
    // 0x3350fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3350fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_335100:
    // 0x335100: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x335100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_335104:
    // 0x335104: 0x3e00008  jr          $ra
label_335108:
    if (ctx->pc == 0x335108u) {
        ctx->pc = 0x335108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335104u;
        // 0x335108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33510Cu;
        goto label_33510c;
    }
    ctx->pc = 0x335104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335104u;
        // 0x335108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33510Cu;
label_33510c:
    // 0x33510c: 0x0  nop
    ctx->pc = 0x33510cu;
    // NOP
    ctx->pc = 0x335110u;
}
