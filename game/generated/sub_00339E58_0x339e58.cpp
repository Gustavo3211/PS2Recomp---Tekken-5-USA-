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

// Function: sub_00339E58
// Address: 0x339e58 - 0x33a010
void sub_00339E58_0x339e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339E58_0x339e58");
#endif

    switch (ctx->pc) {
        case 0x339ed0u: goto label_339ed0;
        case 0x339f10u: goto label_339f10;
        case 0x339fe0u: goto label_339fe0;
        default: break;
    }

    ctx->pc = 0x339e58u;

    // 0x339e58: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x339e58u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339e5c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x339e5cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339e64: 0xf10c0  sll         $v0, $t7, 3
    ctx->pc = 0x339e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x339e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339e6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x339e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339e70: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x339e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x339e74: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x339e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x339e78: 0x244e0010  addiu       $t6, $v0, 0x10
    ctx->pc = 0x339e78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x339e7c: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x339e7cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x339e80: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x339e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x339e84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x339e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x339e88: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x339e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x339e8c: 0x8f250008  lw          $a1, 0x8($t9)
    ctx->pc = 0x339e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x339e90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x339e94: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x339e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x339e98: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x339e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x339e9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x339e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339ea0: 0x3066821  addu        $t5, $t8, $a2
    ctx->pc = 0x339ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x339ea4: 0x3026021  addu        $t4, $t8, $v0
    ctx->pc = 0x339ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x339ea8: 0x1a31024  and         $v0, $t5, $v1
    ctx->pc = 0x339ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x339eac: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x339eacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x339eb0: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x339eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x339eb4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x339eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x339eb8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x339eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x339ebc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x339EBCu;
    {
        const bool branch_taken_0x339ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EBCu;
        // 0x339ec0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ebc) {
            ctx->pc = 0x339EF8u;
            goto label_339ef8;
        }
    }
    ctx->pc = 0x339EC4u;
    // 0x339ec4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x339ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ec8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x339EC8u;
    {
        const bool branch_taken_0x339ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x339ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EC8u;
        // 0x339ecc: 0x1a0182d  daddu       $v1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ec8) {
            ctx->pc = 0x339F30u;
            goto label_339f30;
        }
    }
    ctx->pc = 0x339ED0u;
label_339ed0:
    // 0x339ed0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x339ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x339ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x339ed8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x339ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x339edc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x339edcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x339ee0: 0x0  nop
    ctx->pc = 0x339ee0u;
    // NOP
    // 0x339ee4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339EE4u;
    {
        const bool branch_taken_0x339ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EE4u;
        // 0x339ee8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ee4) {
            ctx->pc = 0x339ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339ed0;
        }
    }
    ctx->pc = 0x339EECu;
    // 0x339eec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x339EECu;
    {
        const bool branch_taken_0x339eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EECu;
        // 0x339ef0: 0x8f380004  lw          $t8, 0x4($t9) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339eec) {
            ctx->pc = 0x339F30u;
            goto label_339f30;
        }
    }
    ctx->pc = 0x339EF4u;
    // 0x339ef4: 0x0  nop
    ctx->pc = 0x339ef4u;
    // NOP
label_339ef8:
    // 0x339ef8: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x339ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x339efc: 0x1a51821  addu        $v1, $t5, $a1
    ctx->pc = 0x339efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x339f00: 0x244cffff  addiu       $t4, $v0, -0x1
    ctx->pc = 0x339f00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x339f04: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x339F04u;
    {
        const bool branch_taken_0x339f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F04u;
        // 0x339f08: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f04) {
            ctx->pc = 0x339F30u;
            goto label_339f30;
        }
    }
    ctx->pc = 0x339F0Cu;
    // 0x339f0c: 0x0  nop
    ctx->pc = 0x339f0cu;
    // NOP
label_339f10:
    // 0x339f10: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x339f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339f14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x339f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x339f18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x339f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x339f1c: 0xa1820000  sb          $v0, 0x0($t4)
    ctx->pc = 0x339f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x339f20: 0x0  nop
    ctx->pc = 0x339f20u;
    // NOP
    // 0x339f24: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339F24u;
    {
        const bool branch_taken_0x339f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F24u;
        // 0x339f28: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f24) {
            ctx->pc = 0x339F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339f10;
        }
    }
    ctx->pc = 0x339F2Cu;
    // 0x339f2c: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x339f2cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
label_339f30:
    // 0x339f30: 0x3063021  addu        $a2, $t8, $a2
    ctx->pc = 0x339f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x339f34: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x339f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x339f38: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x339f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x339f3c: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x339f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x339f40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x339f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x339f44: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x339f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x339f48: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x339f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x339f4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x339f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x339f50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339f54: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x339f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x339f58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x339f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x339f5c: 0x7282b  sltu        $a1, $zero, $a3
    ctx->pc = 0x339f5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x339f60: 0x52f00  sll         $a1, $a1, 28
    ctx->pc = 0x339f60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x339f64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x339f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x339f68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x339f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x339f6c: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x339f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x339f70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x339f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x339f74: 0x8202b  sltu        $a0, $zero, $t0
    ctx->pc = 0x339f74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x339f78: 0x42780  sll         $a0, $a0, 30
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x339f7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x339f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x339f80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x339f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x339f84: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x339f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x339f88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x339f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x339f8c: 0x9182b  sltu        $v1, $zero, $t1
    ctx->pc = 0x339f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x339f90: 0x31f40  sll         $v1, $v1, 29
    ctx->pc = 0x339f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
    // 0x339f94: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x339f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x339f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339f9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x339f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339fa0: 0xa282b  sltu        $a1, $zero, $t2
    ctx->pc = 0x339fa0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x339fa4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x339fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x339fa8: 0x52fc0  sll         $a1, $a1, 31
    ctx->pc = 0x339fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
    // 0x339fac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x339facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x339fb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x339fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x339fb4: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x339fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x339fb8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x339fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x339fbc: 0x6f7823  subu        $t7, $v1, $t7
    ctx->pc = 0x339fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x339fc0: 0x8dc20004  lw          $v0, 0x4($t6)
    ctx->pc = 0x339fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x339fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x339fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339fc8: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x339fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x339fcc: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x339fccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x339fd0: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x339fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x339fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x339fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339fd8: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x339FD8u;
    {
        const bool branch_taken_0x339fd8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x339FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FD8u;
        // 0x339fdc: 0xaf220008  sw          $v0, 0x8($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fd8) {
            ctx->pc = 0x339FFCu;
            goto label_339ffc;
        }
    }
    ctx->pc = 0x339FE0u;
label_339fe0:
    // 0x339fe0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x339fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x339fe4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x339fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x339fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x339fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339fec: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x339fecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x339ff0: 0x0  nop
    ctx->pc = 0x339ff0u;
    // NOP
    // 0x339ff4: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339FF4u;
    {
        const bool branch_taken_0x339ff4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x339FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FF4u;
        // 0x339ff8: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ff4) {
            ctx->pc = 0x339FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339fe0;
        }
    }
    ctx->pc = 0x339FFCu;
label_339ffc:
    // 0x339ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a004: 0x3e00008  jr          $ra
    ctx->pc = 0x33A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A004u;
        // 0x33a008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A00Cu;
    // 0x33a00c: 0x0  nop
    ctx->pc = 0x33a00cu;
    // NOP
    ctx->pc = 0x33a010u;
}
