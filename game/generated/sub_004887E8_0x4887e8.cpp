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

// Function: sub_004887E8
// Address: 0x4887e8 - 0x488918
void sub_004887E8_0x4887e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004887E8_0x4887e8");
#endif

    switch (ctx->pc) {
        case 0x488840u: goto label_488840;
        case 0x488890u: goto label_488890;
        case 0x4888a8u: goto label_4888a8;
        case 0x4888b0u: goto label_4888b0;
        case 0x4888b8u: goto label_4888b8;
        case 0x4888ccu: goto label_4888cc;
        case 0x4888e0u: goto label_4888e0;
        default: break;
    }

    ctx->pc = 0x4887e8u;

    // 0x4887e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4887e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4887ec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4887ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4887f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x4887f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x4887f4: 0x24542b00  addiu       $s4, $v0, 0x2B00
    ctx->pc = 0x4887f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x4887f8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x4887f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x4887fc: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x4887fcu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5F2B00u));
    // 0x488800: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x488800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x488804: 0x26930004  addiu       $s3, $s4, 0x4
    ctx->pc = 0x488804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x488808: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x488808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x48880c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x48880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x488810: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x488810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x488814: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x488814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x488818: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x488818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x48881c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x48881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x488820: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x488820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x488824: 0x1aa00032  blez        $s5, . + 4 + (0x32 << 2)
    ctx->pc = 0x488824u;
    {
        const bool branch_taken_0x488824 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x488828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488824u;
        // 0x488828: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488824) {
            ctx->pc = 0x4888F0u;
            goto label_4888f0;
        }
    }
    ctx->pc = 0x48882Cu;
    // 0x48882c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x48882cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x488830: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x488830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x488834: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x488834u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x488838: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x488838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x48883c: 0x0  nop
    ctx->pc = 0x48883cu;
    // NOP
label_488840:
    // 0x488840: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x488840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x488844: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x488844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x488848: 0x125e0013  beq         $s2, $fp, . + 4 + (0x13 << 2)
    ctx->pc = 0x488848u;
    {
        const bool branch_taken_0x488848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x48884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488848u;
        // 0x48884c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488848) {
            ctx->pc = 0x488898u;
            goto label_488898;
        }
    }
    ctx->pc = 0x488850u;
    // 0x488850: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x488850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x488854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x488854u;
    {
        const bool branch_taken_0x488854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488854) {
            ctx->pc = 0x488870u;
            goto label_488870;
        }
    }
    ctx->pc = 0x48885Cu;
    // 0x48885c: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x48885Cu;
    {
        const bool branch_taken_0x48885c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x48885c) {
            ctx->pc = 0x488860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48885Cu;
            // 0x488860: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488888u;
            goto label_488888;
        }
    }
    ctx->pc = 0x488864u;
    // 0x488864: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x488864u;
    {
        const bool branch_taken_0x488864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488864u;
        // 0x488868: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488864) {
            ctx->pc = 0x4888E4u;
            goto label_4888e4;
        }
    }
    ctx->pc = 0x48886Cu;
    // 0x48886c: 0x0  nop
    ctx->pc = 0x48886cu;
    // NOP
label_488870:
    // 0x488870: 0x12570013  beq         $s2, $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x488870u;
    {
        const bool branch_taken_0x488870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x488874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488870u;
        // 0x488874: 0x2848021  addu        $s0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488870) {
            ctx->pc = 0x4888C0u;
            goto label_4888c0;
        }
    }
    ctx->pc = 0x488878u;
    // 0x488878: 0x52560017  beql        $s2, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x488878u;
    {
        const bool branch_taken_0x488878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x488878) {
            ctx->pc = 0x48887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488878u;
            // 0x48887c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4888D8u;
            goto label_4888d8;
        }
    }
    ctx->pc = 0x488880u;
    // 0x488880: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x488880u;
    {
        const bool branch_taken_0x488880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488880u;
        // 0x488884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488880) {
            ctx->pc = 0x4888E4u;
            goto label_4888e4;
        }
    }
    ctx->pc = 0x488888u;
