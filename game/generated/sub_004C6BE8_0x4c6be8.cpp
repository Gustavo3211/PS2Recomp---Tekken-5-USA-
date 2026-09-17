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

// Function: sub_004C6BE8
// Address: 0x4c6be8 - 0x4c7470
void sub_004C6BE8_0x4c6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6BE8_0x4c6be8");
#endif

    switch (ctx->pc) {
        case 0x4c6c08u: goto label_4c6c08;
        case 0x4c6c24u: goto label_4c6c24;
        case 0x4c6c40u: goto label_4c6c40;
        case 0x4c6d30u: goto label_4c6d30;
        case 0x4c6d50u: goto label_4c6d50;
        case 0x4c6f34u: goto label_4c6f34;
        case 0x4c6f74u: goto label_4c6f74;
        case 0x4c724cu: goto label_4c724c;
        case 0x4c7298u: goto label_4c7298;
        case 0x4c738cu: goto label_4c738c;
        case 0x4c7394u: goto label_4c7394;
        case 0x4c73acu: goto label_4c73ac;
        case 0x4c73b4u: goto label_4c73b4;
        case 0x4c73c8u: goto label_4c73c8;
        case 0x4c73f0u: goto label_4c73f0;
        case 0x4c73f8u: goto label_4c73f8;
        case 0x4c7400u: goto label_4c7400;
        case 0x4c7408u: goto label_4c7408;
        case 0x4c7418u: goto label_4c7418;
        case 0x4c7434u: goto label_4c7434;
        case 0x4c743cu: goto label_4c743c;
        default: break;
    }

    ctx->pc = 0x4c6be8u;

    // 0x4c6be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c6bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c6bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c6bf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c6bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6bfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4c6bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4c6c00: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C6C00u;
    SET_GPR_U32(ctx, 31, 0x4C6C08u);
    ctx->pc = 0x4C6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6C00u;
    // 0x4c6c04: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C6C00u, 0x4C6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6C08u;
label_4c6c08:
    // 0x4c6c08: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6c0c: 0xac620f1c  sw          $v0, 0xF1C($v1)
    ctx->pc = 0x4c6c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F1Cu, _value); } while (0);
    // 0x4c6c10: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c6c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c6c14: 0x442004f  bltzl       $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x4C6C14u;
    {
        const bool branch_taken_0x4c6c14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c6c14) {
            ctx->pc = 0x4C6C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6C14u;
            // 0x4c6c18: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6D54u;
            goto label_4c6d54;
        }
    }
    ctx->pc = 0x4C6C1Cu;
    // 0x4c6c1c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C6C1Cu;
    SET_GPR_U32(ctx, 31, 0x4C6C24u);
    ctx->pc = 0x4C6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6C1Cu;
    // 0x4c6c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C6C1Cu, 0x4C6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6C24u;
label_4c6c24:
    // 0x4c6c24: 0x24020492  addiu       $v0, $zero, 0x492
    ctx->pc = 0x4c6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1170));
    // 0x4c6c28: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4c6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c6c2c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6c30: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4c6c30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6c34: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4c6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6c38: 0xc129368  jal         func_4A4DA0
    ctx->pc = 0x4C6C38u;
    SET_GPR_U32(ctx, 31, 0x4C6C40u);
    ctx->pc = 0x4C6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6C38u;
    // 0x4c6c3c: 0xa6000168  sh          $zero, 0x168($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DA0u, 0x4C6C38u, 0x4C6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6C40u;
