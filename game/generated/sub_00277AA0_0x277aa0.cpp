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

// Function: sub_00277AA0
// Address: 0x277aa0 - 0x277eb0
void sub_00277AA0_0x277aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277AA0_0x277aa0");
#endif

    switch (ctx->pc) {
        case 0x277af8u: goto label_277af8;
        case 0x277b2cu: goto label_277b2c;
        case 0x277b3cu: goto label_277b3c;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b98u: goto label_277b98;
        case 0x277c18u: goto label_277c18;
        case 0x277c28u: goto label_277c28;
        case 0x277c44u: goto label_277c44;
        case 0x277c58u: goto label_277c58;
        case 0x277c60u: goto label_277c60;
        case 0x277c68u: goto label_277c68;
        case 0x277c78u: goto label_277c78;
        case 0x277c80u: goto label_277c80;
        case 0x277c90u: goto label_277c90;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca4u: goto label_277ca4;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce4u: goto label_277ce4;
        case 0x277cecu: goto label_277cec;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d04u: goto label_277d04;
        case 0x277d58u: goto label_277d58;
        case 0x277d68u: goto label_277d68;
        case 0x277d78u: goto label_277d78;
        case 0x277d8cu: goto label_277d8c;
        case 0x277da0u: goto label_277da0;
        case 0x277db4u: goto label_277db4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e04u: goto label_277e04;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e14u: goto label_277e14;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e28u: goto label_277e28;
        case 0x277e80u: goto label_277e80;
        default: break;
    }

    ctx->pc = 0x277aa0u;

    // 0x277aa0: 0x8f83ca70  lw          $v1, -0x3590($gp)
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x277aa4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x277aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x277aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x277aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x277ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x277ab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x277ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x277ab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x277ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x277abc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x277abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x277ac0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x277ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x277ac4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x277ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x277ac8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x277ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x277acc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x277accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x277ad0: 0x14620099  bne         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x277AD0u;
    {
        const bool branch_taken_0x277ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AD0u;
        // 0x277ad4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ad0) {
            ctx->pc = 0x277D38u;
            goto label_277d38;
        }
    }
    ctx->pc = 0x277AD8u;
    // 0x277ad8: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x277adc: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x277adcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x277ae0: 0x8ec23360  lw          $v0, 0x3360($s6)
    ctx->pc = 0x277ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B3360u));
    // 0x277ae4: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x277AE4u;
    {
        const bool branch_taken_0x277ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AE4u;
        // 0x277ae8: 0x8fd288d0  lw          $s2, -0x7730($fp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ae4) {
            ctx->pc = 0x277C10u;
            goto label_277c10;
        }
    }
    ctx->pc = 0x277AECu;
    // 0x277aec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x277aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277af0: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x277af0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x277af4: 0x0  nop
    ctx->pc = 0x277af4u;
    // NOP
label_277af8:
    // 0x277af8: 0x9643003c  lhu         $v1, 0x3C($s2)
    ctx->pc = 0x277af8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x277afc: 0x26e4a620  addiu       $a0, $s7, -0x59E0
    ctx->pc = 0x277afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944288));
    // 0x277b00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x277b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x277b04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x277b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277b08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277b0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x277b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277b10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277b14: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x277b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277b18: 0x8e8306a8  lw          $v1, 0x6A8($s4)
    ctx->pc = 0x277b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x277b1c: 0x8c73000c  lw          $s3, 0xC($v1)
    ctx->pc = 0x277b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x277b20: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x277b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x277b24: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x277B24u;
    SET_GPR_U32(ctx, 31, 0x277B2Cu);
    ctx->pc = 0x277B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B24u;
    // 0x277b28: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x277B24u, 0x277B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B2Cu;
label_277b2c:
    // 0x277b2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277B2Cu;
    {
        const bool branch_taken_0x277b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b2c) {
            ctx->pc = 0x277B44u;
            goto label_277b44;
        }
    }
    ctx->pc = 0x277B34u;
    // 0x277b34: 0xc07e628  jal         func_1F98A0
    ctx->pc = 0x277B34u;
    SET_GPR_U32(ctx, 31, 0x277B3Cu);
    ctx->pc = 0x1F98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98A0u, 0x277B34u, 0x277B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B3Cu;
