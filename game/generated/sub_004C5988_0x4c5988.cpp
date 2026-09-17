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

// Function: sub_004C5988
// Address: 0x4c5988 - 0x4c6a20
void sub_004C5988_0x4c5988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5988_0x4c5988");
#endif

    switch (ctx->pc) {
        case 0x4c598cu: goto label_4c598c;
        case 0x4c5998u: goto label_4c5998;
        case 0x4c5ac4u: goto label_4c5ac4;
        case 0x4c5b00u: goto label_4c5b00;
        case 0x4c5b3cu: goto label_4c5b3c;
        case 0x4c5b78u: goto label_4c5b78;
        case 0x4c5c98u: goto label_4c5c98;
        case 0x4c5cdcu: goto label_4c5cdc;
        case 0x4c5db4u: goto label_4c5db4;
        case 0x4c5e7cu: goto label_4c5e7c;
        case 0x4c5fc8u: goto label_4c5fc8;
        case 0x4c61dcu: goto label_4c61dc;
        case 0x4c6210u: goto label_4c6210;
        case 0x4c6548u: goto label_4c6548;
        case 0x4c6578u: goto label_4c6578;
        case 0x4c6598u: goto label_4c6598;
        case 0x4c668cu: goto label_4c668c;
        case 0x4c66c8u: goto label_4c66c8;
        case 0x4c6758u: goto label_4c6758;
        case 0x4c67c8u: goto label_4c67c8;
        case 0x4c68b4u: goto label_4c68b4;
        case 0x4c69a8u: goto label_4c69a8;
        case 0x4c69e8u: goto label_4c69e8;
        default: break;
    }

    ctx->pc = 0x4c5988u;

    // 0x4c5988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c598c:
    // 0x4c598c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C598Cu;
        // 0x4c5990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C5994u;
    // 0x4c5994: 0x0  nop
    ctx->pc = 0x4c5994u;
    // NOP
label_4c5998:
    // 0x4c5998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c599c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4c599cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4c59a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c59a4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c59a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c59a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c59ac: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4c59acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4c59b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c59b4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c59b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c59b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c59b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c59bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c59bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c59c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c59c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c59c4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4c59c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4c59c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c59cc: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c59ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c59d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c59d4: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c59d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c59d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c59d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c59dc: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c59dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c59e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c59e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c59e4: 0x26310ee0  addiu       $s1, $s1, 0xEE0
    ctx->pc = 0x4c59e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3808));
    // 0x4c59e8: 0x26940eec  addiu       $s4, $s4, 0xEEC
    ctx->pc = 0x4c59e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3820));
    // 0x4c59ec: 0x26b50ef0  addiu       $s5, $s5, 0xEF0
    ctx->pc = 0x4c59ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3824));
    // 0x4c59f0: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4c59f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4c59f4: 0x26d60ef4  addiu       $s6, $s6, 0xEF4
    ctx->pc = 0x4c59f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3828));
    // 0x4c59f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4c59f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EE0u));
    // 0x4c59fc: 0x26f70efc  addiu       $s7, $s7, 0xEFC
    ctx->pc = 0x4c59fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3836));
    // 0x4c5a00: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5a04: 0x254a0f00  addiu       $t2, $t2, 0xF00
    ctx->pc = 0x4c5a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3840));
    // 0x4c5a08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5a0c: 0x26100ee4  addiu       $s0, $s0, 0xEE4
    ctx->pc = 0x4c5a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3812));
    // 0x4c5a10: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c5a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c5a14: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4c5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4c5a18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5a1c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c5a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c5a20: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4c5a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c5a24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4c5a28: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4c5a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c5a2c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5a30: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4c5a30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c5a34: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c5a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c5a38: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c5a38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c5a3c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4c5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4c5a40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5a44: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c5a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c5a48: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c5a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c5a4c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c5a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c5a50: 0x8eee0000  lw          $t6, 0x0($s7)
    ctx->pc = 0x4c5a50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c5a54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c5a58: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4c5a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4c5a5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c5a60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4c5a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4c5a64: 0x24217130  addiu       $at, $at, 0x7130
    ctx->pc = 0x4c5a64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28976));
    // 0x4c5a68: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4c5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4c5a6c: 0x244b0002  addiu       $t3, $v0, 0x2
    ctx->pc = 0x4c5a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c5a70: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4c5a70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c5a74: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4c5a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5a78: 0x244d0006  addiu       $t5, $v0, 0x6
    ctx->pc = 0x4c5a78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4c5a7c: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4c5a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5a80: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4c5a80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c5a84: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c5a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c5a88: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4c5a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4c5a8c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4c5a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4c5a90: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4c5a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4c5a94: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c5a94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c5a98: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4c5a98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4c5a9c: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4c5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4c5aa0: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4c5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4c5aa4: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4c5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4c5aa8: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x4c5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
    // 0x4c5aac: 0x85c20118  lh          $v0, 0x118($t6)
    ctx->pc = 0x4c5aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 280)));
    // 0x4c5ab0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5ab4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c5ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c5ab8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4c5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4c5abc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C5ABCu;
    SET_GPR_U32(ctx, 31, 0x4C5AC4u);
    ctx->pc = 0x4C5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5ABCu;
    // 0x4c5ac0: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C5ABCu, 0x4C5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5AC4u;
label_4c5ac4:
    // 0x4c5ac4: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4c5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5ac8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c5acc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c5accu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c5ad0: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4c5ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5ad4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c5ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5ad8: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4c5ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5adc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4c5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c5ae0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c5ae4: 0x8482011c  lh          $v0, 0x11C($a0)
    ctx->pc = 0x4c5ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x4c5ae8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5aec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5af0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5af4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c5af8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C5AF8u;
    SET_GPR_U32(ctx, 31, 0x4C5B00u);
    ctx->pc = 0x4C5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5AF8u;
    // 0x4c5afc: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C5AF8u, 0x4C5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5B00u;
label_4c5b00:
    // 0x4c5b00: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4c5b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5b04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c5b08: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c5b0c: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4c5b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5b10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c5b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5b14: 0xa6620028  sh          $v0, 0x28($s3)
    ctx->pc = 0x4c5b14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5b18: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4c5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c5b1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c5b20: 0x84820120  lh          $v0, 0x120($a0)
    ctx->pc = 0x4c5b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x4c5b24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5b28: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4c5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4c5b2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5b30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c5b34: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C5B34u;
    SET_GPR_U32(ctx, 31, 0x4C5B3Cu);
    ctx->pc = 0x4C5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5B34u;
    // 0x4c5b38: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C5B34u, 0x4C5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5B3Cu;
