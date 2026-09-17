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

// Function: sub_00330F20
// Address: 0x330f20 - 0x331060
void sub_00330F20_0x330f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330F20_0x330f20");
#endif

    switch (ctx->pc) {
        case 0x330f40u: goto label_330f40;
        case 0x330fe8u: goto label_330fe8;
        default: break;
    }

    ctx->pc = 0x330f20u;

    // 0x330f20: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x330f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f24: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x330f24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x330f28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f2c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x330f2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f30: 0x240f00c0  addiu       $t7, $zero, 0xC0
    ctx->pc = 0x330f30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x330f34: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x330f34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x330f38: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x330F38u;
    {
        const bool branch_taken_0x330f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F38u;
        // 0x330f3c: 0x241800e0  addiu       $t8, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f38) {
            ctx->pc = 0x330FE8u;
            goto label_330fe8;
        }
    }
    ctx->pc = 0x330F40u;
label_330f40:
    // 0x330f40: 0x144f000f  bne         $v0, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x330F40u;
    {
        const bool branch_taken_0x330f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x330F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F40u;
        // 0x330f44: 0x25620002  addiu       $v0, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f40) {
            ctx->pc = 0x330F80u;
            goto label_330f80;
        }
    }
    ctx->pc = 0x330F48u;
    // 0x330f48: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x330f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x330f4c: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x330f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x330f50: 0x144e003e  bne         $v0, $t6, . + 4 + (0x3E << 2)
    ctx->pc = 0x330F50u;
    {
        const bool branch_taken_0x330f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x330F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F50u;
        // 0x330f54: 0x1a5102a  slt         $v0, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f50) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x330F58u;
    // 0x330f58: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x330f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x330f5c: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x330f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x330f60: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x330f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x330f64: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x330f64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x330f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x330f6c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x330f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x330f70: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x330f70u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x330f74: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x330f74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x330f78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x330F78u;
    {
        const bool branch_taken_0x330f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F78u;
        // 0x330f7c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f78) {
            ctx->pc = 0x330FE8u;
            goto label_330fe8;
        }
    }
    ctx->pc = 0x330F80u;
label_330f80:
    // 0x330f80: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x330f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x330f84: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x330F84u;
    {
        const bool branch_taken_0x330f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F84u;
        // 0x330f88: 0x1a5102a  slt         $v0, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f84) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x330F8Cu;
    // 0x330f8c: 0x306200f0  andi        $v0, $v1, 0xF0
    ctx->pc = 0x330f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x330f90: 0x1458002e  bne         $v0, $t8, . + 4 + (0x2E << 2)
    ctx->pc = 0x330F90u;
    {
        const bool branch_taken_0x330f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x330F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F90u;
        // 0x330f94: 0x1a5102a  slt         $v0, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f90) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x330F98u;
    // 0x330f98: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x330f98u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x330f9c: 0x312800c0  andi        $t0, $t1, 0xC0
    ctx->pc = 0x330f9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)192);
    // 0x330fa0: 0x150e002a  bne         $t0, $t6, . + 4 + (0x2A << 2)
    ctx->pc = 0x330FA0u;
    {
        const bool branch_taken_0x330fa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 14));
        if (branch_taken_0x330fa0) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x330FA8u;
    // 0x330fa8: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x330fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x330fac: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x330facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
    // 0x330fb0: 0x14480026  bne         $v0, $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x330FB0u;
    {
        const bool branch_taken_0x330fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x330FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330FB0u;
        // 0x330fb4: 0x1a5102a  slt         $v0, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330fb0) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x330FB8u;
    // 0x330fb8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x330fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x330fbc: 0x3123003f  andi        $v1, $t1, 0x3F
    ctx->pc = 0x330fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x330fc0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x330fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x330fc4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x330fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x330fc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x330fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x330fcc: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x330fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x330fd0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x330fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x330fd4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x330fd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fd8: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x330fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x330fdc: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x330fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x330fe0: 0x256b0003  addiu       $t3, $t3, 0x3
    ctx->pc = 0x330fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x330fe4: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x330fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_330fe8:
    // 0x330fe8: 0x167102a  slt         $v0, $t3, $a3
    ctx->pc = 0x330fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x330fec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x330FECu;
    {
        const bool branch_taken_0x330fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330FECu;
        // 0x330ff0: 0x25850002  addiu       $a1, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330fec) {
            ctx->pc = 0x331048u;
            goto label_331048;
        }
    }
    ctx->pc = 0x330FF4u;
    // 0x330ff4: 0x1a5102a  slt         $v0, $t5, $a1
    ctx->pc = 0x330ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x330ff8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x330FF8u;
    {
        const bool branch_taken_0x330ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330ff8) {
            ctx->pc = 0x331054u;
            goto label_331054;
        }
    }
    ctx->pc = 0x331000u;
    // 0x331000: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x331000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x331004: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x331004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x331008: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x331008u;
    {
        const bool branch_taken_0x331008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331008u;
        // 0x33100c: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331008) {
            ctx->pc = 0x331030u;
            goto label_331030;
        }
    }
    ctx->pc = 0x331010u;
    // 0x331010: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x331010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x331014: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x331014u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331018: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x331018u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33101c: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x33101cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x331020: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x331020u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x331024: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x331024u;
    {
        const bool branch_taken_0x331024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331024u;
        // 0x331028: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331024) {
            ctx->pc = 0x330FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330fe8;
        }
    }
    ctx->pc = 0x33102Cu;
    // 0x33102c: 0x0  nop
    ctx->pc = 0x33102cu;
    // NOP
label_331030:
    // 0x331030: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x331030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x331034: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x331034u;
    {
        const bool branch_taken_0x331034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331034) {
            ctx->pc = 0x331038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331034u;
            // 0x331038: 0x306200e0  andi        $v0, $v1, 0xE0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
            ctx->in_delay_slot = false;
            ctx->pc = 0x330F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330f40;
        }
    }
    ctx->pc = 0x33103Cu;
    // 0x33103c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33103Cu;
    {
        const bool branch_taken_0x33103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33103Cu;
        // 0x331040: 0x1a5102a  slt         $v0, $t5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33103c) {
            ctx->pc = 0x33104Cu;
            goto label_33104c;
        }
    }
    ctx->pc = 0x331044u;
    // 0x331044: 0x0  nop
    ctx->pc = 0x331044u;
    // NOP
label_331048:
    // 0x331048: 0x1a5102a  slt         $v0, $t5, $a1
    ctx->pc = 0x331048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_33104c:
    // 0x33104c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33104Cu;
    {
        const bool branch_taken_0x33104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33104c) {
            ctx->pc = 0x331050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33104Cu;
            // 0x331050: 0xa5400000  sh          $zero, 0x0($t2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331054u;
            goto label_331054;
        }
    }
    ctx->pc = 0x331054u;
label_331054:
    // 0x331054: 0x3e00008  jr          $ra
    ctx->pc = 0x331054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331054u;
        // 0x331058: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33105Cu;
    // 0x33105c: 0x0  nop
    ctx->pc = 0x33105cu;
    // NOP
    ctx->pc = 0x331060u;
}