label_277b3c:
    // 0x277b3c: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x277B3Cu;
    {
        const bool branch_taken_0x277b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x277B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B3Cu;
        // 0x277b40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b3c) {
            ctx->pc = 0x277B74u;
            goto label_277b74;
        }
    }
    ctx->pc = 0x277B44u;
label_277b44:
    // 0x277b44: 0xc07ec34  jal         func_1FB0D0
    ctx->pc = 0x277B44u;
    SET_GPR_U32(ctx, 31, 0x277B4Cu);
    ctx->pc = 0x1FB0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0D0u, 0x277B44u, 0x277B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B4Cu;
label_277b4c:
    // 0x277b4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x277B4Cu;
    {
        const bool branch_taken_0x277b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b4c) {
            ctx->pc = 0x277B90u;
            goto label_277b90;
        }
    }
    ctx->pc = 0x277B54u;
    // 0x277b54: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x277b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x277b58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277B58u;
    {
        const bool branch_taken_0x277b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B58u;
        // 0x277b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b58) {
            ctx->pc = 0x277B6Cu;
            goto label_277b6c;
        }
    }
    ctx->pc = 0x277B60u;
    // 0x277b60: 0x924201bc  lbu         $v0, 0x1BC($s2)
    ctx->pc = 0x277b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x277b64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x277b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x277b68: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x277b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_277b6c:
    // 0x277b6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x277B6Cu;
    {
        const bool branch_taken_0x277b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B6Cu;
        // 0x277b70: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b6c) {
            ctx->pc = 0x277B90u;
            goto label_277b90;
        }
    }
    ctx->pc = 0x277B74u;
label_277b74:
    // 0x277b74: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x277b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x277b78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x277b7c: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x277b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x277b80: 0xac22ca78  sw          $v0, -0x3588($at)
    ctx->pc = 0x277b80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953592), GPR_U32(ctx, 2));
    // 0x277b84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x277B84u;
    {
        const bool branch_taken_0x277b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B84u;
        // 0x277b88: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b84) {
            ctx->pc = 0x277BF8u;
            goto label_277bf8;
        }
    }
    ctx->pc = 0x277B8Cu;
    // 0x277b8c: 0x0  nop
    ctx->pc = 0x277b8cu;
    // NOP
label_277b90:
    // 0x277b90: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x277B90u;
    SET_GPR_U32(ctx, 31, 0x277B98u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x277B90u, 0x277B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B98u;
label_277b98:
    // 0x277b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277B98u;
    {
        const bool branch_taken_0x277b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B98u;
        // 0x277b9c: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b98) {
            ctx->pc = 0x277BACu;
            goto label_277bac;
        }
    }
    ctx->pc = 0x277BA0u;
    // 0x277ba0: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x277ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x277ba4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x277BA4u;
    {
        const bool branch_taken_0x277ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BA4u;
        // 0x277ba8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ba4) {
            ctx->pc = 0x277BE4u;
            goto label_277be4;
        }
    }
    ctx->pc = 0x277BACu;
label_277bac:
    // 0x277bac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x277bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277bb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x277bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x277bb4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x277bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x277bb8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x277bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x277bbc: 0x1471000a  bne         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x277BBCu;
    {
        const bool branch_taken_0x277bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x277BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BBCu;
        // 0x277bc0: 0x2641821  addu        $v1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bbc) {
            ctx->pc = 0x277BE8u;
            goto label_277be8;
        }
    }
    ctx->pc = 0x277BC4u;
    // 0x277bc4: 0x8e8306a8  lw          $v1, 0x6A8($s4)
    ctx->pc = 0x277bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x277bc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x277bcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x277bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x277bd0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x277bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x277bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277BD4u;
    {
        const bool branch_taken_0x277bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BD4u;
        // 0x277bd8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bd4) {
            ctx->pc = 0x277BE4u;
            goto label_277be4;
        }
    }
    ctx->pc = 0x277BDCu;
    // 0x277bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277be0: 0xaec23360  sw          $v0, 0x3360($s6)
    ctx->pc = 0x277be0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 13152), GPR_U32(ctx, 2));
