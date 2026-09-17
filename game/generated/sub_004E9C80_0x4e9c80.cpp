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

// Function: sub_004E9C80
// Address: 0x4e9c80 - 0x4e9d98
void sub_004E9C80_0x4e9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9C80_0x4e9c80");
#endif

    switch (ctx->pc) {
        case 0x4e9c80u: goto label_4e9c80;
        case 0x4e9c84u: goto label_4e9c84;
        case 0x4e9c88u: goto label_4e9c88;
        case 0x4e9c8cu: goto label_4e9c8c;
        case 0x4e9c90u: goto label_4e9c90;
        case 0x4e9c94u: goto label_4e9c94;
        case 0x4e9c98u: goto label_4e9c98;
        case 0x4e9c9cu: goto label_4e9c9c;
        case 0x4e9ca0u: goto label_4e9ca0;
        case 0x4e9ca4u: goto label_4e9ca4;
        case 0x4e9ca8u: goto label_4e9ca8;
        case 0x4e9cacu: goto label_4e9cac;
        case 0x4e9cb0u: goto label_4e9cb0;
        case 0x4e9cb4u: goto label_4e9cb4;
        case 0x4e9cb8u: goto label_4e9cb8;
        case 0x4e9cbcu: goto label_4e9cbc;
        case 0x4e9cc0u: goto label_4e9cc0;
        case 0x4e9cc4u: goto label_4e9cc4;
        case 0x4e9cc8u: goto label_4e9cc8;
        case 0x4e9cccu: goto label_4e9ccc;
        case 0x4e9cd0u: goto label_4e9cd0;
        case 0x4e9cd4u: goto label_4e9cd4;
        case 0x4e9cd8u: goto label_4e9cd8;
        case 0x4e9cdcu: goto label_4e9cdc;
        case 0x4e9ce0u: goto label_4e9ce0;
        case 0x4e9ce4u: goto label_4e9ce4;
        case 0x4e9ce8u: goto label_4e9ce8;
        case 0x4e9cecu: goto label_4e9cec;
        case 0x4e9cf0u: goto label_4e9cf0;
        case 0x4e9cf4u: goto label_4e9cf4;
        case 0x4e9cf8u: goto label_4e9cf8;
        case 0x4e9cfcu: goto label_4e9cfc;
        case 0x4e9d00u: goto label_4e9d00;
        case 0x4e9d04u: goto label_4e9d04;
        case 0x4e9d08u: goto label_4e9d08;
        case 0x4e9d0cu: goto label_4e9d0c;
        case 0x4e9d10u: goto label_4e9d10;
        case 0x4e9d14u: goto label_4e9d14;
        case 0x4e9d18u: goto label_4e9d18;
        case 0x4e9d1cu: goto label_4e9d1c;
        case 0x4e9d20u: goto label_4e9d20;
        case 0x4e9d24u: goto label_4e9d24;
        case 0x4e9d28u: goto label_4e9d28;
        case 0x4e9d2cu: goto label_4e9d2c;
        case 0x4e9d30u: goto label_4e9d30;
        case 0x4e9d34u: goto label_4e9d34;
        case 0x4e9d38u: goto label_4e9d38;
        case 0x4e9d3cu: goto label_4e9d3c;
        case 0x4e9d40u: goto label_4e9d40;
        case 0x4e9d44u: goto label_4e9d44;
        case 0x4e9d48u: goto label_4e9d48;
        case 0x4e9d4cu: goto label_4e9d4c;
        case 0x4e9d50u: goto label_4e9d50;
        case 0x4e9d54u: goto label_4e9d54;
        case 0x4e9d58u: goto label_4e9d58;
        case 0x4e9d5cu: goto label_4e9d5c;
        case 0x4e9d60u: goto label_4e9d60;
        case 0x4e9d64u: goto label_4e9d64;
        case 0x4e9d68u: goto label_4e9d68;
        case 0x4e9d6cu: goto label_4e9d6c;
        case 0x4e9d70u: goto label_4e9d70;
        case 0x4e9d74u: goto label_4e9d74;
        case 0x4e9d78u: goto label_4e9d78;
        case 0x4e9d7cu: goto label_4e9d7c;
        case 0x4e9d80u: goto label_4e9d80;
        case 0x4e9d84u: goto label_4e9d84;
        case 0x4e9d88u: goto label_4e9d88;
        case 0x4e9d8cu: goto label_4e9d8c;
        case 0x4e9d90u: goto label_4e9d90;
        case 0x4e9d94u: goto label_4e9d94;
        default: break;
    }

    ctx->pc = 0x4e9c80u;

