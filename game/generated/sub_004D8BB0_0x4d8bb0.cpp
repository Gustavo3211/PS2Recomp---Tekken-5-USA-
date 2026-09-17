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

// Function: sub_004D8BB0
// Address: 0x4d8bb0 - 0x4d9120
void sub_004D8BB0_0x4d8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8BB0_0x4d8bb0");
#endif

    switch (ctx->pc) {
        case 0x4d8bc0u: goto label_4d8bc0;
        case 0x4d8be0u: goto label_4d8be0;
        case 0x4d8ce0u: goto label_4d8ce0;
        case 0x4d8e88u: goto label_4d8e88;
        case 0x4d8ec8u: goto label_4d8ec8;
        case 0x4d8f14u: goto label_4d8f14;
        case 0x4d8ff0u: goto label_4d8ff0;
        case 0x4d9014u: goto label_4d9014;
        case 0x4d9064u: goto label_4d9064;
        case 0x4d9088u: goto label_4d9088;
        case 0x4d9090u: goto label_4d9090;
        case 0x4d9098u: goto label_4d9098;
        case 0x4d90acu: goto label_4d90ac;
        case 0x4d90dcu: goto label_4d90dc;
        case 0x4d90e4u: goto label_4d90e4;
        case 0x4d90ecu: goto label_4d90ec;
        case 0x4d9108u: goto label_4d9108;
        default: break;
    }

    ctx->pc = 0x4d8bb0u;

    // 0x4d8bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8bb4: 0x81362f2  j           func_4D8BC8
    ctx->pc = 0x4D8BB4u;
    ctx->pc = 0x4D8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8BB4u;
    // 0x4d8bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8BC8u;
    goto label_4d8bc8;
    ctx->pc = 0x4D8BBCu;
    // 0x4d8bbc: 0x0  nop
    ctx->pc = 0x4d8bbcu;
    // NOP
label_4d8bc0:
    // 0x4d8bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8BC0u;
        // 0x4d8bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8BC8u;
label_4d8bc8:
    // 0x4d8bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d8bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d8bd0: 0xa4800168  sh          $zero, 0x168($a0)
    ctx->pc = 0x4d8bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d8bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8bd8: 0x81362f8  j           func_4D8BE0
    ctx->pc = 0x4D8BD8u;
    ctx->pc = 0x4D8BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8BD8u;
    // 0x4d8bdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8BE0u;
    goto label_4d8be0;
    ctx->pc = 0x4D8BE0u;
label_4d8be0:
    // 0x4d8be0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d8be4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d8be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d8bec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4d8becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8bf0: 0x24a810d0  addiu       $t0, $a1, 0x10D0
    ctx->pc = 0x4d8bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4304));
    // 0x4d8bf4: 0x252a013a  addiu       $t2, $t1, 0x13A
    ctx->pc = 0x4d8bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 314));
    // 0x4d8bf8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4d8bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8bfc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d8bfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8c00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10D0u));
    // 0x4d8c04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d8c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8c08: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d8c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d8c0c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d8c0cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4d8c10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8c14: 0x252b0168  addiu       $t3, $t1, 0x168
    ctx->pc = 0x4d8c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 360));
    // 0x4d8c18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8c1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d8c20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8c24: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d8c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d8c2c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d8c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d8c30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8c34: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d8c38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d8c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8c3c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x4d8c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4d8c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8C40u;
    {
        const bool branch_taken_0x4d8c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8C40u;
        // 0x4d8c44: 0x258710d4  addiu       $a3, $t4, 0x10D4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c40) {
            ctx->pc = 0x4D8C58u;
            goto label_4d8c58;
        }
    }
    ctx->pc = 0x4D8C48u;
    // 0x4d8c48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8c4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8C4Cu;
    {
        const bool branch_taken_0x4d8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8C4Cu;
        // 0x4d8c50: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c4c) {
            ctx->pc = 0x4D8C64u;
            goto label_4d8c64;
        }
    }
    ctx->pc = 0x4D8C54u;
    // 0x4d8c54: 0x0  nop
    ctx->pc = 0x4d8c54u;
    // NOP
