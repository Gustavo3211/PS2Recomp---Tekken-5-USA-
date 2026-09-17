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

// Function: sub_00499B68
// Address: 0x499b68 - 0x499d18
void sub_00499B68_0x499b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499B68_0x499b68");
#endif

    ctx->pc = 0x499b68u;

    // 0x499b68: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x499b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x499b6c: 0x244c0b58  addiu       $t4, $v0, 0xB58
    ctx->pc = 0x499b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x499b70: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B58u));
    // 0x499b74: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499b78: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x499b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499b7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x499B7Cu;
    {
        const bool branch_taken_0x499b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B7Cu;
        // 0x499b80: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b7c) {
            ctx->pc = 0x499BA0u;
            goto label_499ba0;
        }
    }
    ctx->pc = 0x499B84u;
    // 0x499b84: 0x24020186  addiu       $v0, $zero, 0x186
    ctx->pc = 0x499b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x499b88: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x499b88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499b8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499b90: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x499b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499b98: 0x3e00008  jr          $ra
    ctx->pc = 0x499B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B98u;
        // 0x499b9c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499BA0u;
label_499ba0:
    // 0x499ba0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x499ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x499ba4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x499ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x499ba8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x499ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499bac: 0x25080b3c  addiu       $t0, $t0, 0xB3C
    ctx->pc = 0x499bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2876));
    // 0x499bb0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x499bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x499bb4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499bb8: 0x1664825  or          $t1, $t3, $a2
    ctx->pc = 0x499bb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499bbc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B3Cu));
    // 0x499bc0: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x499bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x499bc4: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x499bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x499bc8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499bcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499bd4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499bd8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499bdc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499be0: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x499be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x499be4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499be8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499bec: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499becu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499bf0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x499bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499bf4: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x499bf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x499bf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499c00: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499c04: 0x1225824  and         $t3, $t1, $v0
    ctx->pc = 0x499c04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x499c08: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499c0c: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499c0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499c10: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499c14: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x499c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499c18: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x499c18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499c1c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x499c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x499c20: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x499c20u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499c24: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499c28: 0xa46b0008  sh          $t3, 0x8($v1)
    ctx->pc = 0x499c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x499c2c: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x499c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499c30: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x499c34: 0x94e20016  lhu         $v0, 0x16($a3)
    ctx->pc = 0x499c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x499c38: 0x24e9000a  addiu       $t1, $a3, 0xA
    ctx->pc = 0x499c38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x499c3c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499c40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499c44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499c48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499c4c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499c50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499c54: 0x84e20018  lh          $v0, 0x18($a3)
    ctx->pc = 0x499c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x499c58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499c5c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499c60: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499c60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499c64: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x499c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x499c68: 0x84e5000c  lh          $a1, 0xC($a3)
    ctx->pc = 0x499c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x499c6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499c70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499c74: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499c78: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x499c78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x499c7c: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499c80: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499c80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499c84: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499c84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499c88: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x499c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499c8c: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x499c8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499c90: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x499c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x499c94: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x499c94u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499c98: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499c9c: 0xa46b000c  sh          $t3, 0xC($v1)
    ctx->pc = 0x499c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 11));
    // 0x499ca0: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x499ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499ca4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x499ca8: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x499ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x499cac: 0x24e9000e  addiu       $t1, $a3, 0xE
    ctx->pc = 0x499cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x499cb0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499cb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499cb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499cbc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499cc0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499cc4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499cc8: 0x84e2001c  lh          $v0, 0x1C($a3)
    ctx->pc = 0x499cc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x499ccc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499cd0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499cd4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499cd8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x499cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x499cdc: 0x84e50010  lh          $a1, 0x10($a3)
    ctx->pc = 0x499cdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x499ce0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499ce8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499cec: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x499cecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x499cf0: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499cf4: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499cf8: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499cf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499cfc: 0x1663024  and         $a2, $t3, $a2
    ctx->pc = 0x499cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499d00: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x499d00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x499d04: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x499d04u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x499d08: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x499d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x499D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D0Cu;
        // 0x499d10: 0xa44b0010  sh          $t3, 0x10($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499D14u;
    // 0x499d14: 0x0  nop
    ctx->pc = 0x499d14u;
    // NOP
    ctx->pc = 0x499d18u;
}
