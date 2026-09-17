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

// Function: sub_00507BC0
// Address: 0x507bc0 - 0x507d48
void sub_00507BC0_0x507bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507BC0_0x507bc0");
#endif

    switch (ctx->pc) {
        case 0x507c14u: goto label_507c14;
        case 0x507cccu: goto label_507ccc;
        case 0x507cdcu: goto label_507cdc;
        case 0x507d00u: goto label_507d00;
        default: break;
    }

    ctx->pc = 0x507bc0u;

    // 0x507bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x507bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x507bc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x507bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x507bc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x507bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x507bcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x507bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x507bd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x507bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507bd4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x507bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x507bd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x507bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507bdc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x507bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x507be0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x507be0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507be4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x507be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x507be8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x507be8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507bec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x507becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x507bf0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x507bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x507bf4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x507bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x507bf8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x507bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x507bfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x507bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x507c00: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x507c00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x507c04: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x507c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x507c08: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x507c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x507c0c: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x507C0Cu;
    SET_GPR_U32(ctx, 31, 0x507C14u);
    ctx->pc = 0x507C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507C0Cu;
    // 0x507c10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x507C0Cu, 0x507C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507C14u;
label_507c14:
    // 0x507c14: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x507c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507c18: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x507c18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x507c1c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x507c1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x507c20: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x507c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x507c24: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x507c24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x507c28: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x507c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507c2c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x507c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x507c30: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x507c30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507c34: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x507c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x507c38: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x507c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x507c3c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x507c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x507c40: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x507c40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x507c44: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x507c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x507c48: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x507c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x507c4c: 0x844a0010  lh          $t2, 0x10($v0)
    ctx->pc = 0x507c4cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x507c50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x507c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507c54: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x507c54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x507c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507c5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x507c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507c60: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x507c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x507c64: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x507c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x507c68: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x507c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x507c6c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x507c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x507c70: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x507c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x507c74: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x507c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x507c78: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x507c78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x507c7c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x507c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x507c80: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x507c80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x507c84: 0x84470014  lh          $a3, 0x14($v0)
    ctx->pc = 0x507c84u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x507c88: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x507c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x507c8c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x507c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x507c90: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x507c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x507c94: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x507c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x507c98: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x507c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x507c9c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x507c9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x507ca0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x507ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x507ca4: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x507ca4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x507ca8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x507ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x507cac: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x507cacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x507cb0: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x507cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x507cb4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x507cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507cb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x507cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x507cbc: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x507cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x507cc0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x507cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x507cc4: 0xc14123e  jal         func_5048F8
    ctx->pc = 0x507CC4u;
    SET_GPR_U32(ctx, 31, 0x507CCCu);
    ctx->pc = 0x507CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507CC4u;
    // 0x507cc8: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5048F8u, 0x507CC4u, 0x507CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507CCCu;
label_507ccc:
    // 0x507ccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x507cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507cd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x507cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507cd4: 0xc1413a2  jal         func_504E88
    ctx->pc = 0x507CD4u;
    SET_GPR_U32(ctx, 31, 0x507CDCu);
    ctx->pc = 0x507CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507CD4u;
    // 0x507cd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504E88u, 0x507CD4u, 0x507CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507CDCu;
label_507cdc:
    // 0x507cdc: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x507cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x507ce0: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x507ce0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x507ce4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x507ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507ce8: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x507ce8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507cec: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x507cecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507cf0: 0x8607000c  lh          $a3, 0xC($s0)
    ctx->pc = 0x507cf0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x507cf4: 0x2610000e  addiu       $s0, $s0, 0xE
    ctx->pc = 0x507cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x507cf8: 0xc142052  jal         func_508148
    ctx->pc = 0x507CF8u;
    SET_GPR_U32(ctx, 31, 0x507D00u);
    ctx->pc = 0x507CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507CF8u;
    // 0x507cfc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508148u, 0x507CF8u, 0x507D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507D00u;
label_507d00:
    // 0x507d00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x507d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507d04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x507d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x507d08: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x507d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507d0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x507d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x507d10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x507d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x507d14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x507d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x507d18: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x507d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x507d1c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x507d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x507d20: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x507d20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x507d24: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x507d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x507d28: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x507d28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x507d2c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x507d2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x507d30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x507d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507d34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x507d34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x507d38: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x507d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x507d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x507D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507D3Cu;
        // 0x507d40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507D44u;
    // 0x507d44: 0x0  nop
    ctx->pc = 0x507d44u;
    // NOP
    ctx->pc = 0x507d48u;
}