label_4d8c58:
    // 0x4d8c58: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8c5c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4d8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d8c60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4d8c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8c64:
    // 0x4d8c64: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4d8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4d8c68: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d8c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8c6c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4d8c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d8c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8c74: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x4d8c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8c78: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4d8c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8c7c: 0x918210d4  lbu         $v0, 0x10D4($t4)
    ctx->pc = 0x4d8c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4308)));
    // 0x4d8c80: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4d8c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4d8c84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8c88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4d8c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4d8c8c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d8c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d8c90: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d8c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8c94: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4d8c94u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d8c98: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d8c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8c9c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4d8c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8ca0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d8ca4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4d8ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d8cac: 0x84637b50  lh          $v1, 0x7B50($v1)
    ctx->pc = 0x4d8cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 31568)));
    // 0x4d8cb0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d8cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d8cb4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d8cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4d8cb8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d8cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d8cbc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4d8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4d8cc0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d8cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d8cc4: 0xa5230136  sh          $v1, 0x136($t1)
    ctx->pc = 0x4d8cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 310), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d8cc8: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d8cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d8ccc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d8cd0: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4d8cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8cd4: 0x8136338  j           func_4D8CE0
    ctx->pc = 0x4D8CD4u;
    ctx->pc = 0x4D8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8CD4u;
    // 0x4d8cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8CE0u;
    goto label_4d8ce0;
    ctx->pc = 0x4D8CDCu;
    // 0x4d8cdc: 0x0  nop
    ctx->pc = 0x4d8cdcu;
    // NOP
label_4d8ce0:
    // 0x4d8ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d8ce4: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4d8ce4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4d8ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d8cec: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4d8cecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8cf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d8cf4: 0x270e10d0  addiu       $t6, $t8, 0x10D0
    ctx->pc = 0x4d8cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 4304));
    // 0x4d8cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d8cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d8cfc: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x4d8cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8d00: 0x2570011c  addiu       $s0, $t3, 0x11C
    ctx->pc = 0x4d8d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 284));
    // 0x4d8d04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d8d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8d08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10D0u));
    // 0x4d8d0c: 0x256c0136  addiu       $t4, $t3, 0x136
    ctx->pc = 0x4d8d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 310));
    // 0x4d8d10: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d8d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8d14: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4d8d14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4d8d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d8d1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4d8d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8d20: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d8d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4d8d24: 0x25790168  addiu       $t9, $t3, 0x168
    ctx->pc = 0x4d8d24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 360));
    // 0x4d8d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8d2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d8d30: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d8d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8d34: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4d8d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d8d38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d8d3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8d40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8D40u;
    {
        const bool branch_taken_0x4d8d40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D40u;
        // 0x4d8d44: 0x25e710d4  addiu       $a3, $t7, 0x10D4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d40) {
            ctx->pc = 0x4D8D58u;
            goto label_4d8d58;
        }
    }
    ctx->pc = 0x4D8D48u;
    // 0x4d8d48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8d4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8D4Cu;
    {
        const bool branch_taken_0x4d8d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D4Cu;
        // 0x4d8d50: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d4c) {
            ctx->pc = 0x4D8D60u;
            goto label_4d8d60;
        }
    }
    ctx->pc = 0x4D8D54u;
    // 0x4d8d54: 0x0  nop
    ctx->pc = 0x4d8d54u;
    // NOP
