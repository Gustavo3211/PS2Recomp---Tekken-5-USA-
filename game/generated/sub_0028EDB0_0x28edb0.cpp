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

// Function: sub_0028EDB0
// Address: 0x28edb0 - 0x28f038
void sub_0028EDB0_0x28edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EDB0_0x28edb0");
#endif

    switch (ctx->pc) {
        case 0x28edd8u: goto label_28edd8;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee58u: goto label_28ee58;
        case 0x28eea0u: goto label_28eea0;
        case 0x28eed8u: goto label_28eed8;
        case 0x28ef40u: goto label_28ef40;
        case 0x28ef80u: goto label_28ef80;
        case 0x28efe8u: goto label_28efe8;
        case 0x28eff8u: goto label_28eff8;
        default: break;
    }

    ctx->pc = 0x28edb0u;

    // 0x28edb0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x28edb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28edb8: 0x1542009d  bne         $t2, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x28EDB8u;
    {
        const bool branch_taken_0x28edb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDB8u;
        // 0x28edbc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edb8) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EDC0u;
    // 0x28edc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edc4: 0x15220019  bne         $t1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28EDC4u;
    {
        const bool branch_taken_0x28edc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDC4u;
        // 0x28edc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edc4) {
            ctx->pc = 0x28EE2Cu;
            goto label_28ee2c;
        }
    }
    ctx->pc = 0x28EDCCu;
    // 0x28edcc: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x28edccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x28edd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edd4: 0x24c56e28  addiu       $a1, $a2, 0x6E28
    ctx->pc = 0x28edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28200));
label_28edd8:
    // 0x28edd8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28eddc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ede0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28ede4: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x28ede4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28ede8: 0x0  nop
    ctx->pc = 0x28ede8u;
    // NOP
    // 0x28edec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28EDECu;
    {
        const bool branch_taken_0x28edec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDECu;
        // 0x28edf0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edec) {
            ctx->pc = 0x28EDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28edd8;
        }
    }
    ctx->pc = 0x28EDF4u;
    // 0x28edf4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28edf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28edfc: 0x24456e30  addiu       $a1, $v0, 0x6E30
    ctx->pc = 0x28edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
label_28ee00:
    // 0x28ee00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ee04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ee08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28ee0c: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x28ee0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x28ee10: 0x0  nop
    ctx->pc = 0x28ee10u;
    // NOP
    // 0x28ee14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28EE14u;
    {
        const bool branch_taken_0x28ee14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE14u;
        // 0x28ee18: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee14) {
            ctx->pc = 0x28EE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ee00;
        }
    }
    ctx->pc = 0x28EE1Cu;
    // 0x28ee1c: 0x24c26e28  addiu       $v0, $a2, 0x6E28
    ctx->pc = 0x28ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28200));
    // 0x28ee20: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x28ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x28ee24: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x28ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x28ee28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28ee2c:
    // 0x28ee2c: 0x15420080  bne         $t2, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x28EE2Cu;
    {
        const bool branch_taken_0x28ee2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ee2c) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EE34u;
    // 0x28ee34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee38: 0x5522000f  bnel        $t1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28EE38u;
    {
        const bool branch_taken_0x28ee38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ee38) {
            ctx->pc = 0x28EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE38u;
            // 0x28ee3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EE78u;
            goto label_28ee78;
        }
    }
    ctx->pc = 0x28EE40u;
    // 0x28ee40: 0xa380b3c1  sb          $zero, -0x4C3F($gp)
    ctx->pc = 0x28ee40u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294947777), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ee44: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28EE44u;
    {
        const bool branch_taken_0x28ee44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE44u;
        // 0x28ee48: 0xa380b3c0  sb          $zero, -0x4C40($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294947776), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee44) {
            ctx->pc = 0x28EE74u;
            goto label_28ee74;
        }
    }
    ctx->pc = 0x28EE4Cu;
    // 0x28ee4c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28ee50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee54: 0x24456e70  addiu       $a1, $v0, 0x6E70
    ctx->pc = 0x28ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
label_28ee58:
    // 0x28ee58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ee5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ee60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28ee64: 0x28830021  slti        $v1, $a0, 0x21
    ctx->pc = 0x28ee64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28ee68: 0x0  nop
    ctx->pc = 0x28ee68u;
    // NOP
    // 0x28ee6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28EE6Cu;
    {
        const bool branch_taken_0x28ee6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE6Cu;
        // 0x28ee70: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee6c) {
            ctx->pc = 0x28EE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ee58;
        }
    }
    ctx->pc = 0x28EE74u;