label_4e9c80:
    // 0x4e9c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e9c84:
    // 0x4e9c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e9c88:
    // 0x4e9c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9c8c:
    // 0x4e9c8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e9c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e9c90:
    // 0x4e9c90: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x4e9c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_4e9c94:
    // 0x4e9c94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e9c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4e9c98:
    // 0x4e9c98: 0x26030162  addiu       $v1, $s0, 0x162
    ctx->pc = 0x4e9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
label_4e9c9c:
    // 0x4e9c9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e9c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4e9ca0:
    // 0x4e9ca0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4e9ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9ca4:
    // 0x4e9ca4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e9ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4e9ca8:
    // 0x4e9ca8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4e9ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cac:
    // 0x4e9cac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e9cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4e9cb0:
    // 0x4e9cb0: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e9cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4e9cb4:
    // 0x4e9cb4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4e9cb8:
    // 0x4e9cb8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x4e9cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e9cbc:
    // 0x4e9cbc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e9cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4e9cc0:
    // 0x4e9cc0: 0x3c170055  lui         $s7, 0x55
    ctx->pc = 0x4e9cc0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
label_4e9cc4:
    // 0x4e9cc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e9cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e9cc8:
    // 0x4e9cc8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e9ccc:
    // 0x4e9ccc: 0x249211e8  addiu       $s2, $a0, 0x11E8
    ctx->pc = 0x4e9cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
label_4e9cd0:
    // 0x4e9cd0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e9cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9cd4:
    // 0x4e9cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4e9cd8:
    // 0x4e9cd8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e9cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9cdc:
    // 0x4e9cdc: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4e9cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e9ce0:
    // 0x4e9ce0: 0x26e58038  addiu       $a1, $s7, -0x7FC8
    ctx->pc = 0x4e9ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294934584));
label_4e9ce4:
    // 0x4e9ce4: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4e9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_4e9ce8:
    // 0x4e9ce8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4e9ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_4e9cec:
    // 0x4e9cec: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4e9cecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_4e9cf0:
    // 0x4e9cf0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e9cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e9cf4:
    // 0x4e9cf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4e9cf8:
    // 0x4e9cf8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4e9cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4e9cfc:
    // 0x4e9cfc: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4e9cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e9d00:
    // 0x4e9d00: 0x54960005  bnel        $a0, $s6, . + 4 + (0x5 << 2)
label_4e9d04:
    if (ctx->pc == 0x4E9D04u) {
        ctx->pc = 0x4E9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D00u;
        // 0x4e9d04: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D08u;
        goto label_4e9d08;
    }
    ctx->pc = 0x4E9D00u;
    {
        const bool branch_taken_0x4e9d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x4e9d00) {
            ctx->pc = 0x4E9D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9D00u;
            // 0x4e9d04: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9D18u;
            goto label_4e9d18;
        }
    }
    ctx->pc = 0x4E9D08u;
label_4e9d08:
    // 0x4e9d08: 0xc13bcb2  jal         func_4EF2C8
label_4e9d0c:
    if (ctx->pc == 0x4E9D0Cu) {
        ctx->pc = 0x4E9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D08u;
        // 0x4e9d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D10u;
        goto label_4e9d10;
    }
    ctx->pc = 0x4E9D08u;
    SET_GPR_U32(ctx, 31, 0x4E9D10u);
    ctx->pc = 0x4E9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9D08u;
    // 0x4e9d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF2C8u, 0x4E9D08u, 0x4E9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9D10u;
label_4e9d10:
    // 0x4e9d10: 0x10000017  b           . + 4 + (0x17 << 2)
label_4e9d14:
    if (ctx->pc == 0x4E9D14u) {
        ctx->pc = 0x4E9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D10u;
        // 0x4e9d14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D18u;
        goto label_4e9d18;
    }
    ctx->pc = 0x4E9D10u;
    {
        const bool branch_taken_0x4e9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D10u;
        // 0x4e9d14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9d10) {
            ctx->pc = 0x4E9D70u;
            goto label_4e9d70;
        }
    }
    ctx->pc = 0x4E9D18u;