label_277be4:
    // 0x277be4: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x277be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_277be8:
    // 0x277be8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x277be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x277bec: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x277becu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x277bf0: 0xac23ca78  sw          $v1, -0x3588($at)
    ctx->pc = 0x277bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953592), GPR_U32(ctx, 3));
    // 0x277bf4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x277bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_277bf8:
    // 0x277bf8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x277bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x277bfc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x277BFCu;
    {
        const bool branch_taken_0x277bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BFCu;
        // 0x277c00: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bfc) {
            ctx->pc = 0x277AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277af8;
        }
    }
    ctx->pc = 0x277C04u;
    // 0x277c04: 0x8ec23360  lw          $v0, 0x3360($s6)
    ctx->pc = 0x277c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 13152)));
    // 0x277c08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x277C08u;
    {
        const bool branch_taken_0x277c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c08) {
            ctx->pc = 0x277C60u;
            goto label_277c60;
        }
    }
    ctx->pc = 0x277C10u;
label_277c10:
    // 0x277c10: 0xc08f2b6  jal         func_23CAD8
    ctx->pc = 0x277C10u;
    SET_GPR_U32(ctx, 31, 0x277C18u);
    ctx->pc = 0x23CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CAD8u, 0x277C10u, 0x277C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C18u;
label_277c18:
    // 0x277c18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277C18u;
    {
        const bool branch_taken_0x277c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C18u;
        // 0x277c1c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c18) {
            ctx->pc = 0x277C2Cu;
            goto label_277c2c;
        }
    }
    ctx->pc = 0x277C20u;
    // 0x277c20: 0xc08f264  jal         func_23C990
    ctx->pc = 0x277C20u;
    SET_GPR_U32(ctx, 31, 0x277C28u);
    ctx->pc = 0x23C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C990u, 0x277C20u, 0x277C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C28u;
label_277c28:
    // 0x277c28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x277c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_277c2c:
    // 0x277c2c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x277c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x277c30: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x277c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x277c34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x277C34u;
    {
        const bool branch_taken_0x277c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c34) {
            ctx->pc = 0x277C60u;
            goto label_277c60;
        }
    }
    ctx->pc = 0x277C3Cu;
    // 0x277c3c: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x277C3Cu;
    SET_GPR_U32(ctx, 31, 0x277C44u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x277C3Cu, 0x277C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C44u;
label_277c44:
    // 0x277c44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x277C44u;
    {
        const bool branch_taken_0x277c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c44) {
            ctx->pc = 0x277C60u;
            goto label_277c60;
        }
    }
    ctx->pc = 0x277C4Cu;
    // 0x277c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x277c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c50: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x277C50u;
    SET_GPR_U32(ctx, 31, 0x277C58u);
    ctx->pc = 0x277C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C50u;
    // 0x277c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x277C50u, 0x277C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C58u;
label_277c58:
    // 0x277c58: 0xc07ec28  jal         func_1FB0A0
    ctx->pc = 0x277C58u;
    SET_GPR_U32(ctx, 31, 0x277C60u);
    ctx->pc = 0x277C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C58u;
    // 0x277c5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0A0u, 0x277C58u, 0x277C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C60u;
label_277c60:
    // 0x277c60: 0xc08f29a  jal         func_23CA68
    ctx->pc = 0x277C60u;
    SET_GPR_U32(ctx, 31, 0x277C68u);
    ctx->pc = 0x23CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA68u, 0x277C60u, 0x277C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C68u;
label_277c68:
    // 0x277c68: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x277C68u;
    {
        const bool branch_taken_0x277c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c68) {
            ctx->pc = 0x277D50u;
            goto label_277d50;
        }
    }
    ctx->pc = 0x277C70u;
    // 0x277c70: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x277C70u;
    SET_GPR_U32(ctx, 31, 0x277C78u);
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x277C70u, 0x277C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C78u;
label_277c78:
    // 0x277c78: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x277C78u;
    SET_GPR_U32(ctx, 31, 0x277C80u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x277C78u, 0x277C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C80u;
label_277c80:
    // 0x277c80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x277C80u;
    {
        const bool branch_taken_0x277c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C80u;
        // 0x277c84: 0x27d088d0  addiu       $s0, $fp, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c80) {
            ctx->pc = 0x277D04u;
            goto label_277d04;
        }
    }
    ctx->pc = 0x277C88u;
    // 0x277c88: 0xc07e636  jal         func_1F98D8
    ctx->pc = 0x277C88u;
    SET_GPR_U32(ctx, 31, 0x277C90u);
    ctx->pc = 0x277C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C88u;
    // 0x277c8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D8u, 0x277C88u, 0x277C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C90u;