label_4c5b3c:
    // 0x4c5b3c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c5b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c5b40: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4c5b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5b44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c5b48: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c5b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c5b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b50: 0xa663002a  sh          $v1, 0x2A($s3)
    ctx->pc = 0x4c5b50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c5b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c5b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b5c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c5b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b60: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c5b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5b64: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x4c5b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b68: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x4c5b68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b6c: 0x24e70ee8  addiu       $a3, $a3, 0xEE8
    ctx->pc = 0x4c5b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3816));
    // 0x4c5b70: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4C5B70u;
    SET_GPR_U32(ctx, 31, 0x4C5B78u);
    ctx->pc = 0x4C5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5B70u;
    // 0x4c5b74: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4C5B70u, 0x4C5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5B78u;
label_4c5b78:
    // 0x4c5b78: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4c5b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c5b7c: 0x8eeb0000  lw          $t3, 0x0($s7)
    ctx->pc = 0x4c5b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4c5b80: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c5b80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c5b84: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4c5b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c5b88: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c5b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c5b8c: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x4c5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x4c5b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c5b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5b94: 0x8d2c0f04  lw          $t4, 0xF04($t1)
    ctx->pc = 0x4c5b94u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x7F0F04u));
    // 0x4c5b98: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5b9c: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4c5b9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c5ba0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5ba4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4c5ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c5ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c5bac: 0x86ca0000  lh          $t2, 0x0($s6)
    ctx->pc = 0x4c5bacu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c5bb0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c5bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c5bb4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4c5bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c5bb8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4c5bb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4c5bbc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c5bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c5bc0: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c5bc4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c5bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c5bc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5bd0: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x4c5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x4c5bd4: 0x86890000  lh          $t1, 0x0($s4)
    ctx->pc = 0x4c5bd4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c5bd8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5be0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5be4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5be8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4c5be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c5bec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c5becu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c5bf0: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4c5bf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4c5bf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c5bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c5bf8: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4c5bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4c5bfc: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4c5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4c5c00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c5c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c5c04: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x4c5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x4c5c08: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x4c5c08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c5c0c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5c10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5c14: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4c5c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c5c18: 0x1525025  or          $t2, $t2, $s2
    ctx->pc = 0x4c5c18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 18));
    // 0x4c5c1c: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4c5c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4c5c20: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4c5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4c5c24: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c5c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c5c28: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4c5c2c: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4c5c2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c5c30: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5c34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5c34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5c38: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c5c38u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c5c3c: 0x1324825  or          $t1, $t1, $s2
    ctx->pc = 0x4c5c3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 18));
    // 0x4c5c40: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4c5c40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4c5c44: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c5c48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c5c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5c4c: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4c5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4c5c50: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5c54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5c58: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c5c58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c5c5c: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4c5c5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4c5c60: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4c5c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4c5c64: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4c5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4c5c68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c5c68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c5c6c: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4c5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4c5c70: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c5c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c5c74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5c78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c5c7c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c5c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c5c80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5c84: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c5c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c5c88: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4c5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4c5c8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c5c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c5c90: 0x8131832  j           func_4C60C8
    ctx->pc = 0x4C5C90u;
    ctx->pc = 0x4C5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5C90u;
    // 0x4c5c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C60C8u;
    goto label_4c60c8;
    ctx->pc = 0x4C5C98u;
label_4c5c98:
    // 0x4c5c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c5c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c5c9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c5c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c5ca0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4c5ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4c5ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5ca8: 0x26b00ee0  addiu       $s0, $s5, 0xEE0
    ctx->pc = 0x4c5ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3808));
    // 0x4c5cac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c5cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c5cb0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c5cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5cb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c5cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c5cb8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c5cb8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c5cbc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c5cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c5cc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c5cc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c5cc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c5ccc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c5cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c5cd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c5cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c5cd4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4C5CD4u;
    SET_GPR_U32(ctx, 31, 0x4C5CDCu);
    ctx->pc = 0x4C5CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5CD4u;
    // 0x4c5cd8: 0x3c1e007f  lui         $fp, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4C5CD4u, 0x4C5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5CDCu;
label_4c5cdc:
    // 0x4c5cdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5ce0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c5ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5ce4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c5ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c5ce8: 0x27c50eec  addiu       $a1, $fp, 0xEEC
    ctx->pc = 0x4c5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3820));
    // 0x4c5cec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5cf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5cf4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5cf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c5cfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4c5d00: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c5d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c5d04: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4c5d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5d08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c5d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c5d0c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c5d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c5d10: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C5D10u;
    {
        const bool branch_taken_0x4c5d10 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D10u;
        // 0x4c5d14: 0x26e50ee8  addiu       $a1, $s7, 0xEE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d10) {
            ctx->pc = 0x4C5D28u;
            goto label_4c5d28;
        }
    }
    ctx->pc = 0x4C5D18u;
    // 0x4c5d18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5D1Cu;
    {
        const bool branch_taken_0x4c5d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5D1Cu;
        // 0x4c5d20: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5d1c) {
            ctx->pc = 0x4C5D30u;
            goto label_4c5d30;
        }
    }
    ctx->pc = 0x4C5D24u;
    // 0x4c5d24: 0x0  nop
    ctx->pc = 0x4c5d24u;
    // NOP
label_4c5d28:
    // 0x4c5d28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5d2c: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c5d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c5d30:
    // 0x4c5d30: 0x27c60eec  addiu       $a2, $fp, 0xEEC
    ctx->pc = 0x4c5d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3820));
    // 0x4c5d34: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c5d34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5d38: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5d3c: 0x26f20ee8  addiu       $s2, $s7, 0xEE8
    ctx->pc = 0x4c5d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 3816));
    // 0x4c5d40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5d44: 0x26b00ee0  addiu       $s0, $s5, 0xEE0
    ctx->pc = 0x4c5d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3808));
    // 0x4c5d48: 0x304203f0  andi        $v0, $v0, 0x3F0
    ctx->pc = 0x4c5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1008);
    // 0x4c5d4c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c5d50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5d54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5d58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5d5c: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4c5d5cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5d60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5d64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5d68: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x4c5d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c5d6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c5d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5d70: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5d74: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4c5d74u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4c5d78: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4c5d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5d7c: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4c5d7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4c5d80: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c5d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c5d84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c5d88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5d88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5d8c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5d94: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5d98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5d9c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c5d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5da0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4c5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c5da4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5dac: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4C5DACu;
    SET_GPR_U32(ctx, 31, 0x4C5DB4u);
    ctx->pc = 0x4C5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5DACu;
    // 0x4c5db0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4C5DACu, 0x4C5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5DB4u;
