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

// Function: sub_00103B80
// Address: 0x103b80 - 0x103d38
void sub_00103B80_0x103b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103B80_0x103b80");
#endif

    switch (ctx->pc) {
        case 0x103bc8u: goto label_103bc8;
        case 0x103be4u: goto label_103be4;
        case 0x103becu: goto label_103bec;
        case 0x103bf4u: goto label_103bf4;
        case 0x103c08u: goto label_103c08;
        case 0x103c10u: goto label_103c10;
        case 0x103c18u: goto label_103c18;
        case 0x103c70u: goto label_103c70;
        case 0x103c98u: goto label_103c98;
        case 0x103cbcu: goto label_103cbc;
        case 0x103ce0u: goto label_103ce0;
        default: break;
    }

    ctx->pc = 0x103b80u;

    // 0x103b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103b84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x103b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103b88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103b8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x103b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103b94: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x103b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103b98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x103b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x103b9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ba4: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x103ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x103ba8: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x103ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x103bac: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x103bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x103bb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103BB0u;
    {
        const bool branch_taken_0x103bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BB0u;
        // 0x103bb4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bb0) {
            ctx->pc = 0x103BD0u;
            goto label_103bd0;
        }
    }
    ctx->pc = 0x103BB8u;
    // 0x103bb8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x103bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x103bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bc0: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x103BC0u;
    SET_GPR_U32(ctx, 31, 0x103BC8u);
    ctx->pc = 0x103BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BC0u;
    // 0x103bc4: 0x24a5d7d0  addiu       $a1, $a1, -0x2830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x103BC0u, 0x103BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BC8u;
label_103bc8:
    // 0x103bc8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x103BC8u;
    {
        const bool branch_taken_0x103bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BC8u;
        // 0x103bcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bc8) {
            ctx->pc = 0x103D18u;
            goto label_103d18;
        }
    }
    ctx->pc = 0x103BD0u;
label_103bd0:
    // 0x103bd0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x103bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x103bd4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103BD4u;
    {
        const bool branch_taken_0x103bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BD4u;
        // 0x103bd8: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bd4) {
            ctx->pc = 0x103BFCu;
            goto label_103bfc;
        }
    }
    ctx->pc = 0x103BDCu;
    // 0x103bdc: 0xc044794  jal         func_111E50
    ctx->pc = 0x103BDCu;
    SET_GPR_U32(ctx, 31, 0x103BE4u);
    ctx->pc = 0x103BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BDCu;
    // 0x103be0: 0x2484d810  addiu       $a0, $a0, -0x27F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x103BDCu, 0x103BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BE4u;
label_103be4:
    // 0x103be4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x103BE4u;
    {
        const bool branch_taken_0x103be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BE4u;
        // 0x103be8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103be4) {
            ctx->pc = 0x103D18u;
            goto label_103d18;
        }
    }
    ctx->pc = 0x103BECu;
label_103bec:
    // 0x103bec: 0xc044794  jal         func_111E50
    ctx->pc = 0x103BECu;
    SET_GPR_U32(ctx, 31, 0x103BF4u);
    ctx->pc = 0x103BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BECu;
    // 0x103bf0: 0x2484d850  addiu       $a0, $a0, -0x27B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x103BECu, 0x103BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BF4u;
label_103bf4:
    // 0x103bf4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x103BF4u;
    {
        const bool branch_taken_0x103bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BF4u;
        // 0x103bf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bf4) {
            ctx->pc = 0x103D18u;
            goto label_103d18;
        }
    }
    ctx->pc = 0x103BFCu;
label_103bfc:
    // 0x103bfc: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x103bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x103c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x103c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103c04: 0x0  nop
    ctx->pc = 0x103c04u;
    // NOP
label_103c08:
    // 0x103c08: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103C08u;
    {
        const bool branch_taken_0x103c08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x103C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C08u;
        // 0x103c0c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c08) {
            ctx->pc = 0x103C48u;
            goto label_103c48;
        }
    }
    ctx->pc = 0x103C10u;
label_103c10:
    // 0x103c10: 0xc042a82  jal         func_10AA08
    ctx->pc = 0x103C10u;
    SET_GPR_U32(ctx, 31, 0x103C18u);
    ctx->pc = 0x103C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C10u;
    // 0x103c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA08u, 0x103C10u, 0x103C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C18u;
label_103c18:
    // 0x103c18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x103c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c1c: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x103C1Cu;
    {
        const bool branch_taken_0x103c1c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x103C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C1Cu;
        // 0x103c20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c1c) {
            ctx->pc = 0x103D18u;
            goto label_103d18;
        }
    }
    ctx->pc = 0x103C24u;
    // 0x103c24: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x103C24u;
    {
        const bool branch_taken_0x103c24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C24u;
        // 0x103c28: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c24) {
            ctx->pc = 0x103C48u;
            goto label_103c48;
        }
    }
    ctx->pc = 0x103C2Cu;
    // 0x103c2c: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x103c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x103c30: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x103c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x103c34: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103C34u;
    {
        const bool branch_taken_0x103c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x103C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C34u;
        // 0x103c38: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c34) {
            ctx->pc = 0x103C48u;
            goto label_103c48;
        }
    }
    ctx->pc = 0x103C3Cu;
    // 0x103c3c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x103c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x103c40: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x103C40u;
    {
        const bool branch_taken_0x103c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C40u;
        // 0x103c44: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c40) {
            ctx->pc = 0x103C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103c10;
        }
    }
    ctx->pc = 0x103C48u;