label_4d8d58:
    // 0x4d8d58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8d5c: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x4d8d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4d8d60:
    // 0x4d8d60: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4d8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4d8d64: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d8d68: 0x246a10d8  addiu       $t2, $v1, 0x10D8
    ctx->pc = 0x4d8d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4312));
    // 0x4d8d6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8d70: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10D8u));
    // 0x4d8d74: 0x3442016c  ori         $v0, $v0, 0x16C
    ctx->pc = 0x4d8d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)364);
    // 0x4d8d78: 0x95e810d4  lhu         $t0, 0x10D4($t7)
    ctx->pc = 0x4d8d78u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4308)));
    // 0x4d8d7c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4d8d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8d80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8d84: 0x85c70000  lh          $a3, 0x0($t6)
    ctx->pc = 0x4d8d84u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d8d88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8d8c: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4d8d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d8d90: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d8d90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d8d94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8d98: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x4d8d98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4d8d9c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8d9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d8da0: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4d8da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8da4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4d8da4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4d8da8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x4d8da8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8dac: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4d8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4d8db0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8db4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d8db8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d8dbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8dc0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d8dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8dc8: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d8dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8dcc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4d8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d8dd0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4d8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4d8dd4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4d8dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8dd8: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4d8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4d8ddc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4d8ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8de0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d8de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d8de4: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4d8de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4d8de8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4d8de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4d8dec: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4d8decu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4d8df0: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4d8df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d8df4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4d8df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d8df8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d8dfc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8e00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8E00u;
    {
        const bool branch_taken_0x4d8e00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4D8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E00u;
        // 0x4d8e04: 0x34a800ff  ori         $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e00) {
            ctx->pc = 0x4D8E10u;
            goto label_4d8e10;
        }
    }
    ctx->pc = 0x4D8E08u;
    // 0x4d8e08: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4d8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d8e0c: 0xa24024  and         $t0, $a1, $v0
    ctx->pc = 0x4d8e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4d8e10:
    // 0x4d8e10: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4d8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4d8e14: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4d8e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4d8e18: 0x91e310d4  lbu         $v1, 0x10D4($t7)
    ctx->pc = 0x4d8e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4308)));
    // 0x4d8e1c: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d8e20: 0x91a50000  lbu         $a1, 0x0($t5)
    ctx->pc = 0x4d8e20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d8e24: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d8e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d8e28: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4d8e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4d8e2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d8e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d8e30: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4d8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4d8e34: 0x81a30000  lb          $v1, 0x0($t5)
    ctx->pc = 0x4d8e34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d8e38: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4D8E38u;
    {
        const bool branch_taken_0x4d8e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E38u;
        // 0x4d8e3c: 0x3c05ffff  lui         $a1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e38) {
            ctx->pc = 0x4D8E6Cu;
            goto label_4d8e6c;
        }
    }
    ctx->pc = 0x4D8E40u;
    // 0x4d8e40: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4d8e40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d8e44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4d8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d8e48: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4d8e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d8e4c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4d8e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4d8e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d8e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d8e54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8e58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d8e5c: 0xa566014a  sh          $a2, 0x14A($t3)
    ctx->pc = 0x4d8e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 330), (uint16_t)GPR_U32(ctx, 6));
    // 0x4d8e60: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x4d8e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d8e64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d8e68: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x4d8e68u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d8e6c:
    // 0x4d8e6c: 0x970210d0  lhu         $v0, 0x10D0($t8)
    ctx->pc = 0x4d8e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4304)));
    // 0x4d8e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8e74: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d8e74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d8e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8e80: 0x8136414  j           func_4D9050
    ctx->pc = 0x4D8E80u;
    ctx->pc = 0x4D8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8E80u;
    // 0x4d8e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9050u;
    goto label_4d9050;
    ctx->pc = 0x4D8E88u;
label_4d8e88:
    // 0x4d8e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d8e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d8e8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d8e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d8e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d8e94: 0x24460168  addiu       $a2, $v0, 0x168
    ctx->pc = 0x4d8e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4d8e98: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4d8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4d8e9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d8e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d8ea0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d8ea4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4d8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d8ea8: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8EA8u;
    {
        const bool branch_taken_0x4d8ea8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4D8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8EA8u;
        // 0x4d8eac: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ea8) {
            ctx->pc = 0x4D8EBCu;
            goto label_4d8ebc;
        }
    }
    ctx->pc = 0x4D8EB0u;
    // 0x4d8eb0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d8eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d8eb4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d8eb8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d8eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d8ebc:
    // 0x4d8ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8ec0: 0x8136414  j           func_4D9050
    ctx->pc = 0x4D8EC0u;
    ctx->pc = 0x4D8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8EC0u;
    // 0x4d8ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9050u;
    goto label_4d9050;
    ctx->pc = 0x4D8EC8u;
label_4d8ec8:
    // 0x4d8ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d8ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d8ecc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d8ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d8ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d8ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d8edc: 0x245310d0  addiu       $s3, $v0, 0x10D0
    ctx->pc = 0x4d8edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x4d8ee0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d8ee4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4d8ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d8eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d8ef0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d8ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d8ef4: 0x86430160  lh          $v1, 0x160($s2)
    ctx->pc = 0x4d8ef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x4d8ef8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10D0u));
    // 0x4d8efc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4d8efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4d8f00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d8f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8f08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d8f0c: 0xc135d9c  jal         func_4D7670
    ctx->pc = 0x4D8F0Cu;
    SET_GPR_U32(ctx, 31, 0x4D8F14u);
    ctx->pc = 0x4D8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8F0Cu;
    // 0x4d8f10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7670u, 0x4D8F0Cu, 0x4D8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8F14u;