label_277c90:
    // 0x277c90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277c94: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x277C94u;
    SET_GPR_U32(ctx, 31, 0x277C9Cu);
    ctx->pc = 0x277C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C94u;
    // 0x277c98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x277C94u, 0x277C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C9Cu;
label_277c9c:
    // 0x277c9c: 0xc07e636  jal         func_1F98D8
    ctx->pc = 0x277C9Cu;
    SET_GPR_U32(ctx, 31, 0x277CA4u);
    ctx->pc = 0x277CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C9Cu;
    // 0x277ca0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D8u, 0x277C9Cu, 0x277CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CA4u;
label_277ca4:
    // 0x277ca4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x277ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x277ca8: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x277CA8u;
    SET_GPR_U32(ctx, 31, 0x277CB0u);
    ctx->pc = 0x277CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CA8u;
    // 0x277cac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x277CA8u, 0x277CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CB0u;
label_277cb0:
    // 0x277cb0: 0xc07f106  jal         func_1FC418
    ctx->pc = 0x277CB0u;
    SET_GPR_U32(ctx, 31, 0x277CB8u);
    ctx->pc = 0x277CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CB0u;
    // 0x277cb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC418u, 0x277CB0u, 0x277CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CB8u;
label_277cb8:
    // 0x277cb8: 0xc07ed26  jal         func_1FB498
    ctx->pc = 0x277CB8u;
    SET_GPR_U32(ctx, 31, 0x277CC0u);
    ctx->pc = 0x1FB498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB498u, 0x277CB8u, 0x277CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CC0u;
label_277cc0:
    // 0x277cc0: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x277CC0u;
    SET_GPR_U32(ctx, 31, 0x277CC8u);
    ctx->pc = 0x277CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CC0u;
    // 0x277cc4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x277CC0u, 0x277CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CC8u;
label_277cc8:
    // 0x277cc8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x277cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x277ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277cd4: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x277CD4u;
    SET_GPR_U32(ctx, 31, 0x277CDCu);
    ctx->pc = 0x277CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CD4u;
    // 0x277cd8: 0xa06283c4  sb          $v0, -0x7C3C($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294935492), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x277CD4u, 0x277CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CDCu;
label_277cdc:
    // 0x277cdc: 0xc07f10e  jal         func_1FC438
    ctx->pc = 0x277CDCu;
    SET_GPR_U32(ctx, 31, 0x277CE4u);
    ctx->pc = 0x277CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CDCu;
    // 0x277ce0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC438u, 0x277CDCu, 0x277CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CE4u;
label_277ce4:
    // 0x277ce4: 0xc07f10e  jal         func_1FC438
    ctx->pc = 0x277CE4u;
    SET_GPR_U32(ctx, 31, 0x277CECu);
    ctx->pc = 0x277CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CE4u;
    // 0x277ce8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC438u, 0x277CE4u, 0x277CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CECu;
label_277cec:
    // 0x277cec: 0xc07f81c  jal         func_1FE070
    ctx->pc = 0x277CECu;
    SET_GPR_U32(ctx, 31, 0x277CF4u);
    ctx->pc = 0x277CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CECu;
    // 0x277cf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE070u, 0x277CECu, 0x277CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CF4u;
label_277cf4:
    // 0x277cf4: 0xc07f81c  jal         func_1FE070
    ctx->pc = 0x277CF4u;
    SET_GPR_U32(ctx, 31, 0x277CFCu);
    ctx->pc = 0x277CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CF4u;
    // 0x277cf8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE070u, 0x277CF4u, 0x277CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CFCu;
