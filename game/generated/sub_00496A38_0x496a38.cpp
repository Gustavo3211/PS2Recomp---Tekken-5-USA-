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

// Function: sub_00496A38
// Address: 0x496a38 - 0x496f10
void sub_00496A38_0x496a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496A38_0x496a38");
#endif

    switch (ctx->pc) {
        case 0x496a80u: goto label_496a80;
        case 0x496b3cu: goto label_496b3c;
        case 0x496b78u: goto label_496b78;
        case 0x496cf0u: goto label_496cf0;
        case 0x496e78u: goto label_496e78;
        case 0x496ea0u: goto label_496ea0;
        default: break;
    }

    ctx->pc = 0x496a38u;

    // 0x496a38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x496a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x496a3c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x496a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x496a40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x496a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496a44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x496a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496a48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x496a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x496a4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x496a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x496a50: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x496a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496a54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x496a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x496a58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x496a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496a5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x496a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x496a60: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x496a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x496a64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x496a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x496a68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x496a68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496a6c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x496a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x496a70: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x496a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x496a74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x496a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x496a78: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x496A78u;
    SET_GPR_U32(ctx, 31, 0x496A80u);
    ctx->pc = 0x496A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496A78u;
    // 0x496a7c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x496A78u, 0x496A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A80u;
label_496a80:
    // 0x496a80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x496a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496a84: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x496a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x496a88: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x496a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x496a8c: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x496a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x496a90: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x496a90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x496a94: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x496a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x496a98: 0x24730acc  addiu       $s3, $v1, 0xACC
    ctx->pc = 0x496a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2764));
    // 0x496a9c: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x496a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x496aa0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x496aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496aa4: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x496aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x496aa8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x496aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x496aac: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x496aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496ab0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x496ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x496ab4: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x496ab4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x496ab8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x496ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x496abc: 0x122c00  sll         $a1, $s2, 16
    ctx->pc = 0x496abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x496ac0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x496ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x496ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496ac8: 0x25080128  addiu       $t0, $t0, 0x128
    ctx->pc = 0x496ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 296));
    // 0x496acc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x496accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x496ad0: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x496ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496ad4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x496ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x496ad8: 0x24e77cc0  addiu       $a3, $a3, 0x7CC0
    ctx->pc = 0x496ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31936));
    // 0x496adc: 0x24970af0  addiu       $s7, $a0, 0xAF0
    ctx->pc = 0x496adcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 2800));
    // 0x496ae0: 0x24630b44  addiu       $v1, $v1, 0xB44
    ctx->pc = 0x496ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2884));
    // 0x496ae4: 0x53443  sra         $a2, $a1, 17
    ctx->pc = 0x496ae4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 17));
    // 0x496ae8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x496ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x496aec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x496aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x496af0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x496af4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x496af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x496af8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x496af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x496afc: 0x52bc3  sra         $a1, $a1, 15
    ctx->pc = 0x496afcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 15));
    // 0x496b00: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x496b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x496b04: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x496b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x496b08: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x496b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496b0c: 0x859024  and         $s2, $a0, $a1
    ctx->pc = 0x496b0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x496b10: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x496b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x496b14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x496b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x496b18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496b1c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x496b24: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x496b24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x496b28: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x496b28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x496b2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x496b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496b30: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x496b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x496b34: 0xc12a64c  jal         func_4A9930
    ctx->pc = 0x496B34u;
    SET_GPR_U32(ctx, 31, 0x496B3Cu);
    ctx->pc = 0x496B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496B34u;
    // 0x496b38: 0xa443011c  sh          $v1, 0x11C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9930u, 0x496B34u, 0x496B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B3Cu;
label_496b3c:
    // 0x496b3c: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x496b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x496b40: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x496b40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
    // 0x496b44: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x496b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x496b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x496b4c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x496b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x496b50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x496b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x496b54: 0x24b20ae8  addiu       $s2, $a1, 0xAE8
    ctx->pc = 0x496b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x496b58: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x496b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x496b5c: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x496b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x496b60: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x496b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x496b64: 0xa4c20118  sh          $v0, 0x118($a2)
    ctx->pc = 0x496b64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x496b68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x496b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496b6c: 0xa464011a  sh          $a0, 0x11A($v1)
    ctx->pc = 0x496b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 282), (uint16_t)GPR_U32(ctx, 4));
    // 0x496b70: 0xc1258be  jal         func_4962F8
    ctx->pc = 0x496B70u;
    SET_GPR_U32(ctx, 31, 0x496B78u);
    ctx->pc = 0x496B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496B70u;
    // 0x496b74: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4962F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4962F8u, 0x496B70u, 0x496B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B78u;