label_4c6c40:
    // 0x4c6c40: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c6c44: 0x2472d680  addiu       $s2, $v1, -0x2980
    ctx->pc = 0x4c6c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4c6c48: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4c6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c6c4c: 0x86430036  lh          $v1, 0x36($s2)
    ctx->pc = 0x4c6c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6B6u));
    // 0x4c6c50: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c6c54: 0x86440038  lh          $a0, 0x38($s2)
    ctx->pc = 0x4c6c54u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D6B8u));
    // 0x4c6c58: 0x24a80f08  addiu       $t0, $a1, 0xF08
    ctx->pc = 0x4c6c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 3848));
    // 0x4c6c5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c6c60: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x4c6c60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4c6c64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c6c68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4c6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4c6c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c6c70: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c6c70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6c74: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4c6c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4c6c78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c6c7c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4c6c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6c80: 0xa6060158  sh          $a2, 0x158($s0)
    ctx->pc = 0x4c6c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c6c84: 0xa603015c  sh          $v1, 0x15C($s0)
    ctx->pc = 0x4c6c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6c88: 0xa603015a  sh          $v1, 0x15A($s0)
    ctx->pc = 0x4c6c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6c8c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4c6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6c90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6c94: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x4c6c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4c6c98: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c6c9c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4c6c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6ca0: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4C6CA0u;
    {
        const bool branch_taken_0x4c6ca0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6CA0u;
        // 0x4c6ca4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6ca0) {
            ctx->pc = 0x4C6D10u;
            goto label_4c6d10;
        }
    }
    ctx->pc = 0x4C6CA8u;
    // 0x4c6ca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6cac: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6cb0: 0x2607011c  addiu       $a3, $s0, 0x11C
    ctx->pc = 0x4c6cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4c6cb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6cb8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c6cbc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c6cc0: 0x24840f20  addiu       $a0, $a0, 0xF20
    ctx->pc = 0x4c6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x4c6cc4: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4c6cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4c6cc8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c6cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6ccc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6cd0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c6cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c6cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c6cd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c6cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c6cdc: 0x24217170  addiu       $at, $at, 0x7170
    ctx->pc = 0x4c6cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29040));
    // 0x4c6ce0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c6ce4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4c6ce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6ce8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4c6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c6cec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c6cf0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4c6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c6cf4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4c6cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6cf8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4c6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4c6cfc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c6cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c6d00: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4c6d00u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6D04u;
    {
        const bool branch_taken_0x4c6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D04u;
        // 0x4c6d08: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d04) {
            ctx->pc = 0x4C6D18u;
            goto label_4c6d18;
        }
    }
    ctx->pc = 0x4C6D0Cu;
    // 0x4c6d0c: 0x0  nop
    ctx->pc = 0x4c6d0cu;
    // NOP
label_4c6d10:
    // 0x4c6d10: 0x26060118  addiu       $a2, $s0, 0x118
    ctx->pc = 0x4c6d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4c6d14: 0x2607011c  addiu       $a3, $s0, 0x11C
    ctx->pc = 0x4c6d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
label_4c6d18:
    // 0x4c6d18: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4c6d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6d20: 0xa64324a0  sh          $v1, 0x24A0($s2)
    ctx->pc = 0x4c6d20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6d24: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c6d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c6d28: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4C6D28u;
    SET_GPR_U32(ctx, 31, 0x4C6D30u);
    ctx->pc = 0x4C6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6D28u;
    // 0x4c6d2c: 0xa64224a2  sh          $v0, 0x24A2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4C6D28u, 0x4C6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6D30u;
label_4c6d30:
    // 0x4c6d30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c6d34: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4c6d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6d38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4c6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4c6d3c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c6d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c6d40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c6d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c6d44: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4c6d44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6d48: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C6D48u;
    SET_GPR_U32(ctx, 31, 0x4C6D50u);
    ctx->pc = 0x4C6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6D48u;
    // 0x4c6d4c: 0xa64423c4  sh          $a0, 0x23C4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9156), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C6D48u, 0x4C6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6D50u;
