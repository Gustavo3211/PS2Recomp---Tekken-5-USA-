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

// Function: sub_00209FA8
// Address: 0x209fa8 - 0x20a1d0
void sub_00209FA8_0x209fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209FA8_0x209fa8");
#endif

    switch (ctx->pc) {
        case 0x20a060u: goto label_20a060;
        case 0x20a084u: goto label_20a084;
        case 0x20a094u: goto label_20a094;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a120u: goto label_20a120;
        case 0x20a138u: goto label_20a138;
        case 0x20a150u: goto label_20a150;
        case 0x20a184u: goto label_20a184;
        case 0x20a18cu: goto label_20a18c;
        case 0x20a1b0u: goto label_20a1b0;
        case 0x20a1b8u: goto label_20a1b8;
        default: break;
    }

    ctx->pc = 0x209fa8u;

    // 0x209fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209fb0: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x209fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x209fb4: 0x8e2483c0  lw          $a0, -0x7C40($s1)
    ctx->pc = 0x209fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x209fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209fbc: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x209fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x209fc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209FC0u;
    {
        const bool branch_taken_0x209fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC0u;
        // 0x209fc4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fc0) {
            ctx->pc = 0x209FE0u;
            goto label_209fe0;
        }
    }
    ctx->pc = 0x209FC8u;
    // 0x209fc8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x209fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x209fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209fd0: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x209fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209FD4u;
    {
        const bool branch_taken_0x209fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FD4u;
        // 0x209fd8: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fd4) {
            ctx->pc = 0x209FE8u;
            goto label_209fe8;
        }
    }
    ctx->pc = 0x209FDCu;
    // 0x209fdc: 0x0  nop
    ctx->pc = 0x209fdcu;
    // NOP
label_209fe0:
    // 0x209fe0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x209fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x209fe4: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x209fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
label_209fe8:
    // 0x209fe8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x209fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x209fec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209FECu;
    {
        const bool branch_taken_0x209fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FECu;
        // 0x209ff0: 0x8f869730  lw          $a2, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fec) {
            ctx->pc = 0x209FFCu;
            goto label_209ffc;
        }
    }
    ctx->pc = 0x209FF4u;
    // 0x209ff4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x209ff8: 0xaf869730  sw          $a2, -0x68D0($gp)
    ctx->pc = 0x209ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 6));
label_209ffc:
    // 0x209ffc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x209ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a000: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A000u;
    {
        const bool branch_taken_0x20a000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A000u;
        // 0x20a004: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a000) {
            ctx->pc = 0x20A014u;
            goto label_20a014;
        }
    }
    ctx->pc = 0x20A008u;
    // 0x20a008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a00c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A00Cu;
    {
        const bool branch_taken_0x20a00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a00c) {
            ctx->pc = 0x20A018u;
            goto label_20a018;
        }
    }
    ctx->pc = 0x20A014u;
label_20a014:
    // 0x20a014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a018:
    // 0x20a018: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x20A018u;
    {
        const bool branch_taken_0x20a018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A018u;
        // 0x20a01c: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a018) {
            ctx->pc = 0x20A128u;
            goto label_20a128;
        }
    }
    ctx->pc = 0x20A020u;
    // 0x20a020: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x20a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x20a024: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20a028: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x20A028u;
    {
        const bool branch_taken_0x20a028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A028u;
        // 0x20a02c: 0x8e2283c0  lw          $v0, -0x7C40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a028) {
            ctx->pc = 0x20A124u;
            goto label_20a124;
        }
    }
    ctx->pc = 0x20A030u;
    // 0x20a030: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x20a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x20a034: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x20A034u;
    {
        const bool branch_taken_0x20a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A034u;
        // 0x20a038: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a034) {
            ctx->pc = 0x20A128u;
            goto label_20a128;
        }
    }
    ctx->pc = 0x20A03Cu;
    // 0x20a03c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x20a040: 0x8f85973c  lw          $a1, -0x68C4($gp)
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20a044: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20a048: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A048u;
    {
        const bool branch_taken_0x20a048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A048u;
        // 0x20a04c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a048) {
            ctx->pc = 0x20A070u;
            goto label_20a070;
        }
    }
    ctx->pc = 0x20A050u;
    // 0x20a050: 0x54c20012  bnel        $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20A050u;
    {
        const bool branch_taken_0x20a050 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a050) {
            ctx->pc = 0x20A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A050u;
            // 0x20a054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A09Cu;
            goto label_20a09c;
        }
    }
    ctx->pc = 0x20A058u;
    // 0x20a058: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x20A058u;
    SET_GPR_U32(ctx, 31, 0x20A060u);
    ctx->pc = 0x20A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A058u;
    // 0x20a05c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x20A058u, 0x20A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A060u;
label_20a060:
    // 0x20a060: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a064: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20A064u;
    {
        const bool branch_taken_0x20a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A064u;
        // 0x20a068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a064) {
            ctx->pc = 0x20A08Cu;
            goto label_20a08c;
        }
    }
    ctx->pc = 0x20A06Cu;
    // 0x20a06c: 0x0  nop
    ctx->pc = 0x20a06cu;
    // NOP
