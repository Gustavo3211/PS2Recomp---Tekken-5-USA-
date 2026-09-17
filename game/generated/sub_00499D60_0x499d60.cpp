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

// Function: sub_00499D60
// Address: 0x499d60 - 0x499f10
void sub_00499D60_0x499d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499D60_0x499d60");
#endif

    ctx->pc = 0x499d60u;

    // 0x499d60: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x499d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x499d64: 0x244c0b58  addiu       $t4, $v0, 0xB58
    ctx->pc = 0x499d64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x499d68: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x499d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B58u));
    // 0x499d6c: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x499d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x499d70: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x499d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499d74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x499D74u;
    {
        const bool branch_taken_0x499d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D74u;
        // 0x499d78: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d74) {
            ctx->pc = 0x499D90u;
            goto label_499d90;
        }
    }
    ctx->pc = 0x499D7Cu;
    // 0x499d7c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x499d7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x499d84: 0x3e00008  jr          $ra
    ctx->pc = 0x499D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D84u;
        // 0x499d88: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499D8Cu;
    // 0x499d8c: 0x0  nop
    ctx->pc = 0x499d8cu;
    // NOP
label_499d90:
    // 0x499d90: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x499d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x499d94: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x499d94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x499d98: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x499d98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499d9c: 0x25080b3c  addiu       $t0, $t0, 0xB3C
    ctx->pc = 0x499d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2876));
    // 0x499da0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x499da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x499da4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499da8: 0x1664825  or          $t1, $t3, $a2
    ctx->pc = 0x499da8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499dac: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499dacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B3Cu));
    // 0x499db0: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x499db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x499db4: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x499db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x499db8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499dbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499dc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499dc4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499dc8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499dcc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499dd0: 0x84620014  lh          $v0, 0x14($v1)
    ctx->pc = 0x499dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x499dd4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499dd8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499ddc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x499ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x499de0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499de0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499de4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x499de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499de8: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x499de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x499dec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499df4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499df8: 0x1225824  and         $t3, $t1, $v0
    ctx->pc = 0x499df8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x499dfc: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499e00: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499e00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499e04: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499e04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499e08: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x499e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499e0c: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x499e0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499e10: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x499e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x499e14: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x499e14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499e18: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499e1c: 0xa46b0008  sh          $t3, 0x8($v1)
    ctx->pc = 0x499e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x499e20: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x499e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499e24: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x499e28: 0x94e20016  lhu         $v0, 0x16($a3)
    ctx->pc = 0x499e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x499e2c: 0x24e9000a  addiu       $t1, $a3, 0xA
    ctx->pc = 0x499e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x499e30: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499e34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499e38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499e3c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499e40: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499e44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499e48: 0x84e20018  lh          $v0, 0x18($a3)
    ctx->pc = 0x499e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x499e4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499e50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499e54: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x499e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x499e58: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499e58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499e5c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x499e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x499e60: 0x84e5000c  lh          $a1, 0xC($a3)
    ctx->pc = 0x499e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x499e64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499e68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499e6c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499e70: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x499e70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x499e74: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499e78: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499e78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499e7c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499e80: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x499e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499e84: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x499e84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x499e88: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x499e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x499e8c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x499e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499e90: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x499e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499e94: 0xa46b000c  sh          $t3, 0xC($v1)
    ctx->pc = 0x499e94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 11));
    // 0x499e98: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x499e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499e9c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x499e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x499ea0: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x499ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x499ea4: 0x24e9000e  addiu       $t1, $a3, 0xE
    ctx->pc = 0x499ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x499ea8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x499ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x499eac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499eb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499eb4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499eb8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499ebc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499ec0: 0x84e2001c  lh          $v0, 0x1C($a3)
    ctx->pc = 0x499ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x499ec4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x499ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x499ec8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499ecc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x499eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x499ed0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x499ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x499ed4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x499ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x499ed8: 0x84e50010  lh          $a1, 0x10($a3)
    ctx->pc = 0x499ed8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x499edc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499ee0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499ee4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x499ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x499ee8: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x499ee8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x499eec: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x499eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x499ef0: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x499ef0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x499ef4: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x499ef4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x499ef8: 0x1663024  and         $a2, $t3, $a2
    ctx->pc = 0x499ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x499efc: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x499efcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x499f00: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x499f00u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x499f04: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x499f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x499f08: 0x3e00008  jr          $ra
    ctx->pc = 0x499F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499F08u;
        // 0x499f0c: 0xa44b0010  sh          $t3, 0x10($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499F10u;
}