label_4c6d50:
    // 0x4c6d50: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4c6d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4c6d54:
    // 0x4c6d54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C6D54u;
    {
        const bool branch_taken_0x4c6d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D54u;
        // 0x4c6d58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d54) {
            ctx->pc = 0x4C6D78u;
            goto label_4c6d78;
        }
    }
    ctx->pc = 0x4C6D5Cu;
    // 0x4c6d5c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4C6D5Cu;
    {
        const bool branch_taken_0x4c6d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D5Cu;
        // 0x4c6d60: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6d5c) {
            ctx->pc = 0x4C6D98u;
            goto label_4c6d98;
        }
    }
    ctx->pc = 0x4C6D64u;
    // 0x4c6d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6d6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c6d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6d70: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6D70u;
        // 0x4c6d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6D78u;
label_4c6d78:
    // 0x4c6d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6d84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6d88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c6d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6d8c: 0x8131b6c  j           func_4C6DB0
    ctx->pc = 0x4C6D8Cu;
    ctx->pc = 0x4C6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6D8Cu;
    // 0x4c6d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6DB0u;
    goto label_4c6db0;
    ctx->pc = 0x4C6D94u;
    // 0x4c6d94: 0x0  nop
    ctx->pc = 0x4c6d94u;
    // NOP
label_4c6d98:
    // 0x4c6d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c6da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6da8: 0x8131be6  j           func_4C6F98
    ctx->pc = 0x4C6DA8u;
    ctx->pc = 0x4C6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6DA8u;
    // 0x4c6dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6F98u;
    goto label_4c6f98;
    ctx->pc = 0x4C6DB0u;
label_4c6db0:
    // 0x4c6db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c6db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c6db4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c6db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c6db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c6dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c6dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c6dc4: 0x24a50f08  addiu       $a1, $a1, 0xF08
    ctx->pc = 0x4c6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3848));
    // 0x4c6dc8: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x4c6dc8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6dcc: 0x860201b4  lh          $v0, 0x1B4($s0)
    ctx->pc = 0x4c6dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x4c6dd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F08u));
    // 0x4c6dd4: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c6dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c6dd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6ddc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6de0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c6de4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6de8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c6de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c6dec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4c6decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4c6df0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6df4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6df4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6df8: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c6df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c6dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6e00: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c6e04: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c6e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c6e08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6E08u;
    {
        const bool branch_taken_0x4c6e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c6e08) {
            ctx->pc = 0x4C6E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C6E08u;
            // 0x4c6e0c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C6E20u;
            goto label_4c6e20;
        }
    }
    ctx->pc = 0x4C6E10u;
    // 0x4c6e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6e14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c6e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6e18: 0x8131be6  j           func_4C6F98
    ctx->pc = 0x4C6E18u;
    ctx->pc = 0x4C6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6E18u;
    // 0x4c6e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6F98u;
    goto label_4c6f98;
    ctx->pc = 0x4C6E20u;
label_4c6e20:
    // 0x4c6e20: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c6e20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c6e24: 0x258c0f10  addiu       $t4, $t4, 0xF10
    ctx->pc = 0x4c6e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3856));
    // 0x4c6e28: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c6e28u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c6e2c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c6e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F10u));
    // 0x4c6e30: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6e34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6e38: 0x25ad0f14  addiu       $t5, $t5, 0xF14
    ctx->pc = 0x4c6e38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3860));
    // 0x4c6e3c: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c6e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c6e40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c6e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c6e44: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c6e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c6e48: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4c6e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c6e4c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c6e50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c6e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c6e54: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c6e54u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c6e58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c6e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c6e5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4c6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4c6e60: 0x25ce0f18  addiu       $t6, $t6, 0xF18
    ctx->pc = 0x4c6e60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3864));
    // 0x4c6e64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6e68: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4c6e68u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0F18u));
    // 0x4c6e6c: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6e70: 0x8c6f0f1c  lw          $t7, 0xF1C($v1)
    ctx->pc = 0x4c6e70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3868)));
    // 0x4c6e74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6e78: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4c6e78u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c6e7c: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c6e80: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c6e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c6e84: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c6e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c6e88: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c6e88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c6e8c: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c6e90: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c6e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c6e94: 0x256b0f0c  addiu       $t3, $t3, 0xF0C
    ctx->pc = 0x4c6e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3852));
    // 0x4c6e98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6e9c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4c6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4c6ea0: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x4c6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x4c6ea4: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4c6ea4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c6ea8: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6eac: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4c6eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6eb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6eb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6eb4: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4c6eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4c6eb8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c6eb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c6ebc: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4c6ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c6ec0: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4c6ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4c6ec4: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4c6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4c6ec8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c6ec8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c6ecc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4c6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6ed0: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4c6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c6ed4: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4c6ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c6ed8: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6edc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6edcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6ee0: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c6ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c6ee4: 0x1585025  or          $t2, $t2, $t8
    ctx->pc = 0x4c6ee4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 24));
    // 0x4c6ee8: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4c6ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4c6eec: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c6eecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c6ef0: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4c6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x4c6ef4: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6ef8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6efc: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c6efcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c6f00: 0x1384825  or          $t1, $t1, $t8
    ctx->pc = 0x4c6f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
    // 0x4c6f04: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4c6f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4c6f08: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c6f0c: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4c6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4c6f10: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4c6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4c6f14: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4c6f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4c6f18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6f1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c6f20: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x4c6f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x4c6f24: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c6f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4c6f28: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4c6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4c6f2c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C6F2Cu;
    SET_GPR_U32(ctx, 31, 0x4C6F34u);
    ctx->pc = 0x4C6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6F2Cu;
    // 0x4c6f30: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C6F2Cu, 0x4C6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6F34u;