label_496b78:
    // 0x496b78: 0x240cb400  addiu       $t4, $zero, -0x4C00
    ctx->pc = 0x496b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947840));
    // 0x496b7c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x496b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496b80: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x496b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x496b84: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x496b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x496b88: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x496b88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x496b8c: 0xa4a3011e  sh          $v1, 0x11E($a1)
    ctx->pc = 0x496b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x496b90: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x496b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x496b94: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x496b94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x496b98: 0x36c7ffff  ori         $a3, $s6, 0xFFFF
    ctx->pc = 0x496b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x496b9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x496b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496ba0: 0x707025  or          $t6, $v1, $s0
    ctx->pc = 0x496ba0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x496ba4: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x496ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x496ba8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x496ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x496bac: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x496bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x496bb0: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x496bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x496bb4: 0xa4a20120  sh          $v0, 0x120($a1)
    ctx->pc = 0x496bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x496bb8: 0xe3b024  and         $s6, $a3, $v1
    ctx->pc = 0x496bb8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x496bbc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x496bbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x496bc0: 0x36a8ffff  ori         $t0, $s5, 0xFFFF
    ctx->pc = 0x496bc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x496bc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x496bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496bc8: 0x905825  or          $t3, $a0, $s0
    ctx->pc = 0x496bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x496bcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x496bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x496bd0: 0x143400  sll         $a2, $s4, 16
    ctx->pc = 0x496bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x496bd4: 0xa4510122  sh          $s1, 0x122($v0)
    ctx->pc = 0x496bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 290), (uint16_t)GPR_U32(ctx, 17));
    // 0x496bd8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x496bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x496bdc: 0x104a824  and         $s5, $t0, $a0
    ctx->pc = 0x496bdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x496be0: 0x34cdffff  ori         $t5, $a2, 0xFFFF
    ctx->pc = 0x496be0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x496be4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x496be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496be8: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x496be8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x496bec: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x496becu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x496bf0: 0x63383  sra         $a2, $a2, 14
    ctx->pc = 0x496bf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 14));
    // 0x496bf4: 0x24a50124  addiu       $a1, $a1, 0x124
    ctx->pc = 0x496bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
    // 0x496bf8: 0x3689ffff  ori         $t1, $s4, 0xFFFF
    ctx->pc = 0x496bf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x496bfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x496bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496c00: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x496c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x496c04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496c08: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x496c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x496c0c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x496c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x496c10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x496c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496c14: 0x24630128  addiu       $v1, $v1, 0x128
    ctx->pc = 0x496c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 296));
    // 0x496c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x496c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496c1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496c20: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x496c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x496c24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x496c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x496c28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x496c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496c2c: 0x2484012c  addiu       $a0, $a0, 0x12C
    ctx->pc = 0x496c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x496c30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x496c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x496c34: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496c38: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x496c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x496c3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x496c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x496c40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x496c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496c44: 0x2463012c  addiu       $v1, $v1, 0x12C
    ctx->pc = 0x496c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x496c48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x496c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496c4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496c50: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x496c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x496c54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x496c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x496c58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x496c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496c5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x496c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496c60: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x496c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x496c64: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x496c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x496c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496c6c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x496c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496c70: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496c74: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x496c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x496c78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496c7c: 0x24a50124  addiu       $a1, $a1, 0x124
    ctx->pc = 0x496c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
    // 0x496c80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x496c80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x496c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496c88: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x496c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x496c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x496c90: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496c94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496c98: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x496c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x496c9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x496c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496ca0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x496ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x496ca4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x496ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x496ca8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x496ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x496cac: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x496cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496cb0: 0x4600064  bltz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x496CB0u;
    {
        const bool branch_taken_0x496cb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x496CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496CB0u;
        // 0x496cb4: 0x126a024  and         $s4, $t1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496cb0) {
            ctx->pc = 0x496E44u;
            goto label_496e44;
        }
    }
    ctx->pc = 0x496CB8u;
    // 0x496cb8: 0x151c00  sll         $v1, $s5, 16
    ctx->pc = 0x496cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x496cbc: 0x142400  sll         $a0, $s4, 16
    ctx->pc = 0x496cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x496cc0: 0x162c00  sll         $a1, $s6, 16
    ctx->pc = 0x496cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x496cc4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496cc8: 0x244a0ac8  addiu       $t2, $v0, 0xAC8
    ctx->pc = 0x496cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2760));
    // 0x496ccc: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x496cccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496cd0: 0x34403  sra         $t0, $v1, 16
    ctx->pc = 0x496cd0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
    // 0x496cd4: 0x2e0702d  daddu       $t6, $s7, $zero
    ctx->pc = 0x496cd4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496cd8: 0x44c03  sra         $t1, $a0, 16
    ctx->pc = 0x496cd8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
    // 0x496cdc: 0x57c03  sra         $t7, $a1, 16
    ctx->pc = 0x496cdcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 5), 16));
    // 0x496ce0: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x496ce0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496ce4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x496ce4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x496ce8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x496ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x496cec: 0x0  nop
    ctx->pc = 0x496cecu;
    // NOP