label_4c5db4:
    // 0x4c5db4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5db8: 0x26c50ef0  addiu       $a1, $s6, 0xEF0
    ctx->pc = 0x4c5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3824));
    // 0x4c5dbc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5dc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5dc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5dcc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4c5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4c5dd0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4c5dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4c5dd4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4c5dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4c5dd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c5ddc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c5de0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c5de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5de4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5DE4u;
    {
        const bool branch_taken_0x4c5de4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5DE4u;
        // 0x4c5de8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5de4) {
            ctx->pc = 0x4C5DF8u;
            goto label_4c5df8;
        }
    }
    ctx->pc = 0x4C5DECu;
    // 0x4c5dec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C5DECu;
    {
        const bool branch_taken_0x4c5dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5DECu;
        // 0x4c5df0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5dec) {
            ctx->pc = 0x4C5DFCu;
            goto label_4c5dfc;
        }
    }
    ctx->pc = 0x4C5DF4u;
    // 0x4c5df4: 0x0  nop
    ctx->pc = 0x4c5df4u;
    // NOP
label_4c5df8:
    // 0x4c5df8: 0x512024  and         $a0, $v0, $s1
    ctx->pc = 0x4c5df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4c5dfc:
    // 0x4c5dfc: 0x26c60ef0  addiu       $a2, $s6, 0xEF0
    ctx->pc = 0x4c5dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 3824));
    // 0x4c5e00: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c5e00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5e04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5e08: 0x26f30ee8  addiu       $s3, $s7, 0xEE8
    ctx->pc = 0x4c5e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 3816));
    // 0x4c5e0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5e10: 0x26b00ee0  addiu       $s0, $s5, 0xEE0
    ctx->pc = 0x4c5e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 3808));
    // 0x4c5e14: 0x304203f0  andi        $v0, $v0, 0x3F0
    ctx->pc = 0x4c5e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1008);
    // 0x4c5e18: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4c5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4c5e1c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5e20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5e24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5e28: 0x96680000  lhu         $t0, 0x0($s3)
    ctx->pc = 0x4c5e28u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c5e2c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5e30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5e34: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x4c5e34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c5e38: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4c5e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c5e3c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5e40: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4c5e40u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4c5e44: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4c5e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5e48: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c5e4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c5e50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5e50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5e54: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5e58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5e5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5e60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5e64: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c5e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5e68: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4c5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c5e6c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5e70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5e74: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4C5E74u;
    SET_GPR_U32(ctx, 31, 0x4C5E7Cu);
    ctx->pc = 0x4C5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5E74u;
    // 0x4c5e78: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4C5E74u, 0x4C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5E7Cu;
label_4c5e7c:
    // 0x4c5e7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4c5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c5e80: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c5e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c5e84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c5e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c5e88: 0x24c50ef4  addiu       $a1, $a2, 0xEF4
    ctx->pc = 0x4c5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3828));
    // 0x4c5e8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c5e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c5e90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EF4u));
    // 0x4c5e94: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c5e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c5e98: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4c5e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4c5e9c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c5ea0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c5ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c5ea4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c5ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c5ea8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c5ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c5eac: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c5eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5eb0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C5EB0u;
    {
        const bool branch_taken_0x4c5eb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5EB0u;
        // 0x4c5eb4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5eb0) {
            ctx->pc = 0x4C5EC0u;
            goto label_4c5ec0;
        }
    }
    ctx->pc = 0x4C5EB8u;
    // 0x4c5eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4C5EB8u;
    {
        const bool branch_taken_0x4c5eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5EB8u;
        // 0x4c5ebc: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5eb8) {
            ctx->pc = 0x4C5EC4u;
            goto label_4c5ec4;
        }
    }
    ctx->pc = 0x4C5EC0u;
label_4c5ec0:
    // 0x4c5ec0: 0x512024  and         $a0, $v0, $s1
    ctx->pc = 0x4c5ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4c5ec4:
    // 0x4c5ec4: 0x24c60ef4  addiu       $a2, $a2, 0xEF4
    ctx->pc = 0x4c5ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3828));
    // 0x4c5ec8: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4c5ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5ecc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5ed0: 0x27cc0eec  addiu       $t4, $fp, 0xEEC
    ctx->pc = 0x4c5ed0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 3820));
    // 0x4c5ed4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5ed8: 0x26cd0ef0  addiu       $t5, $s6, 0xEF0
    ctx->pc = 0x4c5ed8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 3824));
    // 0x4c5edc: 0x304203f0  andi        $v0, $v0, 0x3F0
    ctx->pc = 0x4c5edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1008);
    // 0x4c5ee0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4c5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4c5ee4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4c5ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4c5ee8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5eec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5ef0: 0x96e70ee8  lhu         $a3, 0xEE8($s7)
    ctx->pc = 0x4c5ef0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3816)));
    // 0x4c5ef4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5ef8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5efc: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4c5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c5f00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c5f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5f04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c5f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5f08: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4c5f08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4c5f0c: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4c5f0cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5f10: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c5f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c5f14: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4c5f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c5f18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c5f1c: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4c5f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c5f20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c5f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c5f24: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4c5f24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c5f28: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4c5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4c5f2c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c5f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c5f30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5f34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4c5f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4c5f38: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5f3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c5f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c5f44: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c5f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c5f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c5f4c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c5f50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c5f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c5f54: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4c5f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4c5f58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c5f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c5f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c5f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c5f60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c5f60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c5f64: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5f68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c5f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c5f6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c5f6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c5f70: 0x86820130  lh          $v0, 0x130($s4)
    ctx->pc = 0x4c5f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x4c5f74: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4c5f74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5f78: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4c5f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c5f7c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c5f7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c5f80: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x4c5f80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x4c5f84: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c5f84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c5f88: 0x10a4024  and         $t0, $t0, $t2
    ctx->pc = 0x4c5f88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x4c5f8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c5f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c5f90: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4c5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4c5f94: 0x86820132  lh          $v0, 0x132($s4)
    ctx->pc = 0x4c5f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 306)));
    // 0x4c5f98: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4c5f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c5f9c: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x4c5f9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x4c5fa0: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x4c5fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x4c5fa4: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4c5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4c5fa8: 0x86820134  lh          $v0, 0x134($s4)
    ctx->pc = 0x4c5fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x4c5fac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c5facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c5fb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c5fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c5fb4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x4c5fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x4c5fb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c5fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c5fbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5fc0: 0x8131832  j           func_4C60C8
    ctx->pc = 0x4C5FC0u;
    ctx->pc = 0x4C5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5FC0u;
    // 0x4c5fc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C60C8u;
    goto label_4c60c8;
    ctx->pc = 0x4C5FC8u;