label_20a070:
    // 0x20a070: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20A070u;
    {
        const bool branch_taken_0x20a070 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a070) {
            ctx->pc = 0x20A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A070u;
            // 0x20a074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A09Cu;
            goto label_20a09c;
        }
    }
    ctx->pc = 0x20A078u;
    // 0x20a078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a07c: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x20A07Cu;
    SET_GPR_U32(ctx, 31, 0x20A084u);
    ctx->pc = 0x20A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A07Cu;
    // 0x20a080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x20A07Cu, 0x20A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A084u;
label_20a084:
    // 0x20a084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a08c:
    // 0x20a08c: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x20A08Cu;
    SET_GPR_U32(ctx, 31, 0x20A094u);
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x20A08Cu, 0x20A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A094u;
label_20a094:
    // 0x20a094: 0x8f869730  lw          $a2, -0x68D0($gp)
    ctx->pc = 0x20a094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20a098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a09c:
    // 0x20a09c: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A09Cu;
    {
        const bool branch_taken_0x20a09c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A09Cu;
        // 0x20a0a0: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a09c) {
            ctx->pc = 0x20A0E0u;
            goto label_20a0e0;
        }
    }
    ctx->pc = 0x20A0A4u;
    // 0x20a0a4: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x20a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x20a0a8: 0x8f84973c  lw          $a0, -0x68C4($gp)
    ctx->pc = 0x20a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20a0ac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x20a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x20a0b0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20a0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20a0b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A0B4u;
    {
        const bool branch_taken_0x20a0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0b4) {
            ctx->pc = 0x20A0D0u;
            goto label_20a0d0;
        }
    }
    ctx->pc = 0x20A0BCu;
    // 0x20a0bc: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x20A0BCu;
    SET_GPR_U32(ctx, 31, 0x20A0C4u);
    ctx->pc = 0x246AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF8u, 0x20A0BCu, 0x20A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0C4u;
label_20a0c4:
    // 0x20a0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20A0C4u;
    {
        const bool branch_taken_0x20a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C4u;
        // 0x20a0c8: 0x8f869730  lw          $a2, -0x68D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0c4) {
            ctx->pc = 0x20A0DCu;
            goto label_20a0dc;
        }
    }
    ctx->pc = 0x20A0CCu;
    // 0x20a0cc: 0x0  nop
    ctx->pc = 0x20a0ccu;
    // NOP
label_20a0d0:
    // 0x20a0d0: 0xc091aca  jal         func_246B28
    ctx->pc = 0x20A0D0u;
    SET_GPR_U32(ctx, 31, 0x20A0D8u);
    ctx->pc = 0x246B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246B28u, 0x20A0D0u, 0x20A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0D8u;
label_20a0d8:
    // 0x20a0d8: 0x8f869730  lw          $a2, -0x68D0($gp)
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_20a0dc:
    // 0x20a0dc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_20a0e0:
    // 0x20a0e0: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A0E0u;
    {
        const bool branch_taken_0x20a0e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a0e0) {
            ctx->pc = 0x20A0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A0E0u;
            // 0x20a0e4: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A0FCu;
            goto label_20a0fc;
        }
    }
    ctx->pc = 0x20A0E8u;
    // 0x20a0e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a0ec: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x20A0ECu;
    SET_GPR_U32(ctx, 31, 0x20A0F4u);
    ctx->pc = 0x20A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0ECu;
    // 0x20a0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x20A0ECu, 0x20A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0F4u;
label_20a0f4:
    // 0x20a0f4: 0x8f869730  lw          $a2, -0x68D0($gp)
    ctx->pc = 0x20a0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20a0f8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20a0fc:
    // 0x20a0fc: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20A0FCu;
    {
        const bool branch_taken_0x20a0fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0FCu;
        // 0x20a100: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0fc) {
            ctx->pc = 0x20A128u;
            goto label_20a128;
        }
    }
    ctx->pc = 0x20A104u;
    // 0x20a104: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x20a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x20a108: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20a10c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x20a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20a110: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A110u;
    {
        const bool branch_taken_0x20a110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20a110) {
            ctx->pc = 0x20A114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A110u;
            // 0x20a114: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A128u;
            goto label_20a128;
        }
    }
    ctx->pc = 0x20A118u;
    // 0x20a118: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x20A118u;
    SET_GPR_U32(ctx, 31, 0x20A120u);
    ctx->pc = 0x20A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A118u;
    // 0x20a11c: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x20A118u, 0x20A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A120u;