label_4c6f34:
    // 0x4c6f34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6F34u;
    {
        const bool branch_taken_0x4c6f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6F34u;
        // 0x4c6f38: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f34) {
            ctx->pc = 0x4C6F50u;
            goto label_4c6f50;
        }
    }
    ctx->pc = 0x4C6F3Cu;
    // 0x4c6f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6f44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c6f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6f48: 0x8131be6  j           func_4C6F98
    ctx->pc = 0x4C6F48u;
    ctx->pc = 0x4C6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6F48u;
    // 0x4c6f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6F98u;
    goto label_4c6f98;
    ctx->pc = 0x4C6F50u;
label_4c6f50:
    // 0x4c6f50: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x4c6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4c6f54: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4c6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4c6f58: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4c6f58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6f5c: 0xa602015c  sh          $v0, 0x15C($s0)
    ctx->pc = 0x4c6f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6f60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4c6f64: 0xa6050162  sh          $a1, 0x162($s0)
    ctx->pc = 0x4c6f64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c6f68: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4c6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4c6f6c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C6F6Cu;
    SET_GPR_U32(ctx, 31, 0x4C6F74u);
    ctx->pc = 0x4C6F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6F6Cu;
    // 0x4c6f70: 0xa482fa44  sh          $v0, -0x5BC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C6F6Cu, 0x4C6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6F74u;
label_4c6f74:
    // 0x4c6f74: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4c6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4c6f78: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c6f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c6f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c6f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6f88: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c6f8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c6f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6f90: 0x8131be6  j           func_4C6F98
    ctx->pc = 0x4C6F90u;
    ctx->pc = 0x4C6F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6F90u;
    // 0x4c6f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6F98u;
    goto label_4c6f98;
    ctx->pc = 0x4C6F98u;
