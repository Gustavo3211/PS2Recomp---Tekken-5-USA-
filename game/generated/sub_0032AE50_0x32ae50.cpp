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

// Function: sub_0032AE50
// Address: 0x32ae50 - 0x32af60
void sub_0032AE50_0x32ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AE50_0x32ae50");
#endif

    switch (ctx->pc) {
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        case 0x32af38u: goto label_32af38;
        case 0x32af3cu: goto label_32af3c;
        case 0x32af40u: goto label_32af40;
        case 0x32af44u: goto label_32af44;
        case 0x32af48u: goto label_32af48;
        case 0x32af4cu: goto label_32af4c;
        case 0x32af50u: goto label_32af50;
        case 0x32af54u: goto label_32af54;
        case 0x32af58u: goto label_32af58;
        case 0x32af5cu: goto label_32af5c;
        default: break;
    }

    ctx->pc = 0x32ae50u;

label_32ae50:
    // 0x32ae50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32ae54:
    // 0x32ae54: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x32ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_32ae58:
    // 0x32ae58: 0x30c60800  andi        $a2, $a2, 0x800
    ctx->pc = 0x32ae58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_32ae5c:
    // 0x32ae5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32ae60:
    // 0x32ae60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32ae64:
    // 0x32ae64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ae64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ae68:
    // 0x32ae68: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_32ae6c:
    if (ctx->pc == 0x32AE6Cu) {
        ctx->pc = 0x32AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE68u;
        // 0x32ae6c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE70u;
        goto label_32ae70;
    }
    ctx->pc = 0x32AE68u;
    {
        const bool branch_taken_0x32ae68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE68u;
        // 0x32ae6c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae68) {
            ctx->pc = 0x32AEB8u;
            goto label_32aeb8;
        }
    }
    ctx->pc = 0x32AE70u;
label_32ae70:
    // 0x32ae70: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x32ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_32ae74:
    // 0x32ae74: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x32ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_32ae78:
    // 0x32ae78: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32ae7c:
    // 0x32ae7c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_32ae80:
    // 0x32ae80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32ae84:
    // 0x32ae84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x32ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32ae88:
    // 0x32ae88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32ae8c:
    // 0x32ae8c: 0x8ce60414  lw          $a2, 0x414($a3)
    ctx->pc = 0x32ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1044)));
label_32ae90:
    // 0x32ae90: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x32ae90u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_32ae94:
    // 0x32ae94: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x32ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_32ae98:
    // 0x32ae98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ae98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32ae9c:
    // 0x32ae9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32ae9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32aea0:
    // 0x32aea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32aea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32aea4:
    // 0x32aea4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32aea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32aea8:
    // 0x32aea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32aea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32aeac:
    // 0x32aeac: 0x80c81e2  j           func_320788
label_32aeb0:
    if (ctx->pc == 0x32AEB0u) {
        ctx->pc = 0x32AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEACu;
        // 0x32aeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEB4u;
        goto label_32aeb4;
    }
    ctx->pc = 0x32AEACu;
    ctx->pc = 0x32AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEACu;
    // 0x32aeb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x32AEB4u;
label_32aeb4:
    // 0x32aeb4: 0x0  nop
    ctx->pc = 0x32aeb4u;
    // NOP
label_32aeb8:
    // 0x32aeb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_32aebc:
    if (ctx->pc == 0x32AEBCu) {
        ctx->pc = 0x32AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEB8u;
        // 0x32aebc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEC0u;
        goto label_32aec0;
    }
    ctx->pc = 0x32AEB8u;
    {
        const bool branch_taken_0x32aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEB8u;
        // 0x32aebc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aeb8) {
            ctx->pc = 0x32AF20u;
            goto label_32af20;
        }
    }
    ctx->pc = 0x32AEC0u;
label_32aec0:
    // 0x32aec0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x32aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_32aec4:
    // 0x32aec4: 0x8c700414  lw          $s0, 0x414($v1)
    ctx->pc = 0x32aec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1044)));
label_32aec8:
    // 0x32aec8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x32aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_32aecc:
    // 0x32aecc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32aeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32aed0:
    // 0x32aed0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32aed4:
    // 0x32aed4: 0x60f809  jalr        $v1
label_32aed8:
    if (ctx->pc == 0x32AED8u) {
        ctx->pc = 0x32AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED4u;
        // 0x32aed8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEDCu;
        goto label_32aedc;
    }
    ctx->pc = 0x32AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32AEDCu);
        ctx->pc = 0x32AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED4u;
        // 0x32aed8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AED4u, 0x32AEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AEDCu;
label_32aedc:
    // 0x32aedc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_32aee0:
    // 0x32aee0: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x32aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_32aee4:
    // 0x32aee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32aee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32aee8:
    // 0x32aee8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32aeec:
    // 0x32aeec: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x32aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_32aef0:
    // 0x32aef0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32aef4:
    // 0x32aef4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x32aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32aef8:
    // 0x32aef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32aefc:
    // 0x32aefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32aefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32af00:
    // 0x32af00: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x32af00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_32af04:
    // 0x32af04: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x32af04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_32af08:
    // 0x32af08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32af08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32af0c:
    // 0x32af0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32af0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32af10:
    // 0x32af10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32af14:
    // 0x32af14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32af14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32af18:
    // 0x32af18: 0x80c819c  j           func_320670
label_32af1c:
    if (ctx->pc == 0x32AF1Cu) {
        ctx->pc = 0x32AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF18u;
        // 0x32af1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF20u;
        goto label_32af20;
    }
    ctx->pc = 0x32AF18u;
    ctx->pc = 0x32AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF18u;
    // 0x32af1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320670u;
    sub_00320670_0x320670(rdram, ctx, runtime); return;
    ctx->pc = 0x32AF20u;
label_32af20:
    // 0x32af20: 0x8f82ccd0  lw          $v0, -0x3330($gp)
    ctx->pc = 0x32af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954192)));
label_32af24:
    // 0x32af24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32af24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_32af28:
    // 0x32af28: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32af28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32af2c:
    // 0x32af2c: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x32af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
label_32af30:
    // 0x32af30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32af30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32af34:
    // 0x32af34: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x32af34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32af38:
    // 0x32af38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32af3c:
    // 0x32af3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32af3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32af40:
    // 0x32af40: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x32af40u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_32af44:
    // 0x32af44: 0xc0c8186  jal         func_320618
label_32af48:
    if (ctx->pc == 0x32AF48u) {
        ctx->pc = 0x32AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF44u;
        // 0x32af48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF4Cu;
        goto label_32af4c;
    }
    ctx->pc = 0x32AF44u;
    SET_GPR_U32(ctx, 31, 0x32AF4Cu);
    ctx->pc = 0x32AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF44u;
    // 0x32af48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x32AF44u, 0x32AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF4Cu;
label_32af4c:
    // 0x32af4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32af4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32af50:
    // 0x32af50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32af50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32af54:
    // 0x32af54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32af58:
    // 0x32af58: 0x3e00008  jr          $ra
label_32af5c:
    if (ctx->pc == 0x32AF5Cu) {
        ctx->pc = 0x32AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF58u;
        // 0x32af5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF60u;
        goto label_fallthrough_0x32af58;
    }
    ctx->pc = 0x32AF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF58u;
        // 0x32af5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32af58:
    ctx->pc = 0x32AF60u;
}