label_4e9d18:
    // 0x4e9d18: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e9d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e9d1c:
    // 0x4e9d1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e9d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e9d20:
    // 0x4e9d20: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e9d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4e9d24:
    // 0x4e9d24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e9d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9d28:
    // 0x4e9d28: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4e9d2c:
    // 0x4e9d2c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e9d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4e9d30:
    // 0x4e9d30: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4e9d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4e9d34:
    // 0x4e9d34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4e9d38:
    if (ctx->pc == 0x4E9D38u) {
        ctx->pc = 0x4E9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D34u;
        // 0x4e9d38: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D3Cu;
        goto label_4e9d3c;
    }
    ctx->pc = 0x4E9D34u;
    {
        const bool branch_taken_0x4e9d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9d34) {
            ctx->pc = 0x4E9D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9D34u;
            // 0x4e9d38: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9D50u;
            goto label_4e9d50;
        }
    }
    ctx->pc = 0x4E9D3Cu;
label_4e9d3c:
    // 0x4e9d3c: 0xc13a788  jal         func_4E9E20
label_4e9d40:
    if (ctx->pc == 0x4E9D40u) {
        ctx->pc = 0x4E9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D3Cu;
        // 0x4e9d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D44u;
        goto label_4e9d44;
    }
    ctx->pc = 0x4E9D3Cu;
    SET_GPR_U32(ctx, 31, 0x4E9D44u);
    ctx->pc = 0x4E9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9D3Cu;
    // 0x4e9d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E20u, 0x4E9D3Cu, 0x4E9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9D44u;
label_4e9d44:
    // 0x4e9d44: 0x1000000a  b           . + 4 + (0xA << 2)
label_4e9d48:
    if (ctx->pc == 0x4E9D48u) {
        ctx->pc = 0x4E9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D44u;
        // 0x4e9d48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D4Cu;
        goto label_4e9d4c;
    }
    ctx->pc = 0x4E9D44u;
    {
        const bool branch_taken_0x4e9d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D44u;
        // 0x4e9d48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9d44) {
            ctx->pc = 0x4E9D70u;
            goto label_4e9d70;
        }
    }
    ctx->pc = 0x4E9D4Cu;
label_4e9d4c:
    // 0x4e9d4c: 0x0  nop
    ctx->pc = 0x4e9d4cu;
    // NOP
label_4e9d50:
    // 0x4e9d50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4e9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4e9d54:
    // 0x4e9d54: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e9d54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e9d58:
    // 0x4e9d58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4e9d5c:
    // 0x4e9d5c: 0x60f809  jalr        $v1
label_4e9d60:
    if (ctx->pc == 0x4E9D60u) {
        ctx->pc = 0x4E9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D5Cu;
        // 0x4e9d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D64u;
        goto label_4e9d64;
    }
    ctx->pc = 0x4E9D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9D64u);
        ctx->pc = 0x4E9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D5Cu;
        // 0x4e9d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D5Cu, 0x4E9D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9D64u;
label_4e9d64:
    // 0x4e9d64: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_4e9d68:
    if (ctx->pc == 0x4E9D68u) {
        ctx->pc = 0x4E9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D64u;
        // 0x4e9d68: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D6Cu;
        goto label_4e9d6c;
    }
    ctx->pc = 0x4E9D64u;
    {
        const bool branch_taken_0x4e9d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D64u;
        // 0x4e9d68: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9d64) {
            ctx->pc = 0x4E9CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e9ce0;
        }
    }
    ctx->pc = 0x4E9D6Cu;
label_4e9d6c:
    // 0x4e9d6c: 0x0  nop
    ctx->pc = 0x4e9d6cu;
    // NOP
label_4e9d70:
    // 0x4e9d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e9d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e9d74:
    // 0x4e9d74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e9d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9d78:
    // 0x4e9d78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e9d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4e9d7c:
    // 0x4e9d7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e9d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9d80:
    // 0x4e9d80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e9d80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4e9d84:
    // 0x4e9d84: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e9d84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9d88:
    // 0x4e9d88: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e9d88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4e9d8c:
    // 0x4e9d8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e9d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9d90:
    // 0x4e9d90: 0x3e00008  jr          $ra
label_4e9d94:
    if (ctx->pc == 0x4E9D94u) {
        ctx->pc = 0x4E9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D90u;
        // 0x4e9d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D98u;
        goto label_fallthrough_0x4e9d90;
    }
    ctx->pc = 0x4E9D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D90u;
        // 0x4e9d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e9d90:
    ctx->pc = 0x4E9D98u;
}