label_103c48:
    // 0x103c48: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x103C48u;
    {
        const bool branch_taken_0x103c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C48u;
        // 0x103c4c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c48) {
            ctx->pc = 0x103CF0u;
            goto label_103cf0;
        }
    }
    ctx->pc = 0x103C50u;
    // 0x103c50: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x103c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x103c54: 0x2442d870  addiu       $v0, $v0, -0x2790
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x103c58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103c5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x103c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103c60: 0x800008  jr          $a0
    ctx->pc = 0x103C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103C68u: goto label_103c68;
            case 0x103C7Cu: goto label_103c7c;
            case 0x103CACu: goto label_103cac;
            case 0x103CD0u: goto label_103cd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x103C68u;
label_103c68:
    // 0x103c68: 0xc0414fc  jal         func_1053F0
    ctx->pc = 0x103C68u;
    SET_GPR_U32(ctx, 31, 0x103C70u);
    ctx->pc = 0x103C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C68u;
    // 0x103c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053F0u, 0x103C68u, 0x103C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C70u;
label_103c70:
    // 0x103c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103c74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x103C74u;
    {
        const bool branch_taken_0x103c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C74u;
        // 0x103c78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c74) {
            ctx->pc = 0x103CF0u;
            goto label_103cf0;
        }
    }
    ctx->pc = 0x103C7Cu;
label_103c7c:
    // 0x103c7c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x103c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x103c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c84: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x103c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x103c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c8c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x103c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x103c90: 0xc0411c2  jal         func_104708
    ctx->pc = 0x103C90u;
    SET_GPR_U32(ctx, 31, 0x103C98u);
    ctx->pc = 0x103C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C90u;
    // 0x103c94: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104708u, 0x103C90u, 0x103C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C98u;
label_103c98:
    // 0x103c98: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x103c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x103c9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x103c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x103ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x103ca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x103CA4u;
    {
        const bool branch_taken_0x103ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CA4u;
        // 0x103ca8: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ca4) {
            ctx->pc = 0x103CF0u;
            goto label_103cf0;
        }
    }
    ctx->pc = 0x103CACu;
label_103cac:
    // 0x103cac: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x103cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cb4: 0xc0411c2  jal         func_104708
    ctx->pc = 0x103CB4u;
    SET_GPR_U32(ctx, 31, 0x103CBCu);
    ctx->pc = 0x103CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CB4u;
    // 0x103cb8: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104708u, 0x103CB4u, 0x103CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CBCu;
label_103cbc:
    // 0x103cbc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x103cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x103cc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x103cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x103cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x103cc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x103CC8u;
    {
        const bool branch_taken_0x103cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CC8u;
        // 0x103ccc: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cc8) {
            ctx->pc = 0x103CF0u;
            goto label_103cf0;
        }
    }
    ctx->pc = 0x103CD0u;
label_103cd0:
    // 0x103cd0: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x103cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x103cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cd8: 0xc0411c2  jal         func_104708
    ctx->pc = 0x103CD8u;
    SET_GPR_U32(ctx, 31, 0x103CE0u);
    ctx->pc = 0x103CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CD8u;
    // 0x103cdc: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104708u, 0x103CD8u, 0x103CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CE0u;
label_103ce0:
    // 0x103ce0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x103ce4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x103ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ce8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x103cec: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x103cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_103cf0:
    // 0x103cf0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x103cf4: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x103CF4u;
    {
        const bool branch_taken_0x103cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CF4u;
        // 0x103cf8: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cf4) {
            ctx->pc = 0x103BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103bec;
        }
    }
    ctx->pc = 0x103CFCu;
    // 0x103cfc: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x103cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x103d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103D00u;
    {
        const bool branch_taken_0x103d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D00u;
        // 0x103d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d00) {
            ctx->pc = 0x103D18u;
            goto label_103d18;
        }
    }
    ctx->pc = 0x103D08u;
    // 0x103d08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x103d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103d0c: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x103D0Cu;
    {
        const bool branch_taken_0x103d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D0Cu;
        // 0x103d10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d0c) {
            ctx->pc = 0x103C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103c08;
        }
    }
    ctx->pc = 0x103D14u;
    // 0x103d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103d18:
    // 0x103d18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x103d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103d1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x103d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103d20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103d24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x103D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D2Cu;
        // 0x103d30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D34u;
    // 0x103d34: 0x0  nop
    ctx->pc = 0x103d34u;
    // NOP
    ctx->pc = 0x103d38u;
}