label_4c6f98:
    // 0x4c6f98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c6f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c6f9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6fa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c6fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6fac: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4c6facu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6fb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c6fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c6fb4: 0x264a0010  addiu       $t2, $s2, 0x10
    ctx->pc = 0x4c6fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4c6fb8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c6fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c6fbc: 0x24750f10  addiu       $s5, $v1, 0xF10
    ctx->pc = 0x4c6fbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3856));
    // 0x4c6fc0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c6fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c6fc4: 0x26570166  addiu       $s7, $s2, 0x166
    ctx->pc = 0x4c6fc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
    // 0x4c6fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6fcc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c6fd4: 0x24740f14  addiu       $s4, $v1, 0xF14
    ctx->pc = 0x4c6fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3860));
    // 0x4c6fd8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c6fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c6fdc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6fe0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c6fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c6fe4: 0x246f0f18  addiu       $t7, $v1, 0xF18
    ctx->pc = 0x4c6fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 3864));
    // 0x4c6fe8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c6fec: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6ff0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4c6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F10u));
    // 0x4c6ff4: 0x246d0f1c  addiu       $t5, $v1, 0xF1C
    ctx->pc = 0x4c6ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3868));
    // 0x4c6ff8: 0x86420130  lh          $v0, 0x130($s2)
    ctx->pc = 0x4c6ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4c6ffc: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x4c6ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4c7000: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7004: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c7004u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F14u));
    // 0x4c7008: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c700c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4c700cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F18u));
    // 0x4c7010: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c7010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c7014: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7018: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c7018u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c701c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c701cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7020: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c7024: 0x264c0018  addiu       $t4, $s2, 0x18
    ctx->pc = 0x4c7024u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4c7028: 0x86420132  lh          $v0, 0x132($s2)
    ctx->pc = 0x4c7028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x4c702c: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4c702cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c7030: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7034: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4c7034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7038: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c7038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c703c: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c703cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c7040: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c7044: 0x86420134  lh          $v0, 0x134($s2)
    ctx->pc = 0x4c7044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x4c7048: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x4c7048u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c704c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7050: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c7050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c7054: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4c7054u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4c7058: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c705c: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4c7060: 0x85e70000  lh          $a3, 0x0($t7)
    ctx->pc = 0x4c7060u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c7064: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7068: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c706c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c7070: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4c7070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4c7074: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c7074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c7078: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c7078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c707c: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x4c707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x4c7080: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4c7080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7084: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7088: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c708c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c708cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7090: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4c7090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c7094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c7098: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4c7098u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4c709c: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4c709cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4c70a0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c70a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c70a4: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4c70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4c70a8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c70ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c70acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c70b0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4c70b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c70b4: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4c70b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4c70b8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4c70b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4c70bc: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4c70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4c70c0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c70c4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c70c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c70cc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c70d0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c70d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c70d4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c70d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c70dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c70dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c70e0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c70e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c70e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c70e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c70e8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4c70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4c70ec: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x4c70ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c70f0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4c70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c70f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c70f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c70f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c70fc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c70fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c7100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c7100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c7104: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4c7104u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4c7108: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x4c7108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c710c: 0x54600098  bnel        $v1, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x4C710Cu;
    {
        const bool branch_taken_0x4c710c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c710c) {
            ctx->pc = 0x4C7110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C710Cu;
            // 0x4c7110: 0x96440118  lhu         $a0, 0x118($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7370u;
            goto label_4c7370;
        }
    }
    ctx->pc = 0x4C7114u;
    // 0x4c7114: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x4c7114u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c7118: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x4c7118u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    // 0x4c711c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4c711cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7120: 0x27d1d680  addiu       $s1, $fp, -0x2980
    ctx->pc = 0x4c7120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x4c7124: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4c7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c7128: 0x262d2494  addiu       $t5, $s1, 0x2494
    ctx->pc = 0x4c7128u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4c712c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4c712cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7130: 0x262c249c  addiu       $t4, $s1, 0x249C
    ctx->pc = 0x4c7130u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4c7134: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7138: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4c7138u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c713c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c713cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7140: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7144: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c7144u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c7148: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4c7148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c714c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4c714cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4c7150: 0x85e80000  lh          $t0, 0x0($t7)
    ctx->pc = 0x4c7150u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c7154: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c7154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c7158: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c7158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c715c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c715cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c7160: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7164: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4c7164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c7168: 0x262e2498  addiu       $t6, $s1, 0x2498
    ctx->pc = 0x4c7168u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4c716c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4c716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4c7170: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4c7170u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c7174: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c7174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c7178: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c717c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4c717cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c7180: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c7180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7184: 0x1535025  or          $t2, $t2, $s3
    ctx->pc = 0x4c7184u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x4c7188: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4c7188u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c718c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4c718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4c7190: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4c7190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4c7194: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4c7194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4c7198: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4c7198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4c719c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4c719cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4c71a0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c71a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c71a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c71a8: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4c71a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c71ac: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4c71acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4c71b0: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4c71b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c71b4: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4c71b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4c71b8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c71bc: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4c71bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c71c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c71c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c71c4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4c71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4c71c8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c71c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c71cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c71d0: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4c71d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4c71d4: 0x24500f08  addiu       $s0, $v0, 0xF08
    ctx->pc = 0x4c71d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3848));
    // 0x4c71d8: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4c71d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4c71dc: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4c71dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c71e0: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4c71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4c71e4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c71e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c71e8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4c71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4c71ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4c71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4c71f0: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4c71f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c71f4: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4c71f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4c71f8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c71f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c71fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c71fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7200: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4c7200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4c7204: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4c7204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4c7208: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4c7208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4c720c: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4c720cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4c7210: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c7210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c7214: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4c7214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c7218: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4c7218u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4c721c: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4c721cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4c7220: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4c7220u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4c7224: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c7224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c7228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c722c: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4c722cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c7230: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4c7230u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4c7234: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4c7234u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4c7238: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c7238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c723c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c7240: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c7240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c7244: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4C7244u;
    SET_GPR_U32(ctx, 31, 0x4C724Cu);
    ctx->pc = 0x4C7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7244u;
    // 0x4c7248: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4C7244u, 0x4C724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C724Cu;
