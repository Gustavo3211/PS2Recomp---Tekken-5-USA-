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

// Function: sub_004BFE40
// Address: 0x4bfe40 - 0x4bfed0
void sub_004BFE40_0x4bfe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFE40_0x4bfe40");
#endif

    switch (ctx->pc) {
        case 0x4bfe40u: goto label_4bfe40;
        case 0x4bfe44u: goto label_4bfe44;
        case 0x4bfe48u: goto label_4bfe48;
        case 0x4bfe4cu: goto label_4bfe4c;
        case 0x4bfe50u: goto label_4bfe50;
        case 0x4bfe54u: goto label_4bfe54;
        case 0x4bfe58u: goto label_4bfe58;
        case 0x4bfe5cu: goto label_4bfe5c;
        case 0x4bfe60u: goto label_4bfe60;
        case 0x4bfe64u: goto label_4bfe64;
        case 0x4bfe68u: goto label_4bfe68;
        case 0x4bfe6cu: goto label_4bfe6c;
        case 0x4bfe70u: goto label_4bfe70;
        case 0x4bfe74u: goto label_4bfe74;
        case 0x4bfe78u: goto label_4bfe78;
        case 0x4bfe7cu: goto label_4bfe7c;
        case 0x4bfe80u: goto label_4bfe80;
        case 0x4bfe84u: goto label_4bfe84;
        case 0x4bfe88u: goto label_4bfe88;
        case 0x4bfe8cu: goto label_4bfe8c;
        case 0x4bfe90u: goto label_4bfe90;
        case 0x4bfe94u: goto label_4bfe94;
        case 0x4bfe98u: goto label_4bfe98;
        case 0x4bfe9cu: goto label_4bfe9c;
        case 0x4bfea0u: goto label_4bfea0;
        case 0x4bfea4u: goto label_4bfea4;
        case 0x4bfea8u: goto label_4bfea8;
        case 0x4bfeacu: goto label_4bfeac;
        case 0x4bfeb0u: goto label_4bfeb0;
        case 0x4bfeb4u: goto label_4bfeb4;
        case 0x4bfeb8u: goto label_4bfeb8;
        case 0x4bfebcu: goto label_4bfebc;
        case 0x4bfec0u: goto label_4bfec0;
        case 0x4bfec4u: goto label_4bfec4;
        case 0x4bfec8u: goto label_4bfec8;
        case 0x4bfeccu: goto label_4bfecc;
        default: break;
    }

    ctx->pc = 0x4bfe40u;

label_4bfe40:
    // 0x4bfe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bfe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4bfe44:
    // 0x4bfe44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bfe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4bfe48:
    // 0x4bfe48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bfe48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bfe4c:
    // 0x4bfe4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bfe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4bfe50:
    // 0x4bfe50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bfe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bfe54:
    // 0x4bfe54: 0xc1232f2  jal         func_48CBC8
label_4bfe58:
    if (ctx->pc == 0x4BFE58u) {
        ctx->pc = 0x4BFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFE54u;
        // 0x4bfe58: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFE5Cu;
        goto label_4bfe5c;
    }
    ctx->pc = 0x4BFE54u;
    SET_GPR_U32(ctx, 31, 0x4BFE5Cu);
    ctx->pc = 0x4BFE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFE54u;
    // 0x4bfe58: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BFE54u, 0x4BFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFE5Cu;
label_4bfe5c:
    // 0x4bfe5c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bfe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4bfe60:
    // 0x4bfe60: 0xac620e94  sw          $v0, 0xE94($v1)
    ctx->pc = 0x4bfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3732), GPR_U32(ctx, 2));
label_4bfe64:
    // 0x4bfe64: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bfe64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bfe68:
    // 0x4bfe68: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
label_4bfe6c:
    if (ctx->pc == 0x4BFE6Cu) {
        ctx->pc = 0x4BFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFE68u;
        // 0x4bfe6c: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFE70u;
        goto label_4bfe70;
    }
    ctx->pc = 0x4BFE68u;
    {
        const bool branch_taken_0x4bfe68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bfe68) {
            ctx->pc = 0x4BFE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFE68u;
            // 0x4bfe6c: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFEACu;
            goto label_4bfeac;
        }
    }
    ctx->pc = 0x4BFE70u;
label_4bfe70:
    // 0x4bfe70: 0xc12b642  jal         func_4AD908
label_4bfe74:
    if (ctx->pc == 0x4BFE74u) {
        ctx->pc = 0x4BFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFE70u;
        // 0x4bfe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFE78u;
        goto label_4bfe78;
    }
    ctx->pc = 0x4BFE70u;
    SET_GPR_U32(ctx, 31, 0x4BFE78u);
    ctx->pc = 0x4BFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BFE70u;
    // 0x4bfe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BFE70u, 0x4BFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BFE78u;
label_4bfe78:
    // 0x4bfe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bfe7c:
    // 0x4bfe7c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4bfe80:
    // 0x4bfe80: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x4bfe80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
label_4bfe84:
    // 0x4bfe84: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4bfe84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
label_4bfe88:
    // 0x4bfe88: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4bfe88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4bfe8c:
    // 0x4bfe8c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4bfe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4bfe90:
    // 0x4bfe90: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4bfe90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4bfe94:
    // 0x4bfe94: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4bfe94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4bfe98:
    // 0x4bfe98: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4bfe98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4bfe9c:
    // 0x4bfe9c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bfe9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bfea0:
    // 0x4bfea0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bfea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4bfea4:
    // 0x4bfea4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bfea4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bfea8:
    // 0x4bfea8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4bfea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4bfeac:
    // 0x4bfeac: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x4bfeacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_4bfeb0:
    // 0x4bfeb0: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_4bfeb4:
    if (ctx->pc == 0x4BFEB4u) {
        ctx->pc = 0x4BFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFEB0u;
        // 0x4bfeb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFEB8u;
        goto label_4bfeb8;
    }
    ctx->pc = 0x4BFEB0u;
    {
        const bool branch_taken_0x4bfeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfeb0) {
            ctx->pc = 0x4BFEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFEB0u;
            // 0x4bfeb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFF64u;
            return;
        }
    }
    ctx->pc = 0x4BFEB8u;
label_4bfeb8:
    // 0x4bfeb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4bfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bfebc:
    // 0x4bfebc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4bfec0:
    // 0x4bfec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bfec4:
    // 0x4bfec4: 0x8c63b410  lw          $v1, -0x4BF0($v1)
    ctx->pc = 0x4bfec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947856)));
label_4bfec8:
    // 0x4bfec8: 0x600008  jr          $v1
label_4bfecc:
    if (ctx->pc == 0x4BFECCu) {
        ctx->pc = 0x4BFED0u;
        goto label_fallthrough_0x4bfec8;
    }
    ctx->pc = 0x4BFEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BFEC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4bfec8:
    ctx->pc = 0x4BFED0u;
}