label_4c5fc8:
    // 0x4c5fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c5fcc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c5fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c5fd4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c5fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c5fd8: 0x8c4e0f04  lw          $t6, 0xF04($v0)
    ctx->pc = 0x4c5fd8u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x7F0F04u));
    // 0x4c5fdc: 0x256b0eec  addiu       $t3, $t3, 0xEEC
    ctx->pc = 0x4c5fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3820));
    // 0x4c5fe0: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4c5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c5fe4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c5fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c5fe8: 0x85c20002  lh          $v0, 0x2($t6)
    ctx->pc = 0x4c5fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x4c5fec: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c5fecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c5ff0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c5ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c5ff4: 0x258c0ef0  addiu       $t4, $t4, 0xEF0
    ctx->pc = 0x4c5ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3824));
    // 0x4c5ff8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c5ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c5ffc: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4c5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c6000: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c6000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c6004: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c6004u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c6008: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c6008u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c600c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c600cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c6010: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c6010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c6014: 0x25ad0ef4  addiu       $t5, $t5, 0xEF4
    ctx->pc = 0x4c6014u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3828));
    // 0x4c6018: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x4c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x4c601c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4c601cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EF4u));
    // 0x4c6020: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c6020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c6024: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x4c6024u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6028: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c602c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6030: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c6030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c6034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6038: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c6038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c603c: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c603cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c6040: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c6040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c6044: 0x8dc20008  lw          $v0, 0x8($t6)
    ctx->pc = 0x4c6044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4c6048: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4c6048u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c604c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c6050: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6054: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c605c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4c605cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4c6060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6064: 0x8dc20050  lw          $v0, 0x50($t6)
    ctx->pc = 0x4c6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x4c6068: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4c6068u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c606c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c6070: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6074: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c6074u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c6078: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4c6078u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4c607c: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4c607cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4c6080: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4c6080u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4c6084: 0x8dc20054  lw          $v0, 0x54($t6)
    ctx->pc = 0x4c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 84)));
    // 0x4c6088: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c6088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c608c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c608cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6090: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c6090u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c6094: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x4c6094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x4c6098: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4c6098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4c609c: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4c609cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4c60a0: 0x8dc20058  lw          $v0, 0x58($t6)
    ctx->pc = 0x4c60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 88)));
    // 0x4c60a4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c60a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c60a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c60a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c60ac: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c60acu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c60b0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x4c60b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x4c60b4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4c60b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4c60b8: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4c60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4c60bc: 0x8131832  j           func_4C60C8
    ctx->pc = 0x4C60BCu;
    ctx->pc = 0x4C60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C60BCu;
    // 0x4c60c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C60C8u;
    goto label_4c60c8;
    ctx->pc = 0x4C60C4u;
    // 0x4c60c4: 0x0  nop
    ctx->pc = 0x4c60c4u;
    // NOP
label_4c60c8:
    // 0x4c60c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c60c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c60cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c60d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c60d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c60d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c60d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c60d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c60d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c60dc: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4c60dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4c60e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c60e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c60e4: 0x24c60eec  addiu       $a2, $a2, 0xEEC
    ctx->pc = 0x4c60e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3820));
    // 0x4c60e8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c60e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c60ec: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c60ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c60f0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c60f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0EECu));
    // 0x4c60f4: 0x24e70ef0  addiu       $a3, $a3, 0xEF0
    ctx->pc = 0x4c60f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3824));
    // 0x4c60f8: 0x256b0ef4  addiu       $t3, $t3, 0xEF4
    ctx->pc = 0x4c60f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3828));
    // 0x4c60fc: 0x86040130  lh          $a0, 0x130($s0)
    ctx->pc = 0x4c60fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4c6100: 0xa602011a  sh          $v0, 0x11A($s0)
    ctx->pc = 0x4c6100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6104: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x4c6104u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6108: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4c6108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4c610c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c610cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0EF0u));
    // 0x4c6110: 0x262d2494  addiu       $t5, $s1, 0x2494
    ctx->pc = 0x4c6110u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4c6114: 0x262e2498  addiu       $t6, $s1, 0x2498
    ctx->pc = 0x4c6114u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4c6118: 0x262f249c  addiu       $t7, $s1, 0x249C
    ctx->pc = 0x4c6118u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4c611c: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x4c611cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6120: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4c6120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0EF4u));
    // 0x4c6124: 0xa6020122  sh          $v0, 0x122($s0)
    ctx->pc = 0x4c6124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6128: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4c6128u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0EECu));
    // 0x4c612c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c612cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c6130: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4c6130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c6134: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c6134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c6138: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4c6138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4c613c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6140: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c6140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c6144: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4c6144u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c6148: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c6148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c614c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c614cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c6150: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x4c6150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4c6154: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4c6154u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6158: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4c6158u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c615c: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4c615cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6160: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x4c6160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x4c6164: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x4c6164u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6168: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4c6168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4c616c: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4c616cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c6170: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4c6170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4c6174: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4c6174u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4c6178: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x4c6178u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4c617c: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x4c617cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x4c6180: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4c6180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4c6184: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c6184u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c6188: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4c6188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c618c: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4c618cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4c6190: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4c6190u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4c6194: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4c6194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c6198: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x4c6198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x4c619c: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x4c619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4c61a0: 0x1284824  and         $t1, $t1, $t0
    ctx->pc = 0x4c61a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x4c61a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4c61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4c61a8: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x4c61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x4c61ac: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x4c61acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x4c61b0: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x4c61b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x4c61b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c61b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c61b8: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4c61b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c61bc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4c61bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4c61c0: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4c61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4c61c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c61c8: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4c61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4c61cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c61ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c61d0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c61d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c61d4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4C61D4u;
    SET_GPR_U32(ctx, 31, 0x4C61DCu);
    ctx->pc = 0x4C61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C61D4u;
    // 0x4c61d8: 0xade40000  sw          $a0, 0x0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4C61D4u, 0x4C61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C61DCu;