label_4c724c:
    // 0x4c724c: 0x86440162  lh          $a0, 0x162($s2)
    ctx->pc = 0x4c724cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4c7250: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4c7250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c7254: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c7254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7258: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4c7258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c725c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4c725cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4c7260: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4c7260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c7264: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c7264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c7268: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c7268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4c726c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4c726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4c7270: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x4c7270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4c7274: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c7274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4c7278: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4c7278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4c727c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c7280: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4c7280u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4c7284: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4c7284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7288: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c7288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4c728c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7290: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4C7290u;
    SET_GPR_U32(ctx, 31, 0x4C7298u);
    ctx->pc = 0x4C7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7290u;
    // 0x4c7294: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4C7290u, 0x4C7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7298u;
label_4c7298:
    // 0x4c7298: 0x962324a2  lhu         $v1, 0x24A2($s1)
    ctx->pc = 0x4c7298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9378)));
    // 0x4c729c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c729cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c72a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c72a4: 0x8643011c  lh          $v1, 0x11C($s2)
    ctx->pc = 0x4c72a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4c72a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c72a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c72ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c72acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c72b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4c72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c72b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c72b8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4c72b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c72bc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C72BCu;
    {
        const bool branch_taken_0x4c72bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4C72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C72BCu;
        // 0x4c72c0: 0x24e40f0c  addiu       $a0, $a3, 0xF0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c72bc) {
            ctx->pc = 0x4C72D0u;
            goto label_4c72d0;
        }
    }
    ctx->pc = 0x4C72C4u;
    // 0x4c72c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c72c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C72C8u;
    {
        const bool branch_taken_0x4c72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C72C8u;
        // 0x4c72cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c72c8) {
            ctx->pc = 0x4C72D8u;
            goto label_4c72d8;
        }
    }
    ctx->pc = 0x4C72D0u;