label_277cfc:
    // 0x277cfc: 0xc08f206  jal         func_23C818
    ctx->pc = 0x277CFCu;
    SET_GPR_U32(ctx, 31, 0x277D04u);
    ctx->pc = 0x277D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277CFCu;
    // 0x277d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C818u, 0x277CFCu, 0x277D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D04u;
label_277d04:
    // 0x277d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x277d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277d10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277d14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x277d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277d18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x277d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277d1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x277d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277d20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x277d20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277d24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x277d24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x277d28: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x277d28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277d2c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x277d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x277d30: 0x807e57c  j           func_1F95F0
    ctx->pc = 0x277D30u;
    ctx->pc = 0x277D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D30u;
    // 0x277d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    sub_001F95F0_0x1f95f0(rdram, ctx, runtime); return;
    ctx->pc = 0x277D38u;
label_277d38:
    // 0x277d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277d3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277D3Cu;
    {
        const bool branch_taken_0x277d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D3Cu;
        // 0x277d40: 0x8f83ca68  lw          $v1, -0x3598($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d3c) {
            ctx->pc = 0x277D50u;
            goto label_277d50;
        }
    }
    ctx->pc = 0x277D44u;
    // 0x277d44: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x277d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x277d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277d4c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x277d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_277d50:
    // 0x277d50: 0xc085c6e  jal         func_2171B8
    ctx->pc = 0x277D50u;
    SET_GPR_U32(ctx, 31, 0x277D58u);
    ctx->pc = 0x2171B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171B8u, 0x277D50u, 0x277D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D58u;
