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

// Function: sub_0024AE98
// Address: 0x24ae98 - 0x24afa8
void sub_0024AE98_0x24ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE98_0x24ae98");
#endif

    switch (ctx->pc) {
        case 0x24aed4u: goto label_24aed4;
        case 0x24af14u: goto label_24af14;
        case 0x24af48u: goto label_24af48;
        case 0x24af78u: goto label_24af78;
        case 0x24af90u: goto label_24af90;
        default: break;
    }

    ctx->pc = 0x24ae98u;

    // 0x24ae98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ae9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24aea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24aea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24aea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24aea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aeac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24aeb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24aeb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aeb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24aeb8: 0x8e030890  lw          $v1, 0x890($s0)
    ctx->pc = 0x24aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x24aebc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24aec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24aec4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24AEC4u;
    {
        const bool branch_taken_0x24aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC4u;
        // 0x24aec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aec4) {
            ctx->pc = 0x24AEFCu;
            goto label_24aefc;
        }
    }
    ctx->pc = 0x24AECCu;
    // 0x24aecc: 0xc0929ae  jal         func_24A6B8
    ctx->pc = 0x24AECCu;
    SET_GPR_U32(ctx, 31, 0x24AED4u);
    ctx->pc = 0x24A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6B8u, 0x24AECCu, 0x24AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AED4u;
label_24aed4:
    // 0x24aed4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24AED4u;
    {
        const bool branch_taken_0x24aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED4u;
        // 0x24aed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aed4) {
            ctx->pc = 0x24AEF8u;
            goto label_24aef8;
        }
    }
    ctx->pc = 0x24AEDCu;
    // 0x24aedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24aedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24aee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24aee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24aee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24aee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24aee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24aeec: 0x8092b80  j           func_24AE00
    ctx->pc = 0x24AEECu;
    ctx->pc = 0x24AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEECu;
    // 0x24aef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE00u;
    sub_0024AE00_0x24ae00(rdram, ctx, runtime); return;
    ctx->pc = 0x24AEF4u;
    // 0x24aef4: 0x0  nop
    ctx->pc = 0x24aef4u;
    // NOP
label_24aef8:
    // 0x24aef8: 0x8e030890  lw          $v1, 0x890($s0)
    ctx->pc = 0x24aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2192)));
label_24aefc:
    // 0x24aefc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24af00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24af04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24AF04u;
    {
        const bool branch_taken_0x24af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af04) {
            ctx->pc = 0x24AF38u;
            goto label_24af38;
        }
    }
    ctx->pc = 0x24AF0Cu;
    // 0x24af0c: 0xc0929ae  jal         func_24A6B8
    ctx->pc = 0x24AF0Cu;
    SET_GPR_U32(ctx, 31, 0x24AF14u);
    ctx->pc = 0x24AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF0Cu;
    // 0x24af10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6B8u, 0x24AF0Cu, 0x24AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF14u;
label_24af14:
    // 0x24af14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24AF14u;
    {
        const bool branch_taken_0x24af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF14u;
        // 0x24af18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af14) {
            ctx->pc = 0x24AF38u;
            goto label_24af38;
        }
    }
    ctx->pc = 0x24AF1Cu;
    // 0x24af1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24af1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24af20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24af20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24af24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24af24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24af28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24af2c: 0x8092b90  j           func_24AE40
    ctx->pc = 0x24AF2Cu;
    ctx->pc = 0x24AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF2Cu;
    // 0x24af30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE40u;
    sub_0024AE40_0x24ae40(rdram, ctx, runtime); return;
    ctx->pc = 0x24AF34u;
    // 0x24af34: 0x0  nop
    ctx->pc = 0x24af34u;
    // NOP
label_24af38:
    // 0x24af38: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x24AF38u;
    {
        const bool branch_taken_0x24af38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24af38) {
            ctx->pc = 0x24AF70u;
            goto label_24af70;
        }
    }
    ctx->pc = 0x24AF40u;
    // 0x24af40: 0xc092b68  jal         func_24ADA0
    ctx->pc = 0x24AF40u;
    SET_GPR_U32(ctx, 31, 0x24AF48u);
    ctx->pc = 0x24AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF40u;
    // 0x24af44: 0x8624014e  lh          $a0, 0x14E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADA0u, 0x24AF40u, 0x24AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF48u;
label_24af48:
    // 0x24af48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24af48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24af4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24af4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24af50: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x24af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x24af54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24af58: 0x8c841800  lw          $a0, 0x1800($a0)
    ctx->pc = 0x24af58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6144)));
    // 0x24af5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24af5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24af60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24af60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24af64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24af68: 0x809296c  j           func_24A5B0
    ctx->pc = 0x24AF68u;
    ctx->pc = 0x24AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF68u;
    // 0x24af6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B0u;
    sub_0024A5B0_0x24a5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x24AF70u;
label_24af70:
    // 0x24af70: 0xc092b74  jal         func_24ADD0
    ctx->pc = 0x24AF70u;
    SET_GPR_U32(ctx, 31, 0x24AF78u);
    ctx->pc = 0x24AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF70u;
    // 0x24af74: 0x8624014e  lh          $a0, 0x14E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 334)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24ADD0u, 0x24AF70u, 0x24AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF78u;
label_24af78:
    // 0x24af78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24af78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24af7c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x24af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x24af80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24af84: 0x8c841810  lw          $a0, 0x1810($a0)
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6160)));
    // 0x24af88: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x24AF88u;
    SET_GPR_U32(ctx, 31, 0x24AF90u);
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x24AF88u, 0x24AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF90u;
label_24af90:
    // 0x24af90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24af90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24af94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24af94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24af98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24af98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24af9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24afa0: 0x3e00008  jr          $ra
    ctx->pc = 0x24AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFA0u;
        // 0x24afa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AFA8u;
}