label_4c72d0:
    // 0x4c72d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c72d4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4c72d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_4c72d8:
    // 0x4c72d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c72dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c72e0: 0x24450f08  addiu       $a1, $v0, 0xF08
    ctx->pc = 0x4c72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3848));
    // 0x4c72e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c72e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c72e8: 0x94e30f0c  lhu         $v1, 0xF0C($a3)
    ctx->pc = 0x4c72e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 3852)));
    // 0x4c72ec: 0x26470168  addiu       $a3, $s2, 0x168
    ctx->pc = 0x4c72ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
    // 0x4c72f0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c72f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0F08u));
    // 0x4c72f4: 0x2c64025  or          $t0, $s6, $a2
    ctx->pc = 0x4c72f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) | GPR_U64(ctx, 6));
    // 0x4c72f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c72f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F08u));
    // 0x4c72fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4c72fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x4c7300: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c7300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c7304: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c7304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c7308: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c730c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c730cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c7310: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4c7310u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4c7314: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c7314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c7318: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c7318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c731c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c731cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c7320: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c7320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c7324: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c7324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c7328: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c732c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c7330: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c7330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c7334: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c7334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c7338: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4c7338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c733c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4c733cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c7340: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c7340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c7344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c7344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c7348: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4c7348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4c734c: 0x102b024  and         $s6, $t0, $v0
    ctx->pc = 0x4c734cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c7350: 0x36c3ffff  ori         $v1, $s6, 0xFFFF
    ctx->pc = 0x4c7350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4c7354: 0x65b024  and         $s6, $v1, $a1
    ctx->pc = 0x4c7354u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c7358: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x4c7358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4c735c: 0x2c63024  and         $a2, $s6, $a2
    ctx->pc = 0x4c735cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & GPR_U64(ctx, 6));
    // 0x4c7360: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x4c7360u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x4c7364: 0xa6e60000  sh          $a2, 0x0($s7)
    ctx->pc = 0x4c7364u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4c7368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C7368u;
    {
        const bool branch_taken_0x4c7368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7368u;
        // 0x4c736c: 0xa4f60000  sh          $s6, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7368) {
            ctx->pc = 0x4C7384u;
            goto label_4c7384;
        }
    }
    ctx->pc = 0x4C7370u;
label_4c7370:
    // 0x4c7370: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x4c7370u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    // 0x4c7374: 0x27c3d680  addiu       $v1, $fp, -0x2980
    ctx->pc = 0x4c7374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x4c7378: 0xa46424a0  sh          $a0, 0x24A0($v1)
    ctx->pc = 0x4c7378u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4c737c: 0x9642011c  lhu         $v0, 0x11C($s2)
    ctx->pc = 0x4c737cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4c7380: 0xa46224a2  sh          $v0, 0x24A2($v1)
    ctx->pc = 0x4c7380u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FB22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB22u, _value); } while (0);
label_4c7384:
    // 0x4c7384: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4C7384u;
    SET_GPR_U32(ctx, 31, 0x4C738Cu);
    ctx->pc = 0x4C7388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7384u;
    // 0x4c7388: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4C7384u, 0x4C738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C738Cu;
label_4c738c:
    // 0x4c738c: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C738Cu;
    SET_GPR_U32(ctx, 31, 0x4C7394u);
    ctx->pc = 0x4C7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C738Cu;
    // 0x4c7390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C738Cu, 0x4C7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7394u;
label_4c7394:
    // 0x4c7394: 0x26430120  addiu       $v1, $s2, 0x120
    ctx->pc = 0x4c7394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x4c7398: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c7398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c739c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c73a0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4c73a4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4C73A4u;
    SET_GPR_U32(ctx, 31, 0x4C73ACu);
    ctx->pc = 0x4C73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73A4u;
    // 0x4c73a8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4C73A4u, 0x4C73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73ACu;
label_4c73ac:
    // 0x4c73ac: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C73ACu;
    SET_GPR_U32(ctx, 31, 0x4C73B4u);
    ctx->pc = 0x4C73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73ACu;
    // 0x4c73b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C73ACu, 0x4C73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73B4u;
label_4c73b4:
    // 0x4c73b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4C73B4u;
    {
        const bool branch_taken_0x4c73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73B4u;
        // 0x4c73b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c73b4) {
            ctx->pc = 0x4C7440u;
            goto label_4c7440;
        }
    }
    ctx->pc = 0x4C73BCu;
    // 0x4c73bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c73bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c73c0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4C73C0u;
    SET_GPR_U32(ctx, 31, 0x4C73C8u);
    ctx->pc = 0x4C73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73C0u;
    // 0x4c73c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4C73C0u, 0x4C73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73C8u;