label_28ee74:
    // 0x28ee74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28ee78:
    // 0x28ee78: 0x1542006d  bne         $t2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x28EE78u;
    {
        const bool branch_taken_0x28ee78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ee78) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EE80u;
    // 0x28ee80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ee84: 0x15220020  bne         $t1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28EE84u;
    {
        const bool branch_taken_0x28ee84 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE84u;
        // 0x28ee88: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee84) {
            ctx->pc = 0x28EF08u;
            goto label_28ef08;
        }
    }
    ctx->pc = 0x28EE8Cu;
    // 0x28ee8c: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x28ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x28ee90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ee90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee94: 0x25026ef8  addiu       $v0, $t0, 0x6EF8
    ctx->pc = 0x28ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28408));
    // 0x28ee98: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x28ee98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x176F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F34u, _value); } while (0);
    // 0x28ee9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28ee9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28eea0:
    // 0x28eea0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x28eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28eea4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28eea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28eea8: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x28eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28eeac: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x28eeacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28eeb0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28eeb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eeb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28eeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eeb8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x28eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x28eebc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x28eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x28eec0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28EEC0u;
    {
        const bool branch_taken_0x28eec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEC0u;
        // 0x28eec4: 0xaca00070  sw          $zero, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eec0) {
            ctx->pc = 0x28EEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eea0;
        }
    }
    ctx->pc = 0x28EEC8u;
    // 0x28eec8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28eecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28eeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eed0: 0x24466ef8  addiu       $a2, $v0, 0x6EF8
    ctx->pc = 0x28eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28408));
    // 0x28eed4: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x28eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28eed8:
    // 0x28eed8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28eedc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28eee0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x28eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x28eee4: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x28eee4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28eee8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x28eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28eeec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28eef0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28eef4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28EEF4u;
    {
        const bool branch_taken_0x28eef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEF4u;
        // 0x28eef8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eef4) {
            ctx->pc = 0x28EED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eed8;
        }
    }
    ctx->pc = 0x28EEFCu;
    // 0x28eefc: 0x25026ef8  addiu       $v0, $t0, 0x6EF8
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28408));
    // 0x28ef00: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x28ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x28ef04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28ef08:
    // 0x28ef08: 0x15420049  bne         $t2, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x28EF08u;
    {
        const bool branch_taken_0x28ef08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ef08) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EF10u;
    // 0x28ef10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ef14: 0x15220027  bne         $t1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x28EF14u;
    {
        const bool branch_taken_0x28ef14 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF14u;
        // 0x28ef18: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef14) {
            ctx->pc = 0x28EFB4u;
            goto label_28efb4;
        }
    }
    ctx->pc = 0x28EF1Cu;
    // 0x28ef1c: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x28ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x28ef20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ef20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef24: 0x25026f88  addiu       $v0, $t0, 0x6F88
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28552));
    // 0x28ef28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ef28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef2c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28ef2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x176F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F8Cu, _value); } while (0);
    // 0x28ef30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ef30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x176F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F88u, _value); } while (0);
    // 0x28ef34: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x28ef34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28ef38: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x28ef38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x176F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x176F9Cu, _value); } while (0);
    // 0x28ef3c: 0x0  nop
    ctx->pc = 0x28ef3cu;
    // NOP
label_28ef40:
    // 0x28ef40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28ef44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28ef48: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28ef4c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28ef50: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x28ef50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28ef54: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x28ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x28ef58: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28EF58u;
    {
        const bool branch_taken_0x28ef58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF58u;
        // 0x28ef5c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef58) {
            ctx->pc = 0x28EF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ef40;
        }
    }
    ctx->pc = 0x28EF60u;
    // 0x28ef60: 0x25026f88  addiu       $v0, $t0, 0x6F88
    ctx->pc = 0x28ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28552));
    // 0x28ef64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ef64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ef68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef6c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x28ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x28ef70: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x28ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x28ef74: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28ef78: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x28ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x28ef7c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x28ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_28ef80:
    // 0x28ef80: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28ef84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28ef88: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x28ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28ef8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28ef90: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x28ef90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28ef94: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x28ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x28ef98: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28EF98u;
    {
        const bool branch_taken_0x28ef98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF98u;
        // 0x28ef9c: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef98) {
            ctx->pc = 0x28EF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ef80;
        }
    }
    ctx->pc = 0x28EFA0u;
    // 0x28efa0: 0x25026f88  addiu       $v0, $t0, 0x6F88
    ctx->pc = 0x28efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28552));
    // 0x28efa4: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x28efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x28efa8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x28efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x28efac: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x28efacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x28efb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28efb4:
    // 0x28efb4: 0x1542001e  bne         $t2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28EFB4u;
    {
        const bool branch_taken_0x28efb4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x28efb4) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EFBCu;
    // 0x28efbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28efc0: 0x1522001b  bne         $t1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28EFC0u;
    {
        const bool branch_taken_0x28efc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x28efc0) {
            ctx->pc = 0x28F030u;
            goto label_28f030;
        }
    }
    ctx->pc = 0x28EFC8u;
    // 0x28efc8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28efcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28efd0: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x28efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x28efd4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x28efd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x17700Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x17700Cu, _value); } while (0);
    // 0x28efd8: 0x244a000c  addiu       $t2, $v0, 0xC
    ctx->pc = 0x28efd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x28efdc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x28efdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177018u, _value); } while (0);
    // 0x28efe0: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x28efe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28efe4: 0x0  nop
    ctx->pc = 0x28efe4u;
    // NOP
label_28efe8:
    // 0x28efe8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x28efe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28efec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28efecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eff0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x28eff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eff4: 0x0  nop
    ctx->pc = 0x28eff4u;
    // NOP
label_28eff8:
    // 0x28eff8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x28eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28effc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28effcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f004: 0x28a40004  slti        $a0, $a1, 0x4
    ctx->pc = 0x28f004u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28f008: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28f00c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28f00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f010: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x28f010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x28f014: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28F014u;
    {
        const bool branch_taken_0x28f014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F014u;
        // 0x28f018: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f014) {
            ctx->pc = 0x28EFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eff8;
        }
    }
    ctx->pc = 0x28F01Cu;
    // 0x28f01c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28f01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28f020: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x28f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x28f024: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x28f024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28f028: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28F028u;
    {
        const bool branch_taken_0x28f028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F028u;
        // 0x28f02c: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f028) {
            ctx->pc = 0x28EFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28efe8;
        }
    }
    ctx->pc = 0x28F030u;
label_28f030:
    // 0x28f030: 0x3e00008  jr          $ra
    ctx->pc = 0x28F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F038u;
}
