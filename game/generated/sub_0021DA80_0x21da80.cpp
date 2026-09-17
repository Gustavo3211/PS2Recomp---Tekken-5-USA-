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

// Function: sub_0021DA80
// Address: 0x21da80 - 0x21db80
void sub_0021DA80_0x21da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DA80_0x21da80");
#endif

    switch (ctx->pc) {
        case 0x21dab8u: goto label_21dab8;
        case 0x21dac0u: goto label_21dac0;
        case 0x21daccu: goto label_21dacc;
        case 0x21dadcu: goto label_21dadc;
        case 0x21db18u: goto label_21db18;
        case 0x21db30u: goto label_21db30;
        case 0x21db54u: goto label_21db54;
        default: break;
    }

    ctx->pc = 0x21da80u;

    // 0x21da80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21da84: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x21da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x21da88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21da88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da8c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x21da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x21da90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21da90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da94: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x21da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x21da98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21da98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da9c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x21da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x21daa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21daa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21daa4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x21daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x21daa8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x21daa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21daac: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x21daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x21dab0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x21dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x21dab4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x21dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_21dab8:
    // 0x21dab8: 0xc086428  jal         func_2190A0
    ctx->pc = 0x21DAB8u;
    SET_GPR_U32(ctx, 31, 0x21DAC0u);
    ctx->pc = 0x21DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAB8u;
    // 0x21dabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x21DAB8u, 0x21DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAC0u;
label_21dac0:
    // 0x21dac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dac4: 0xc087692  jal         func_21DA48
    ctx->pc = 0x21DAC4u;
    SET_GPR_U32(ctx, 31, 0x21DACCu);
    ctx->pc = 0x21DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAC4u;
    // 0x21dac8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA48u, 0x21DAC4u, 0x21DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DACCu;
label_21dacc:
    // 0x21dacc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DACCu;
    {
        const bool branch_taken_0x21dacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DACCu;
        // 0x21dad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dacc) {
            ctx->pc = 0x21DAE4u;
            goto label_21dae4;
        }
    }
    ctx->pc = 0x21DAD4u;
    // 0x21dad4: 0xc086304  jal         func_218C10
    ctx->pc = 0x21DAD4u;
    SET_GPR_U32(ctx, 31, 0x21DADCu);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x21DAD4u, 0x21DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DADCu;
label_21dadc:
    // 0x21dadc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DADCu;
    {
        const bool branch_taken_0x21dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dadc) {
            ctx->pc = 0x21DAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DADCu;
            // 0x21dae0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DB00u;
            goto label_21db00;
        }
    }
    ctx->pc = 0x21DAE4u;
label_21dae4:
    // 0x21dae4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x21dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21dae8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x21dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21daec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21daecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21daf0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21daf4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x21daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x21daf8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21dafc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21dafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21db00:
    // 0x21db00: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x21db00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21db04: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21DB04u;
    {
        const bool branch_taken_0x21db04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21db04) {
            ctx->pc = 0x21DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dab8;
        }
    }
    ctx->pc = 0x21DB0Cu;
    // 0x21db0c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21db10: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x21DB10u;
    {
        const bool branch_taken_0x21db10 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB10u;
        // 0x21db14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db10) {
            ctx->pc = 0x21DB48u;
            goto label_21db48;
        }
    }
    ctx->pc = 0x21DB18u;
label_21db18:
    // 0x21db18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x21db18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21db1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21db1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21db20: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21db24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db28: 0xc087692  jal         func_21DA48
    ctx->pc = 0x21DB28u;
    SET_GPR_U32(ctx, 31, 0x21DB30u);
    ctx->pc = 0x21DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB28u;
    // 0x21db2c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA48u, 0x21DB28u, 0x21DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB30u;
label_21db30:
    // 0x21db30: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x21db30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x21db34: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x21db34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21db38: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x21db38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21db3c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x21db3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21db40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x21DB40u;
    {
        const bool branch_taken_0x21db40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB40u;
        // 0x21db44: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db40) {
            ctx->pc = 0x21DB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21db18;
        }
    }
    ctx->pc = 0x21DB48u;
label_21db48:
    // 0x21db48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db4c: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x21DB4Cu;
    SET_GPR_U32(ctx, 31, 0x21DB54u);
    ctx->pc = 0x21DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB4Cu;
    // 0x21db50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x21DB4Cu, 0x21DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB54u;
label_21db54:
    // 0x21db54: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x21db54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db58: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x21db58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21db5c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21db60: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x21db60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21db64: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x21db64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db68: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x21db68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21db6c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x21db6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21db70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x21db70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21db74: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB74u;
        // 0x21db78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DB7Cu;
    // 0x21db7c: 0x0  nop
    ctx->pc = 0x21db7cu;
    // NOP
    ctx->pc = 0x21db80u;
}