label_4c61dc:
    // 0x4c61dc: 0x962224a0  lhu         $v0, 0x24A0($s1)
    ctx->pc = 0x4c61dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4c61e0: 0x2604016a  addiu       $a0, $s0, 0x16A
    ctx->pc = 0x4c61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 362));
    // 0x4c61e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c61e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c61e8: 0xa6020166  sh          $v0, 0x166($s0)
    ctx->pc = 0x4c61e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c61ec: 0x962324a2  lhu         $v1, 0x24A2($s1)
    ctx->pc = 0x4c61ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9378)));
    // 0x4c61f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c61f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c61f4: 0xa6030168  sh          $v1, 0x168($s0)
    ctx->pc = 0x4c61f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c61f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c61f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c61fc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c61fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6200: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c6200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c6204: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c6204u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6208: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6208u;
        // 0x4c620c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6210u;
label_4c6210:
    // 0x4c6210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c6210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c6214: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4c6214u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c621c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4c621cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4c6220: 0xae000eec  sw          $zero, 0xEEC($s0)
    ctx->pc = 0x4c6220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EECu, _value); } while (0);
    // 0x4c6224: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c6224u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c6228: 0x25840ee0  addiu       $a0, $t4, 0xEE0
    ctx->pc = 0x4c6228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c622c: 0x25b90118  addiu       $t9, $t5, 0x118
    ctx->pc = 0x4c622cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 13), 280));
    // 0x4c6230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EE0u));
    // 0x4c6234: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c6234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6238: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x4c6238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4c623c: 0x25ab0166  addiu       $t3, $t5, 0x166
    ctx->pc = 0x4c623cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 358));
    // 0x4c6240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6244: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c6244u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c6248: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c6248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c624c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6250: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6254: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c6254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6258: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c6258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c625c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c625cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c6260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6264: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6264u;
    {
        const bool branch_taken_0x4c6264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6264u;
        // 0x4c6268: 0x25c50ee4  addiu       $a1, $t6, 0xEE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3812));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6264) {
            ctx->pc = 0x4C6278u;
            goto label_4c6278;
        }
    }
    ctx->pc = 0x4C626Cu;
    // 0x4c626c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c6270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6270u;
    {
        const bool branch_taken_0x4c6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6270u;
        // 0x4c6274: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6270) {
            ctx->pc = 0x4C6280u;
            goto label_4c6280;
        }
    }
    ctx->pc = 0x4C6278u;
label_4c6278:
    // 0x4c6278: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c627c: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4c627cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4c6280:
    // 0x4c6280: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4c6280u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4c6284: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6288: 0x25ea0ee8  addiu       $t2, $t7, 0xEE8
    ctx->pc = 0x4c6288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 3816));
    // 0x4c628c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x4c628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x4c6290: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c6290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EE8u));
    // 0x4c6294: 0x25880ee0  addiu       $t0, $t4, 0xEE0
    ctx->pc = 0x4c6294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c6298: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c6298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c629c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c629cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c62a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c62a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c62a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c62a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c62a8: 0x95c70ee4  lhu         $a3, 0xEE4($t6)
    ctx->pc = 0x4c62a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 3812)));
    // 0x4c62ac: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c62acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c62b0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c62b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c62b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c62b8: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4c62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c62bc: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c62bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c62c0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c62c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c62c4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4c62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c62c8: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c62c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c62cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c62d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c62d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c62d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c62d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c62d8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c62dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c62dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c62e0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c62e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c62e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c62e8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c62e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c62ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c62f0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c62f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c62f4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4c62f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c62f8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4c62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4c62fc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c62fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6300: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c6300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c6304: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c6304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c6308: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c6308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4c630c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c630cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c6310: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c6310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6314: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c6314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6318: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c6318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c631c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c631cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6320: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6320u;
    {
        const bool branch_taken_0x4c6320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6320u;
        // 0x4c6324: 0x348700ff  ori         $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6320) {
            ctx->pc = 0x4C6330u;
            goto label_4c6330;
        }
    }
    ctx->pc = 0x4C6328u;
    // 0x4c6328: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c632c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x4c632cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4c6330:
    // 0x4c6330: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c6330u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c6334: 0x25e40ee8  addiu       $a0, $t7, 0xEE8
    ctx->pc = 0x4c6334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 3816));
    // 0x4c6338: 0x25c90ee4  addiu       $t1, $t6, 0xEE4
    ctx->pc = 0x4c6338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3812));
    // 0x4c633c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c6340: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6344: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4c6344u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6348: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4c6348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c634c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c6350: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4c6350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4c6354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c6354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c6358: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c635c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4c635cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6360: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C6360u;
    {
        const bool branch_taken_0x4c6360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6360u;
        // 0x4c6364: 0x26060eec  addiu       $a2, $s0, 0xEEC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6360) {
            ctx->pc = 0x4C63A4u;
            goto label_4c63a4;
        }
    }
    ctx->pc = 0x4C6368u;
    // 0x4c6368: 0x25880ee0  addiu       $t0, $t4, 0xEE0
    ctx->pc = 0x4c6368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c636c: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4c636cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6370: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c6370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6374: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4c6374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6378: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c6378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c637c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4c6380: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6384: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4c6384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4c6388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c638c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4c638cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4c6390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6394: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c6394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c6398: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c639c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c639cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c63a0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4c63a4:
    // 0x4c63a4: 0x25840ee0  addiu       $a0, $t4, 0xEE0
    ctx->pc = 0x4c63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c63a8: 0x25b8011c  addiu       $t8, $t5, 0x11C
    ctx->pc = 0x4c63a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 284));
    // 0x4c63ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c63acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c63b0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4c63b4: 0x25ab0168  addiu       $t3, $t5, 0x168
    ctx->pc = 0x4c63b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 360));
    // 0x4c63b8: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x4c63b8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c63bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c63c0: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4c63c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4c63c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c63c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c63c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c63cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c63ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c63d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c63d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c63d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c63d8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c63d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c63dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c63e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c63e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C63E4u;
    {
        const bool branch_taken_0x4c63e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C63E4u;
        // 0x4c63e8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c63e4) {
            ctx->pc = 0x4C63F8u;
            goto label_4c63f8;
        }
    }
    ctx->pc = 0x4C63ECu;
    // 0x4c63ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C63ECu;
    {
        const bool branch_taken_0x4c63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C63ECu;
        // 0x4c63f0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c63ec) {
            ctx->pc = 0x4C63FCu;
            goto label_4c63fc;
        }
    }
    ctx->pc = 0x4C63F4u;
    // 0x4c63f4: 0x0  nop
    ctx->pc = 0x4c63f4u;
    // NOP