label_277d58:
    // 0x277d58: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x277D58u;
    {
        const bool branch_taken_0x277d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D58u;
        // 0x277d5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d58) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277D60u;
    // 0x277d60: 0xc09d940  jal         func_276500
    ctx->pc = 0x277D60u;
    SET_GPR_U32(ctx, 31, 0x277D68u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x277D60u, 0x277D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D68u;
label_277d68:
    // 0x277d68: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x277D68u;
    {
        const bool branch_taken_0x277d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D68u;
        // 0x277d6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d68) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277D70u;
    // 0x277d70: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x277D70u;
    SET_GPR_U32(ctx, 31, 0x277D78u);
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x277D70u, 0x277D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D78u;
label_277d78:
    // 0x277d78: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x277d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
    // 0x277d7c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x277D7Cu;
    {
        const bool branch_taken_0x277d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D7Cu;
        // 0x277d80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d7c) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277D84u;
    // 0x277d84: 0xc08215c  jal         func_208570
    ctx->pc = 0x277D84u;
    SET_GPR_U32(ctx, 31, 0x277D8Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x277D84u, 0x277D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D8Cu;
label_277d8c:
    // 0x277d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277d90: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x277D90u;
    {
        const bool branch_taken_0x277d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D90u;
        // 0x277d94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d90) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277D98u;
    // 0x277d98: 0xc08215c  jal         func_208570
    ctx->pc = 0x277D98u;
    SET_GPR_U32(ctx, 31, 0x277DA0u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x277D98u, 0x277DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DA0u;
label_277da0:
    // 0x277da0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277da4: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x277DA4u;
    {
        const bool branch_taken_0x277da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DA4u;
        // 0x277da8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277da4) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277DACu;
    // 0x277dac: 0xc08215c  jal         func_208570
    ctx->pc = 0x277DACu;
    SET_GPR_U32(ctx, 31, 0x277DB4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x277DACu, 0x277DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DB4u;
label_277db4:
    // 0x277db4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x277db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x277db8: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x277DB8u;
    {
        const bool branch_taken_0x277db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DB8u;
        // 0x277dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277db8) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277DC0u;
    // 0x277dc0: 0xc08215c  jal         func_208570
    ctx->pc = 0x277DC0u;
    SET_GPR_U32(ctx, 31, 0x277DC8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x277DC0u, 0x277DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DC8u;
label_277dc8:
    // 0x277dc8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x277dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x277dcc: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x277DCCu;
    {
        const bool branch_taken_0x277dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DCCu;
        // 0x277dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dcc) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277DD4u;
    // 0x277dd4: 0xc08215c  jal         func_208570
    ctx->pc = 0x277DD4u;
    SET_GPR_U32(ctx, 31, 0x277DDCu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x277DD4u, 0x277DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DDCu;
label_277ddc:
    // 0x277ddc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x277ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x277de0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x277DE0u;
    {
        const bool branch_taken_0x277de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x277DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DE0u;
        // 0x277de4: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277de0) {
            ctx->pc = 0x277E28u;
            goto label_277e28;
        }
    }
    ctx->pc = 0x277DE8u;
    // 0x277de8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x277de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x277dec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x277DECu;
    {
        const bool branch_taken_0x277dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DECu;
        // 0x277df0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dec) {
            ctx->pc = 0x277E2Cu;
            goto label_277e2c;
        }
    }
    ctx->pc = 0x277DF4u;
    // 0x277df4: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x277DF4u;
    SET_GPR_U32(ctx, 31, 0x277DFCu);
    ctx->pc = 0x277DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277DF4u;
    // 0x277df8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x277DF4u, 0x277DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DFCu;
label_277dfc:
    // 0x277dfc: 0xc084f26  jal         func_213C98
    ctx->pc = 0x277DFCu;
    SET_GPR_U32(ctx, 31, 0x277E04u);
    ctx->pc = 0x213C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C98u, 0x277DFCu, 0x277E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E04u;
label_277e04:
    // 0x277e04: 0xc085c70  jal         func_2171C0
    ctx->pc = 0x277E04u;
    SET_GPR_U32(ctx, 31, 0x277E0Cu);
    ctx->pc = 0x277E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E04u;
    // 0x277e08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C0u, 0x277E04u, 0x277E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E0Cu;
label_277e0c:
    // 0x277e0c: 0xc085c72  jal         func_2171C8
    ctx->pc = 0x277E0Cu;
    SET_GPR_U32(ctx, 31, 0x277E14u);
    ctx->pc = 0x2171C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171C8u, 0x277E0Cu, 0x277E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E14u;
label_277e14:
    // 0x277e14: 0xc085c74  jal         func_2171D0
    ctx->pc = 0x277E14u;
    SET_GPR_U32(ctx, 31, 0x277E1Cu);
    ctx->pc = 0x277E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E14u;
    // 0x277e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2171D0u, 0x277E14u, 0x277E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E1Cu;
label_277e1c:
    // 0x277e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e20: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x277E20u;
    SET_GPR_U32(ctx, 31, 0x277E28u);
    ctx->pc = 0x277E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E20u;
    // 0x277e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x277E20u, 0x277E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277E28u;
label_277e28:
    // 0x277e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277e2c:
    // 0x277e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x277e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277e34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x277e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277e38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x277e38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277e3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x277e3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277e40: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x277e40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277e44: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x277e44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x277e48: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x277e48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277e4c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x277e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x277e50: 0x3e00008  jr          $ra
    ctx->pc = 0x277E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E50u;
        // 0x277e54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277E58u;
    // 0x277e58: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x277e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277e5c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x277e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x277e60: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x277e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x277e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e68: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x277e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277e6c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x277e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x277e70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x277e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e74: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x277E74u;
    {
        const bool branch_taken_0x277e74 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x277E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E74u;
        // 0x277e78: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e74) {
            ctx->pc = 0x277EA8u;
            goto label_277ea8;
        }
    }
    ctx->pc = 0x277E7Cu;
    // 0x277e7c: 0x0  nop
    ctx->pc = 0x277e7cu;
    // NOP
label_277e80:
    // 0x277e80: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x277e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x277e84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x277e88: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x277e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x277e8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x277e90: 0x88890003  lwl         $t1, 0x3($a0)
    ctx->pc = 0x277e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x277e94: 0x98890000  lwr         $t1, 0x0($a0)
    ctx->pc = 0x277e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x277e98: 0xa8490003  swl         $t1, 0x3($v0)
    ctx->pc = 0x277e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277e9c: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x277e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x277ea0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x277EA0u;
    {
        const bool branch_taken_0x277ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EA0u;
        // 0x277ea4: 0xb8490000  swr         $t1, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ea0) {
            ctx->pc = 0x277E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277e80;
        }
    }
    ctx->pc = 0x277EA8u;
label_277ea8:
    // 0x277ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x277EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EA8u;
        // 0x277eac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277EB0u;
}