label_4c73c8:
    // 0x4c73c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4c73c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c73cc: 0x14500010  bne         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C73CCu;
    {
        const bool branch_taken_0x4c73cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4C73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C73CCu;
        // 0x4c73d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c73cc) {
            ctx->pc = 0x4C7410u;
            goto label_4c7410;
        }
    }
    ctx->pc = 0x4C73D4u;
    // 0x4c73d4: 0x27c2d680  addiu       $v0, $fp, -0x2980
    ctx->pc = 0x4c73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x4c73d8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4c73d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c73dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c73e0: 0xa445232e  sh          $a1, 0x232E($v0)
    ctx->pc = 0x4c73e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 5));
    // 0x4c73e4: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4c73e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c73e8: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4C73E8u;
    SET_GPR_U32(ctx, 31, 0x4C73F0u);
    ctx->pc = 0x4C73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73E8u;
    // 0x4c73ec: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4C73E8u, 0x4C73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73F0u;
label_4c73f0:
    // 0x4c73f0: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4C73F0u;
    SET_GPR_U32(ctx, 31, 0x4C73F8u);
    ctx->pc = 0x4C73F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C73F0u;
    // 0x4c73f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4C73F0u, 0x4C73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C73F8u;
label_4c73f8:
    // 0x4c73f8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4C73F8u;
    SET_GPR_U32(ctx, 31, 0x4C7400u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4C73F8u, 0x4C7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7400u;
label_4c7400:
    // 0x4c7400: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C7400u;
    SET_GPR_U32(ctx, 31, 0x4C7408u);
    ctx->pc = 0x4C7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7400u;
    // 0x4c7404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C7400u, 0x4C7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7408u;
label_4c7408:
    // 0x4c7408: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C7408u;
    {
        const bool branch_taken_0x4c7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7408u;
        // 0x4c740c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7408) {
            ctx->pc = 0x4C7440u;
            goto label_4c7440;
        }
    }
    ctx->pc = 0x4C7410u;
label_4c7410:
    // 0x4c7410: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4C7410u;
    SET_GPR_U32(ctx, 31, 0x4C7418u);
    ctx->pc = 0x4C7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7410u;
    // 0x4c7414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4C7410u, 0x4C7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7418u;
label_4c7418:
    // 0x4c7418: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C7418u;
    {
        const bool branch_taken_0x4c7418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4c7418) {
            ctx->pc = 0x4C741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C7418u;
            // 0x4c741c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C7440u;
            goto label_4c7440;
        }
    }
    ctx->pc = 0x4C7420u;
    // 0x4c7420: 0x27c3d680  addiu       $v1, $fp, -0x2980
    ctx->pc = 0x4c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x4c7424: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4c7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c7428: 0xa462232e  sh          $v0, 0x232E($v1)
    ctx->pc = 0x4c7428u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c742c: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4C742Cu;
    SET_GPR_U32(ctx, 31, 0x4C7434u);
    ctx->pc = 0x4C7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C742Cu;
    // 0x4c7430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4C742Cu, 0x4C7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C7434u;
label_4c7434:
    // 0x4c7434: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4C7434u;
    SET_GPR_U32(ctx, 31, 0x4C743Cu);
    ctx->pc = 0x4C7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C7434u;
    // 0x4c7438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4C7434u, 0x4C743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C743Cu;
label_4c743c:
    // 0x4c743c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c743cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7440:
    // 0x4c7440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c7440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c7444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c7444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7448: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c7448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c744c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c744cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c7450: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c7450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c7454: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c7454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c7458: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c7458u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c745c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c745cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c7460: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c7460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c7464: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7464u;
        // 0x4c7468: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C7464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C746Cu;
    // 0x4c746c: 0x0  nop
    ctx->pc = 0x4c746cu;
    // NOP
    ctx->pc = 0x4c7470u;
}
