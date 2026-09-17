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

// Function: sub_003487E8
// Address: 0x3487e8 - 0x348900
void sub_003487E8_0x3487e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003487E8_0x3487e8");
#endif

    switch (ctx->pc) {
        case 0x348830u: goto label_348830;
        case 0x348850u: goto label_348850;
        default: break;
    }

    ctx->pc = 0x3487e8u;

    // 0x3487e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3487e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3487ec: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3487ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3487f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3487f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3487f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3487f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3487f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3487f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3487fc: 0x2068821  addu        $s1, $s0, $a2
    ctx->pc = 0x3487fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x348800: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x348800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x348804: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x348804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x348808: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x348808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34880c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x348810: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x348810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x348814: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x348814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x348818: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x348818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34881c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x34881Cu;
    {
        const bool branch_taken_0x34881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34881Cu;
        // 0x348820: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34881c) {
            ctx->pc = 0x3488DCu;
            goto label_3488dc;
        }
    }
    ctx->pc = 0x348824u;
    // 0x348824: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x348824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x348828: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x348828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34882c: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x34882cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_348830:
    // 0x348830: 0x14740009  bne         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x348830u;
    {
        const bool branch_taken_0x348830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x348834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348830u;
        // 0x348834: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348830) {
            ctx->pc = 0x348858u;
            goto label_348858;
        }
    }
    ctx->pc = 0x348838u;
    // 0x348838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x348838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34883c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x34883cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x348840: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x348840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348848: 0xc0d2314  jal         func_348C50
    ctx->pc = 0x348848u;
    SET_GPR_U32(ctx, 31, 0x348850u);
    ctx->pc = 0x34884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348848u;
    // 0x34884c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348C50u, 0x348848u, 0x348850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348850u;
label_348850:
    // 0x348850: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x348850u;
    {
        const bool branch_taken_0x348850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348850u;
        // 0x348854: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348850) {
            ctx->pc = 0x3488CCu;
            goto label_3488cc;
        }
    }
    ctx->pc = 0x348858u;
label_348858:
    // 0x348858: 0x50730015  beql        $v1, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x348858u;
    {
        const bool branch_taken_0x348858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x348858) {
            ctx->pc = 0x34885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348858u;
            // 0x34885c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488B0u;
            goto label_3488b0;
        }
    }
    ctx->pc = 0x348860u;
    // 0x348860: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x348860u;
    {
        const bool branch_taken_0x348860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x348864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348860u;
        // 0x348864: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348860) {
            ctx->pc = 0x348870u;
            goto label_348870;
        }
    }
    ctx->pc = 0x348868u;
    // 0x348868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x348868u;
    {
        const bool branch_taken_0x348868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348868u;
        // 0x34886c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348868) {
            ctx->pc = 0x3488B0u;
            goto label_3488b0;
        }
    }
    ctx->pc = 0x348870u;
label_348870:
    // 0x348870: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x348870u;
    {
        const bool branch_taken_0x348870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348870u;
        // 0x348874: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348870) {
            ctx->pc = 0x3488B0u;
            goto label_3488b0;
        }
    }
    ctx->pc = 0x348878u;
    // 0x348878: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x348878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x34887c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x34887cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x348880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x348884: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x348884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x348888: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x348888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x34888c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x34888cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x348890: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x348890u;
    {
        const bool branch_taken_0x348890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348890u;
        // 0x348894: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348890) {
            ctx->pc = 0x3488DCu;
            goto label_3488dc;
        }
    }
    ctx->pc = 0x348898u;
    // 0x348898: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x348898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34889c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34889cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3488a0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3488a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3488a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3488A4u;
    {
        const bool branch_taken_0x3488a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3488A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488A4u;
        // 0x3488a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488a4) {
            ctx->pc = 0x3488C8u;
            goto label_3488c8;
        }
    }
    ctx->pc = 0x3488ACu;
    // 0x3488ac: 0x0  nop
    ctx->pc = 0x3488acu;
    // NOP
label_3488b0:
    // 0x3488b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3488b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3488b4: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x3488b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3488b8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3488B8u;
    {
        const bool branch_taken_0x3488b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3488b8) {
            ctx->pc = 0x3488BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3488B8u;
            // 0x3488bc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3488E0u;
            goto label_3488e0;
        }
    }
    ctx->pc = 0x3488C0u;
    // 0x3488c0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3488c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3488c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3488c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3488c8:
    // 0x3488c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3488cc:
    // 0x3488cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3488ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3488d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3488d4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3488D4u;
    {
        const bool branch_taken_0x3488d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488D4u;
        // 0x3488d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3488d4) {
            ctx->pc = 0x348830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348830;
        }
    }
    ctx->pc = 0x3488DCu;
label_3488dc:
    // 0x3488dc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3488dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3488e0:
    // 0x3488e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3488e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3488e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3488e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3488e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3488e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3488ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3488ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3488f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3488f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3488f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3488f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3488f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3488F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3488FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3488F8u;
        // 0x3488fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3488F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348900u;
}