label_4d8f14:
    // 0x4d8f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d8f18: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x4D8F18u;
    {
        const bool branch_taken_0x4d8f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4D8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F18u;
        // 0x4d8f1c: 0x26450162  addiu       $a1, $s2, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f18) {
            ctx->pc = 0x4D9014u;
            goto label_4d9014;
        }
    }
    ctx->pc = 0x4D8F20u;
    // 0x4d8f20: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d8f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d8f28: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d8f28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8f2c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4d8f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d8f30: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4d8f30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4d8f34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8f38: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4d8f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4d8f3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8f40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4d8f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4d8f44: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d8f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d8f4c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d8f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8f50: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4d8f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4d8f54: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d8f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d8f58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8f5c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d8f60: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d8f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8f64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4D8F64u;
    {
        const bool branch_taken_0x4d8f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F64u;
        // 0x4d8f68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f64) {
            ctx->pc = 0x4D8F90u;
            goto label_4d8f90;
        }
    }
    ctx->pc = 0x4D8F6Cu;
    // 0x4d8f6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8f78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d8f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d8f7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d8f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8f80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d8f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d8f84: 0x8136414  j           func_4D9050
    ctx->pc = 0x4D8F84u;
    ctx->pc = 0x4D8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8F84u;
    // 0x4d8f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9050u;
    goto label_4d9050;
    ctx->pc = 0x4D8F8Cu;
    // 0x4d8f8c: 0x0  nop
    ctx->pc = 0x4d8f8cu;
    // NOP
label_4d8f90:
    // 0x4d8f90: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4d8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4d8f94: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4d8f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4d8f98: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4d8f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4d8f9c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d8f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d8fa0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4d8fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4d8fa4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d8fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d8fa8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4d8fac: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d8facu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d8fb0: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4d8fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d8fb4: 0x263110d4  addiu       $s1, $s1, 0x10D4
    ctx->pc = 0x4d8fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4308));
    // 0x4d8fb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d8fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8fbc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4d8fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8fc0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4d8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4d8fc4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4d8fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8fc8: 0x8ca410dc  lw          $a0, 0x10DC($a1)
    ctx->pc = 0x4d8fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4316)));
    // 0x4d8fcc: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4d8fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4d8fd0: 0x8d2510e0  lw          $a1, 0x10E0($t1)
    ctx->pc = 0x4d8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4320)));
    // 0x4d8fd4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4d8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4d8fd8: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4d8fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d8fdc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4d8fe0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4d8fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4d8fe4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4d8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4d8fe8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4D8FE8u;
    SET_GPR_U32(ctx, 31, 0x4D8FF0u);
    ctx->pc = 0x4D8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8FE8u;
    // 0x4d8fec: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4D8FE8u, 0x4D8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8FF0u;
label_4d8ff0:
    // 0x4d8ff0: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x4d8ff0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d8ff4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4d8ff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d8ff8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d8ffc: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4d8ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9004: 0xa605233a  sh          $a1, 0x233A($s0)
    ctx->pc = 0x4d9004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d9008: 0xa603233c  sh          $v1, 0x233C($s0)
    ctx->pc = 0x4d9008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d900c: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4D900Cu;
    SET_GPR_U32(ctx, 31, 0x4D9014u);
    ctx->pc = 0x4D9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D900Cu;
    // 0x4d9010: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4D900Cu, 0x4D9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9014u;
label_4d9014:
    // 0x4d9014: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x4d9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4d9018: 0x26450168  addiu       $a1, $s2, 0x168
    ctx->pc = 0x4d9018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
    // 0x4d901c: 0xa642014a  sh          $v0, 0x14A($s2)
    ctx->pc = 0x4d901cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d9020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d9020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d9024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9028: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d9028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d902c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d902cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d9030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d9030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d9034: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d9034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d9038: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d9038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d903c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d903cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d9040: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d9040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d9044: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4d9044u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d9048: 0x8136414  j           func_4D9050
    ctx->pc = 0x4D9048u;
    ctx->pc = 0x4D904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9048u;
    // 0x4d904c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9050u;
    goto label_4d9050;
    ctx->pc = 0x4D9050u;