label_20a120:
    // 0x20a120: 0x8f869730  lw          $a2, -0x68D0($gp)
    ctx->pc = 0x20a120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_20a124:
    // 0x20a124: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x20a124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20a128:
    // 0x20a128: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A128u;
    {
        const bool branch_taken_0x20a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a128) {
            ctx->pc = 0x20A12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A128u;
            // 0x20a12c: 0x2cc200b5  sltiu       $v0, $a2, 0xB5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)181) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A140u;
            goto label_20a140;
        }
    }
    ctx->pc = 0x20A130u;
    // 0x20a130: 0xc07cc3c  jal         func_1F30F0
    ctx->pc = 0x20A130u;
    SET_GPR_U32(ctx, 31, 0x20A138u);
    ctx->pc = 0x20A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A130u;
    // 0x20a134: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30F0u, 0x20A130u, 0x20A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A138u;
label_20a138:
    // 0x20a138: 0x8f869730  lw          $a2, -0x68D0($gp)
    ctx->pc = 0x20a138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20a13c: 0x2cc200b5  sltiu       $v0, $a2, 0xB5
    ctx->pc = 0x20a13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)181) ? 1 : 0);
label_20a140:
    // 0x20a140: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20A140u;
    {
        const bool branch_taken_0x20a140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A140u;
        // 0x20a144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a140) {
            ctx->pc = 0x20A1BCu;
            goto label_20a1bc;
        }
    }
    ctx->pc = 0x20A148u;
    // 0x20a148: 0xc07cc00  jal         func_1F3000
    ctx->pc = 0x20A148u;
    SET_GPR_U32(ctx, 31, 0x20A150u);
    ctx->pc = 0x20A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A148u;
    // 0x20a14c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3000u, 0x20A148u, 0x20A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A150u;
label_20a150:
    // 0x20a150: 0x8e2383c0  lw          $v1, -0x7C40($s1)
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x20a154: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a158: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A158u;
    {
        const bool branch_taken_0x20a158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A158u;
        // 0x20a15c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a158) {
            ctx->pc = 0x20A16Cu;
            goto label_20a16c;
        }
    }
    ctx->pc = 0x20A160u;
    // 0x20a160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a164: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A164u;
    {
        const bool branch_taken_0x20a164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a164) {
            ctx->pc = 0x20A170u;
            goto label_20a170;
        }
    }
    ctx->pc = 0x20A16Cu;
label_20a16c:
    // 0x20a16c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a170:
    // 0x20a170: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A170u;
    {
        const bool branch_taken_0x20a170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A170u;
        // 0x20a174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a170) {
            ctx->pc = 0x20A184u;
            goto label_20a184;
        }
    }
    ctx->pc = 0x20A178u;
    // 0x20a178: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20a17c: 0xc098336  jal         func_260CD8
    ctx->pc = 0x20A17Cu;
    SET_GPR_U32(ctx, 31, 0x20A184u);
    ctx->pc = 0x20A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A17Cu;
    // 0x20a180: 0x248423b0  addiu       $a0, $a0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x20A17Cu, 0x20A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A184u;
label_20a184:
    // 0x20a184: 0xc082162  jal         func_208588
    ctx->pc = 0x20A184u;
    SET_GPR_U32(ctx, 31, 0x20A18Cu);
    ctx->pc = 0x20A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A184u;
    // 0x20a188: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A184u, 0x20A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A18Cu;
label_20a18c:
    // 0x20a18c: 0x8e2383c0  lw          $v1, -0x7C40($s1)
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x20a190: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x20a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x20a194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A194u;
    {
        const bool branch_taken_0x20a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A194u;
        // 0x20a198: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a194) {
            ctx->pc = 0x20A1BCu;
            goto label_20a1bc;
        }
    }
    ctx->pc = 0x20A19Cu;
    // 0x20a19c: 0x38620009  xori        $v0, $v1, 0x9
    ctx->pc = 0x20a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x20a1a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A1A0u;
    {
        const bool branch_taken_0x20a1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a1a0) {
            ctx->pc = 0x20A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A1A0u;
            // 0x20a1a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A1C0u;
            goto label_20a1c0;
        }
    }
    ctx->pc = 0x20A1A8u;
    // 0x20a1a8: 0xc0a3b58  jal         func_28ED60
    ctx->pc = 0x20A1A8u;
    SET_GPR_U32(ctx, 31, 0x20A1B0u);
    ctx->pc = 0x20A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1A8u;
    // 0x20a1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED60u, 0x20A1A8u, 0x20A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1B0u;
label_20a1b0:
    // 0x20a1b0: 0xc0a3aa4  jal         func_28EA90
    ctx->pc = 0x20A1B0u;
    SET_GPR_U32(ctx, 31, 0x20A1B8u);
    ctx->pc = 0x20A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1B0u;
    // 0x20a1b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA90u, 0x20A1B0u, 0x20A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1B8u;
label_20a1b8:
    // 0x20a1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a1bc:
    // 0x20a1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20a1c0:
    // 0x20a1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1C4u;
        // 0x20a1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1CCu;
    // 0x20a1cc: 0x0  nop
    ctx->pc = 0x20a1ccu;
    // NOP
    ctx->pc = 0x20a1d0u;
}