label_4c63f8:
    // 0x4c63f8: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x4c63f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4c63fc:
    // 0x4c63fc: 0x25ea0ee8  addiu       $t2, $t7, 0xEE8
    ctx->pc = 0x4c63fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 3816));
    // 0x4c6400: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6404: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c6404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6408: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x4c6408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x4c640c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4c640cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4c6410: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c6410u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6418: 0x25880ee0  addiu       $t0, $t4, 0xEE0
    ctx->pc = 0x4c6418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c641c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6420: 0x95c70ee4  lhu         $a3, 0xEE4($t6)
    ctx->pc = 0x4c6420u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 3812)));
    // 0x4c6424: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c6424u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c6428: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c642c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4c642cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4c6430: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c6430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6434: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4c6434u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4c6438: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4c6438u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c643c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4c643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4c6440: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4c6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c6444: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6448: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c644c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c644cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c6450: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c6450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c6454: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6458: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c6458u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c645c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c645cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6460: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c6460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6464: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c6464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c6468: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4c6468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4c646c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4c646cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6470: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4c6474: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c6474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c6478: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4c6478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4c647c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4c647cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4c6480: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c6480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4c6484: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4c6484u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4c6488: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4c6488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c648c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c648cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c6490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c6494: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c6494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6498: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6498u;
    {
        const bool branch_taken_0x4c6498 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6498u;
        // 0x4c649c: 0x34a700ff  ori         $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6498) {
            ctx->pc = 0x4C64A8u;
            goto label_4c64a8;
        }
    }
    ctx->pc = 0x4C64A0u;
    // 0x4c64a0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c64a4: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x4c64a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4c64a8:
    // 0x4c64a8: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4c64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4c64ac: 0x25e40ee8  addiu       $a0, $t7, 0xEE8
    ctx->pc = 0x4c64acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 3816));
    // 0x4c64b0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c64b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c64b4: 0x91c30ee4  lbu         $v1, 0xEE4($t6)
    ctx->pc = 0x4c64b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3812)));
    // 0x4c64b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c64bc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4c64bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c64c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4c64c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4c64c4: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4c64c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4c64c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c64c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c64cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c64d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4c64d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c64d4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C64D4u;
    {
        const bool branch_taken_0x4c64d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C64D4u;
        // 0x4c64d8: 0x26060eec  addiu       $a2, $s0, 0xEEC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c64d4) {
            ctx->pc = 0x4C6518u;
            goto label_4c6518;
        }
    }
    ctx->pc = 0x4C64DCu;
    // 0x4c64dc: 0x25880ee0  addiu       $t0, $t4, 0xEE0
    ctx->pc = 0x4c64dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3808));
    // 0x4c64e0: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4c64e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c64e4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c64e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c64e8: 0x85650000  lh          $a1, 0x0($t3)
    ctx->pc = 0x4c64e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c64ec: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c64f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4c64f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c64f8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4c64f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4c64fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c64fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6500: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4c6500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4c6504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6508: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c6508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c650c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c6510: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c6510u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c6514: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c6514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4c6518:
    // 0x4c6518: 0x95820ee0  lhu         $v0, 0xEE0($t4)
    ctx->pc = 0x4c6518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3808)));
    // 0x4c651c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4c651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c6520: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x4c6520u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6524: 0x86030eec  lh          $v1, 0xEEC($s0)
    ctx->pc = 0x4c6524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3820)));
    // 0x4c6528: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6528u;
    {
        const bool branch_taken_0x4c6528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4C652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6528u;
        // 0x4c652c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6528) {
            ctx->pc = 0x4C6540u;
            goto label_4c6540;
        }
    }
    ctx->pc = 0x4C6530u;
    // 0x4c6530: 0x25a3016a  addiu       $v1, $t5, 0x16A
    ctx->pc = 0x4c6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 362));
    // 0x4c6534: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c6534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c6538: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c653c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c653cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c6540:
    // 0x4c6540: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6540u;
        // 0x4c6544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6548u;
label_4c6548:
    // 0x4c6548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c6548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c654c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4c654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4c6550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c6554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c655c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4c655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4c6560: 0x96050118  lhu         $a1, 0x118($s0)
    ctx->pc = 0x4c6560u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x4c6564: 0xa44524a0  sh          $a1, 0x24A0($v0)
    ctx->pc = 0x4c6564u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4c6568: 0x9603011c  lhu         $v1, 0x11C($s0)
    ctx->pc = 0x4c6568u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4c656c: 0x2610016a  addiu       $s0, $s0, 0x16A
    ctx->pc = 0x4c656cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 362));
    // 0x4c6570: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4C6570u;
    SET_GPR_U32(ctx, 31, 0x4C6578u);
    ctx->pc = 0x4C6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6570u;
    // 0x4c6574: 0xa44324a2  sh          $v1, 0x24A2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9378), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4C6570u, 0x4C6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6578u;
label_4c6578:
    // 0x4c6578: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c6578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c657c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6580: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c6580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c6584: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4c6584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c658c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C658Cu;
        // 0x4c6590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6594u;
    // 0x4c6594: 0x0  nop
    ctx->pc = 0x4c6594u;
    // NOP