label_488888:
    // 0x488888: 0xc1221f2  jal         func_4887C8
    ctx->pc = 0x488888u;
    SET_GPR_U32(ctx, 31, 0x488890u);
    ctx->pc = 0x48888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488888u;
    // 0x48888c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4887C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4887C8u, 0x488888u, 0x488890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488890u;
label_488890:
    // 0x488890: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x488890u;
    {
        const bool branch_taken_0x488890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488890u;
        // 0x488894: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488890) {
            ctx->pc = 0x4888E4u;
            goto label_4888e4;
        }
    }
    ctx->pc = 0x488898u;
label_488898:
    // 0x488898: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x488898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x48889c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48889cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4888a0: 0xc1221e2  jal         func_488788
    ctx->pc = 0x4888A0u;
    SET_GPR_U32(ctx, 31, 0x4888A8u);
    ctx->pc = 0x4888A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4888A0u;
    // 0x4888a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488788u, 0x4888A0u, 0x4888A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888A8u;
label_4888a8:
    // 0x4888a8: 0xc13e614  jal         func_4F9850
    ctx->pc = 0x4888A8u;
    SET_GPR_U32(ctx, 31, 0x4888B0u);
    ctx->pc = 0x4F9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9850u, 0x4888A8u, 0x4888B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888B0u;
label_4888b0:
    // 0x4888b0: 0xc1221f4  jal         func_4887D0
    ctx->pc = 0x4888B0u;
    SET_GPR_U32(ctx, 31, 0x4888B8u);
    ctx->pc = 0x4887D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4887D0u, 0x4888B0u, 0x4888B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888B8u;
label_4888b8:
    // 0x4888b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4888B8u;
    {
        const bool branch_taken_0x4888b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4888BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888B8u;
        // 0x4888bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4888b8) {
            ctx->pc = 0x4888C4u;
            goto label_4888c4;
        }
    }
    ctx->pc = 0x4888C0u;
label_4888c0:
    // 0x4888c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4888c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4888c4:
    // 0x4888c4: 0xc122164  jal         func_488590
    ctx->pc = 0x4888C4u;
    SET_GPR_U32(ctx, 31, 0x4888CCu);
    ctx->pc = 0x4888C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4888C4u;
    // 0x4888c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488590u, 0x4888C4u, 0x4888CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888CCu;
label_4888cc:
    // 0x4888cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4888CCu;
    {
        const bool branch_taken_0x4888cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4888D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4888CCu;
        // 0x4888d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4888cc) {
            ctx->pc = 0x4888E4u;
            goto label_4888e4;
        }
    }
    ctx->pc = 0x4888D4u;
    // 0x4888d4: 0x0  nop
    ctx->pc = 0x4888d4u;
    // NOP
label_4888d8:
    // 0x4888d8: 0xc1221ca  jal         func_488728
    ctx->pc = 0x4888D8u;
    SET_GPR_U32(ctx, 31, 0x4888E0u);
    ctx->pc = 0x4888DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4888D8u;
    // 0x4888dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488728u, 0x4888D8u, 0x4888E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4888E0u;
label_4888e0:
    // 0x4888e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4888e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4888e4:
    // 0x4888e4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x4888e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4888e8: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x4888E8u;
    {
        const bool branch_taken_0x4888e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4888e8) {
            ctx->pc = 0x4888ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4888E8u;
            // 0x4888ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488840;
        }
    }
    ctx->pc = 0x4888F0u;
label_4888f0:
    // 0x4888f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4888f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4888f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4888f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4888f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4888f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4888fc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x4888fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x488900: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x488900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488904: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x488904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x488908: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x488908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48890c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x48890cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x488910: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x488910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x488914: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x488914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->pc = 0x488918u;
}