label_496cf0:
    // 0x496cf0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x496cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496cf4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x496cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x496cf8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x496cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x496cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d00: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x496d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x496d04: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x496d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x496d08: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x496d08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x496d0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496d10: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496d10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496d14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d18: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496d1c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x496d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x496d20: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496d24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496d28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496d28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496d2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d30: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496d34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x496d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x496d38: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496d3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496d40: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496d40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496d44: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x496d44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496d48: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x496d48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496d4c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x496d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x496d50: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x496d50u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x496d54: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x496d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x496d58: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x496d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x496d5c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x496d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x496d60: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x496d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496d64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x496d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x496d68: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x496d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x496d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d70: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x496d70u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x496d74: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x496d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x496d78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496d7c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496d80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d84: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496d88: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x496d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x496d8c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496d94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496d94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496d9c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496da0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x496da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x496da4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496dac: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496dacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496db0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x496db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496db4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x496db4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496db8: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x496db8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x496dbc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x496dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x496dc0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x496dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496dc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x496dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x496dc8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x496dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x496dcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496dd0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x496dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x496dd4: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x496dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x496dd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x496dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496ddc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496de0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496de4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496de8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x496de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x496dec: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496df0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496df4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496df4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496df8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496dfc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x496dfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496e00: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x496e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x496e04: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496e08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496e0c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x496e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x496e10: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x496e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x496e14: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x496e14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496e18: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x496e18u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x496e1c: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x496e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x496e20: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x496e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x496e24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x496e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x496e28: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496e2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496e30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496e34: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x496e34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x496e38: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x496e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x496e3c: 0x443ffac  bgezl       $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x496E3Cu;
    {
        const bool branch_taken_0x496e3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x496e3c) {
            ctx->pc = 0x496E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496E3Cu;
            // 0x496e40: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496cf0;
        }
    }
    ctx->pc = 0x496E44u;
label_496e44:
    // 0x496e44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x496e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496e48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x496e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x496e4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x496e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x496e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x496e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x496e54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x496e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x496e58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x496e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x496e5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x496e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x496e60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x496e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x496e64: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x496e64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x496e68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x496e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x496e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x496E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496E6Cu;
        // 0x496e70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496E74u;
    // 0x496e74: 0x0  nop
    ctx->pc = 0x496e74u;
    // NOP
label_496e78:
    // 0x496e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x496e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x496e7c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x496e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x496e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x496e84: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x496e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x496e88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x496e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x496e8c: 0x26100af4  addiu       $s0, $s0, 0xAF4
    ctx->pc = 0x496e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2804));
    // 0x496e90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x496e90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0AF4u));
    // 0x496e94: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x496e94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x496e98: 0xc12a31c  jal         func_4A8C70
    ctx->pc = 0x496E98u;
    SET_GPR_U32(ctx, 31, 0x496EA0u);
    ctx->pc = 0x496E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496E98u;
    // 0x496e9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8C70u, 0x496E98u, 0x496EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496EA0u;
label_496ea0:
    // 0x496ea0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x496ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x496ea4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x496ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x496ea8: 0x24460b04  addiu       $a2, $v0, 0xB04
    ctx->pc = 0x496ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2820));
    // 0x496eac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x496eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B04u));
    // 0x496eb0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x496eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x496eb4: 0x94a2002c  lhu         $v0, 0x2C($a1)
    ctx->pc = 0x496eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x496eb8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x496eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x496ebc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x496ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x496ec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x496ec4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496ec8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x496ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x496ecc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496ed0: 0x84a2002e  lh          $v0, 0x2E($a1)
    ctx->pc = 0x496ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x496ed4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x496ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x496ed8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x496edc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x496edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x496ee0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x496ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x496ee4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x496EE4u;
    {
        const bool branch_taken_0x496ee4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x496EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496EE4u;
        // 0x496ee8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496ee4) {
            ctx->pc = 0x496F00u;
            goto label_496f00;
        }
    }
    ctx->pc = 0x496EECu;
    // 0x496eec: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x496eecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x496ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x496ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496ef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x496ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x496ef8: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x496EF8u;
    ctx->pc = 0x496EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x496EF8u;
    // 0x496efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x496F00u;
label_496f00:
    // 0x496f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x496f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496f04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x496f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x496f08: 0x3e00008  jr          $ra
    ctx->pc = 0x496F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496F08u;
        // 0x496f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496F10u;
}