label_4c6598:
    // 0x4c6598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c6598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c659c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c659cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c65a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c65a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c65a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c65a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c65a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4c65a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4c65ac: 0x258c0eec  addiu       $t4, $t4, 0xEEC
    ctx->pc = 0x4c65acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3820));
    // 0x4c65b0: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x4c65b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x4c65b4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c65b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c65b8: 0x8602011a  lh          $v0, 0x11A($s0)
    ctx->pc = 0x4c65b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x4c65bc: 0x256b0ef0  addiu       $t3, $t3, 0xEF0
    ctx->pc = 0x4c65bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3824));
    // 0x4c65c0: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4c65c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c65c4: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4c65c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4c65c8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4c65c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4c65cc: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4c65ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c65d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c65d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c65d4: 0x25ad0ef4  addiu       $t5, $t5, 0xEF4
    ctx->pc = 0x4c65d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3828));
    // 0x4c65d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c65d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c65dc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c65dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c65e0: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c65e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4c65e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4c65e8: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4c65e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4c65ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c65f0: 0x8602011e  lh          $v0, 0x11E($s0)
    ctx->pc = 0x4c65f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x4c65f4: 0x25ce0ee4  addiu       $t6, $t6, 0xEE4
    ctx->pc = 0x4c65f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3812));
    // 0x4c65f8: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4c65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c65fc: 0x34840060  ori         $a0, $a0, 0x60
    ctx->pc = 0x4c65fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)96);
    // 0x4c6600: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4c6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4c6604: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4c6604u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c6608: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c6608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c660c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6610: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4c6610u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4c6614: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c6614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c6618: 0x86020122  lh          $v0, 0x122($s0)
    ctx->pc = 0x4c6618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 290)));
    // 0x4c661c: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x4c661cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c6620: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4c6620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4c6624: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4c6624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c6628: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c662c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4c662cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4c6630: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6634: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4c6634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4c6638: 0x86020130  lh          $v0, 0x130($s0)
    ctx->pc = 0x4c6638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x4c663c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4c663cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4c6640: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x4c6640u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c6644: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4c6644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6648: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4c6648u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4c664c: 0x14f5025  or          $t2, $t2, $t7
    ctx->pc = 0x4c664cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x4c6650: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4c6650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4c6654: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4c6654u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4c6658: 0x86020132  lh          $v0, 0x132($s0)
    ctx->pc = 0x4c6658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 306)));
    // 0x4c665c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4c665cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4c6660: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x4c6660u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x4c6664: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4c6664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4c6668: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4c6668u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4c666c: 0x86020134  lh          $v0, 0x134($s0)
    ctx->pc = 0x4c666cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x4c6670: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4c6670u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4c6674: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4c6674u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4c6678: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x4c6678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x4c667c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4c667cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4c6680: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4c6680u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4c6684: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4C6684u;
    SET_GPR_U32(ctx, 31, 0x4C668Cu);
    ctx->pc = 0x4C6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6684u;
    // 0x4c6688: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4C6684u, 0x4C668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C668Cu;
label_4c668c:
    // 0x4c668c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c6690: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6690u;
    {
        const bool branch_taken_0x4c6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6690u;
        // 0x4c6694: 0x2604016a  addiu       $a0, $s0, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 362));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6690) {
            ctx->pc = 0x4C66B8u;
            goto label_4c66b8;
        }
    }
    ctx->pc = 0x4C6698u;
    // 0x4c6698: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c6698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c669c: 0xac400ee0  sw          $zero, 0xEE0($v0)
    ctx->pc = 0x4c669cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0EE0u, _value); } while (0);
    // 0x4c66a0: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x4c66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x4c66a4: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x4c66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x4c66a8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x4c66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x4c66ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c66acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c66b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c66b4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c66b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c66b8:
    // 0x4c66b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c66b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c66bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4c66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c66c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C66C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C66C0u;
        // 0x4c66c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C66C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C66C8u;
label_4c66c8:
    // 0x4c66c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c66c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c66cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c66ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c66d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c66d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c66d4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4c66d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4c66d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c66dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c66dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c66e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c66e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c66e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c66e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c66e8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4c66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4c66ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c66f0: 0x24d40eec  addiu       $s4, $a2, 0xEEC
    ctx->pc = 0x4c66f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 3820));
    // 0x4c66f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c66f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c66f8: 0x2655015e  addiu       $s5, $s2, 0x15E
    ctx->pc = 0x4c66f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4c66fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c66fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c6700: 0x2483d680  addiu       $v1, $a0, -0x2980
    ctx->pc = 0x4c6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4c6704: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c6708: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c6708u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c670c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c6710: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c6710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c6714: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c6718: 0x24960ee4  addiu       $s6, $a0, 0xEE4
    ctx->pc = 0x4c6718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 3812));
    // 0x4c671c: 0x27d10ee0  addiu       $s1, $fp, 0xEE0
    ctx->pc = 0x4c671cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 3808));
    // 0x4c6720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c6720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6724: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x4c6724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x4c6728: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4c6728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c672c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c672cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6730: 0xa4622334  sh          $v0, 0x2334($v1)
    ctx->pc = 0x4c6730u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4c6734: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c6734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c6738: 0x24530ef0  addiu       $s3, $v0, 0xEF0
    ctx->pc = 0x4c6738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
    // 0x4c673c: 0x96420016  lhu         $v0, 0x16($s2)
    ctx->pc = 0x4c673cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4c6740: 0xa4622336  sh          $v0, 0x2336($v1)
    ctx->pc = 0x4c6740u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4c6744: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x4c6744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x4c6748: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4c6748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0EECu));
    // 0x4c674c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4c674cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0EF0u));
    // 0x4c6750: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4C6750u;
    SET_GPR_U32(ctx, 31, 0x4C6758u);
    ctx->pc = 0x4C6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6750u;
    // 0x4c6754: 0xa4622338  sh          $v0, 0x2338($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4C6750u, 0x4C6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6758u;
label_4c6758:
    // 0x4c6758: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c6758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c675c: 0x24840ee8  addiu       $a0, $a0, 0xEE8
    ctx->pc = 0x4c675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3816));
    // 0x4c6760: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4c6760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c6764: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c6764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EE8u));
    // 0x4c6768: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c6768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c676c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6774: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c677c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c677cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c6780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4c6784: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c6784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c6788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c678c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c678cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6790: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c6790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6794: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x4C6794u;
    {
        const bool branch_taken_0x4c6794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6794u;
        // 0x4c6798: 0x3c17007f  lui         $s7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6794) {
            ctx->pc = 0x4C6970u;
            goto label_4c6970;
        }
    }
    ctx->pc = 0x4C679Cu;
    // 0x4c679c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4c679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c67a0: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x4c67a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4c67a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4c67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c67a8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4c67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4c67ac: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4c67acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c67b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4c67b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4c67b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4c67b8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4c67b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4c67bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c67bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c67c0: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4C67C0u;
    SET_GPR_U32(ctx, 31, 0x4C67C8u);
    ctx->pc = 0x4C67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C67C0u;
    // 0x4c67c4: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4C67C0u, 0x4C67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C67C8u;
label_4c67c8:
    // 0x4c67c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c67cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4c67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4c67d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c67d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c67d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c67d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c67d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c67dc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c67dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c67e0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C67E0u;
    {
        const bool branch_taken_0x4c67e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C67E0u;
        // 0x4c67e4: 0x26e50ef4  addiu       $a1, $s7, 0xEF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c67e0) {
            ctx->pc = 0x4C67F8u;
            goto label_4c67f8;
        }
    }
    ctx->pc = 0x4C67E8u;
    // 0x4c67e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c67ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C67ECu;
    {
        const bool branch_taken_0x4c67ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C67ECu;
        // 0x4c67f0: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c67ec) {
            ctx->pc = 0x4C6800u;
            goto label_4c6800;
        }
    }
    ctx->pc = 0x4C67F4u;
    // 0x4c67f4: 0x0  nop
    ctx->pc = 0x4c67f4u;
    // NOP