label_4d9050:
    // 0x4d9050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d9054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d9058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d905c: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4D905Cu;
    SET_GPR_U32(ctx, 31, 0x4D9064u);
    ctx->pc = 0x4D9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D905Cu;
    // 0x4d9060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D905Cu, 0x4D9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9064u;
label_4d9064:
    // 0x4d9064: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d9068: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d9068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d906c: 0x244210e8  addiu       $v0, $v0, 0x10E8
    ctx->pc = 0x4d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4328));
    // 0x4d9070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d9070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10E8u));
    // 0x4d9078: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d9078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d907c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4d907cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4d9080: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4D9080u;
    SET_GPR_U32(ctx, 31, 0x4D9088u);
    ctx->pc = 0x4D9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9080u;
    // 0x4d9084: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4D9080u, 0x4D9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9088u;
label_4d9088:
    // 0x4d9088: 0xc12b3d4  jal         func_4ACF50
    ctx->pc = 0x4D9088u;
    SET_GPR_U32(ctx, 31, 0x4D9090u);
    ctx->pc = 0x4D908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9088u;
    // 0x4d908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF50u, 0x4D9088u, 0x4D9090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9090u;
label_4d9090:
    // 0x4d9090: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D9090u;
    SET_GPR_U32(ctx, 31, 0x4D9098u);
    ctx->pc = 0x4D9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9090u;
    // 0x4d9094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D9090u, 0x4D9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9098u;
label_4d9098:
    // 0x4d9098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d909c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4D909Cu;
    {
        const bool branch_taken_0x4d909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D909Cu;
        // 0x4d90a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d909c) {
            ctx->pc = 0x4D90F4u;
            goto label_4d90f4;
        }
    }
    ctx->pc = 0x4D90A4u;
    // 0x4d90a4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D90A4u;
    SET_GPR_U32(ctx, 31, 0x4D90ACu);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D90A4u, 0x4D90ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D90ACu;
label_4d90ac:
    // 0x4d90ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d90b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D90B0u;
    {
        const bool branch_taken_0x4d90b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D90B0u;
        // 0x4d90b4: 0x2465d680  addiu       $a1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d90b0) {
            ctx->pc = 0x4D90F4u;
            goto label_4d90f4;
        }
    }
    ctx->pc = 0x4D90B8u;
    // 0x4d90b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d90bc: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d90bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d90c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4d90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d90c4: 0xa4a223c4  sh          $v0, 0x23C4($a1)
    ctx->pc = 0x4d90c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d90c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4d90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d90cc: 0xa4a3232c  sh          $v1, 0x232C($a1)
    ctx->pc = 0x4d90ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9004), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d90d0: 0xa4a2232e  sh          $v0, 0x232E($a1)
    ctx->pc = 0x4d90d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d90d4: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4D90D4u;
    SET_GPR_U32(ctx, 31, 0x4D90DCu);
    ctx->pc = 0x4D90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D90D4u;
    // 0x4d90d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4D90D4u, 0x4D90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D90DCu;
label_4d90dc:
    // 0x4d90dc: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D90DCu;
    SET_GPR_U32(ctx, 31, 0x4D90E4u);
    ctx->pc = 0x4D90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D90DCu;
    // 0x4d90e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D90DCu, 0x4D90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D90E4u;
label_4d90e4:
    // 0x4d90e4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D90E4u;
    SET_GPR_U32(ctx, 31, 0x4D90ECu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D90E4u, 0x4D90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D90ECu;
label_4d90ec:
    // 0x4d90ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4d90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d90f0: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d90f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d90f4:
    // 0x4d90f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d90f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d90f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d90f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d90fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D90FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D90FCu;
        // 0x4d9100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D90FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9104u;
    // 0x4d9104: 0x0  nop
    ctx->pc = 0x4d9104u;
    // NOP
label_4d9108:
    // 0x4d9108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d910c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d9110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9114: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4D9114u;
    ctx->pc = 0x4D9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9114u;
    // 0x4d9118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D911Cu;
    // 0x4d911c: 0x0  nop
    ctx->pc = 0x4d911cu;
    // NOP
    ctx->pc = 0x4d9120u;
}