label_4c67f8:
    // 0x4c67f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c67fc: 0x502024  and         $a0, $v0, $s0
    ctx->pc = 0x4c67fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4c6800:
    // 0x4c6800: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c6800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c6804: 0x27d00ee0  addiu       $s0, $fp, 0xEE0
    ctx->pc = 0x4c6804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 3808));
    // 0x4c6808: 0x24460ee4  addiu       $a2, $v0, 0xEE4
    ctx->pc = 0x4c6808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3812));
    // 0x4c680c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c680cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6810: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c6810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EE4u));
    // 0x4c6814: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4c6814u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6818: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4c6818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4c681c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c681cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c6820: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4c6820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4c6824: 0x26f30ef4  addiu       $s3, $s7, 0xEF4
    ctx->pc = 0x4c6824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 3828));
    // 0x4c6828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c6828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c682c: 0x84890ef0  lh          $t1, 0xEF0($a0)
    ctx->pc = 0x4c682cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 3824)));
    // 0x4c6830: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c6830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c6834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6838: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4c6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4c683c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c683cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6840: 0x96680000  lhu         $t0, 0x0($s3)
    ctx->pc = 0x4c6840u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c6844: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c6844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4c6848: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4c6848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c684c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c6850: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x4c6850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c6854: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6858: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4c6858u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4c685c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c685cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c6860: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6864: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c6864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6868: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c6868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c686c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c686cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6870: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6874: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c6878: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c687c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c687cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c6880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6884: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c6884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c6888: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4c688c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c6890: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6894: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c6894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c6898: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c689c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c689cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c68a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4c68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4c68a4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c68a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c68a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c68a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c68ac: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4C68ACu;
    SET_GPR_U32(ctx, 31, 0x4C68B4u);
    ctx->pc = 0x4C68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C68ACu;
    // 0x4c68b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4C68ACu, 0x4C68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C68B4u;
label_4c68b4:
    // 0x4c68b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c68b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4c68b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4c68bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c68bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c68c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c68c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c68c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c68c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c68c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c68cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C68CCu;
    {
        const bool branch_taken_0x4c68cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C68CCu;
        // 0x4c68d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68cc) {
            ctx->pc = 0x4C68E0u;
            goto label_4c68e0;
        }
    }
    ctx->pc = 0x4C68D4u;
    // 0x4c68d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C68D4u;
    {
        const bool branch_taken_0x4c68d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C68D4u;
        // 0x4c68d8: 0x3445ffff  ori         $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68d4) {
            ctx->pc = 0x4C68E4u;
            goto label_4c68e4;
        }
    }
    ctx->pc = 0x4C68DCu;
    // 0x4c68dc: 0x0  nop
    ctx->pc = 0x4c68dcu;
    // NOP
label_4c68e0:
    // 0x4c68e0: 0x512824  and         $a1, $v0, $s1
    ctx->pc = 0x4c68e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_4c68e4:
    // 0x4c68e4: 0x27c40ee0  addiu       $a0, $fp, 0xEE0
    ctx->pc = 0x4c68e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3808));
    // 0x4c68e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c68e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c68ec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c68ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c68f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c68f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4c68f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4c68f8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4c68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4c68fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c68fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6900: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6904: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6908: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c6908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c690c: 0x96e60ef4  lhu         $a2, 0xEF4($s7)
    ctx->pc = 0x4c690cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3828)));
    // 0x4c6910: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6918: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x4c6918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4c691c: 0x84480eec  lh          $t0, 0xEEC($v0)
    ctx->pc = 0x4c691cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3820)));
    // 0x4c6920: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4c6920u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4c6924: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c6924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6928: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4c6928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4c692c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c6930: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c6930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c6934: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c6934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6938: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c693c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c693cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c6944: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c6944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6948: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c6948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4c694c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6950: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c6954: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c6954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c6958: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c6958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c695c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4c695cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6960: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4c6964: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c6968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c6968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c696c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c696cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4c6970:
    // 0x4c6970: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4c6970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4c6974: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4c6974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4c6978: 0x2483d680  addiu       $v1, $a0, -0x2980
    ctx->pc = 0x4c6978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4c697c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c6984: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c6984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c6988: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4c6988u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c698c: 0xa4602330  sh          $zero, 0x2330($v1)
    ctx->pc = 0x4c698cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4c6990: 0x97c20ee0  lhu         $v0, 0xEE0($fp)
    ctx->pc = 0x4c6990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3808)));
    // 0x4c6994: 0x94c50ee4  lhu         $a1, 0xEE4($a2)
    ctx->pc = 0x4c6994u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0EE4u));
    // 0x4c6998: 0xa462233a  sh          $v0, 0x233A($v1)
    ctx->pc = 0x4c6998u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BAu, _value); } while (0);
    // 0x4c699c: 0xa465233c  sh          $a1, 0x233C($v1)
    ctx->pc = 0x4c699cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BCu, _value); } while (0);
    // 0x4c69a0: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4C69A0u;
    SET_GPR_U32(ctx, 31, 0x4C69A8u);
    ctx->pc = 0x4C69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C69A0u;
    // 0x4c69a4: 0xa460233e  sh          $zero, 0x233E($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4C69A0u, 0x4C69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C69A8u;
label_4c69a8:
    // 0x4c69a8: 0x2643016a  addiu       $v1, $s2, 0x16A
    ctx->pc = 0x4c69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 362));
    // 0x4c69ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4c69acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c69b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c69b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c69b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c69b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c69b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c69bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c69bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c69c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c69c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c69c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c69c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c69c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c69c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c69cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c69ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c69d0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c69d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c69d4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c69d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c69d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c69d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c69dc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c69dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c69e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C69E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C69E0u;
        // 0x4c69e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C69E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C69E8u;
label_4c69e8:
    // 0x4c69e8: 0x248501bc  addiu       $a1, $a0, 0x1BC
    ctx->pc = 0x4c69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    // 0x4c69ec: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x4c69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4c69f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c69f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c69f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4c69f8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4c69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c69fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C69FCu;
    {
        const bool branch_taken_0x4c69fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C69FCu;
        // 0x4c6a00: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c69fc) {
            ctx->pc = 0x4C6A18u;
            goto label_4c6a18;
        }
    }
    ctx->pc = 0x4C6A04u;
    // 0x4c6a04: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4c6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4c6a08: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4c6a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6a0c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c6a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c6a10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c6a14: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4c6a14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c6a18:
    // 0x4c6a18: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6A20u;
}
